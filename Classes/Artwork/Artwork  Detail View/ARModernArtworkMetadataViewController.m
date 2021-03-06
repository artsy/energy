#import "ARModernArtworkMetadataViewController.h"
#import "ARArtworkMetadataView.h"
#import "ARArtworkMetadataExtendedView.h"
#import "NSAttributedString+Artsy.h"
#import "ARModernArtworkInfoViewController.h"
#import "AROptions.h"
#import "ARArtworkAvailabilityEditViewController.h"
#import "ARPopoverController.h"


@interface ARModernArtworkMetadataViewController ()

@property (nonatomic, strong, readonly) UITapGestureRecognizer *artworkInfoTapGesture;
@property (nonatomic, strong, readonly) UISwipeGestureRecognizer *artworkInfoSwipeGesture;
@property (nonatomic, strong, readonly) UILongPressGestureRecognizer *availabilityChangeGesture;

@property (nonatomic, strong) UIView<ARArtworkMetadataViewable> *view;
@property (nonatomic, strong) NSUserDefaults *defaults;
@end


@implementation ARModernArtworkMetadataViewController
@dynamic view;

- (void)dealloc
{
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

- (void)loadView
{
    if (self.constrainedHorizontalSpace) {
        self.view = [[ARArtworkMetadataView alloc] init];

        // determines how many lines of metadata should be displayed; if screen height is less than 480, only  4 lines are shown
        NSInteger maxLabels;

        if ([UIDevice hasSmallScreen]) {
            maxLabels = self.constrainedVerticalSpace ? 4 : NSNotFound;
        } else {
            maxLabels = self.constrainedVerticalSpace ? 5 : NSNotFound;
        }

        [(ARArtworkMetadataView *)self.view setMaxAllowedInputs:maxLabels];

    } else {
        ARArtworkMetadataExtendedView *artworkView = [[ARArtworkMetadataExtendedView alloc] init];
        artworkView.constrainedVerticalSpace = self.hasConstraintVerticalSpace;
        self.view = artworkView;
    }
}

- (void)viewDidLoad
{
    [super viewDidLoad];

    [self addGestureRecognisers];
    [self registerForNotifications];
}

- (void)addGestureRecognisers
{
    _artworkInfoTapGesture = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(artworkInfoTapped:)];
    _artworkInfoSwipeGesture = [[UISwipeGestureRecognizer alloc] initWithTarget:self action:@selector(artworkInfoTapped:)];
    _artworkInfoSwipeGesture.direction = UISwipeGestureRecognizerDirectionUp;
    _availabilityChangeGesture = [[UILongPressGestureRecognizer alloc] initWithTarget:self action:@selector(changeArtworkAvailability:)];

    [self.view addGestureRecognizer:_artworkInfoTapGesture];
    [self.view addGestureRecognizer:_artworkInfoSwipeGesture];
    [self.view addGestureRecognizer:_availabilityChangeGesture];
}

- (void)artworkInfoTapped:(UIGestureRecognizer *)gesture
{
    if (self.presentingViewController) return;

    ARModernArtworkInfoViewController *moreMetadata = [[ARModernArtworkInfoViewController alloc] initWithArtwork:self.artwork];
    [self.parentViewController presentViewController:moreMetadata animated:YES completion:nil];
}

- (void)changeArtworkAvailability:(UILongPressGestureRecognizer *)gesture
{
    if (gesture.state != UIGestureRecognizerStateBegan) return;
    if (self.presentingViewController) return;

    UINavigationController *navController = [[UINavigationController alloc] init];
    navController.navigationBarHidden = YES;

    ARPopoverController *popoverController = [[ARPopoverController alloc] initWithContentViewController:navController];
    ARArtworkAvailabilityEditViewController *availabilityVC = [[ARArtworkAvailabilityEditViewController alloc] initWithArtwork:self.artwork popover:popoverController];
    navController.viewControllers = @[ availabilityVC ];

    popoverController.theme.viewContentInsets = UIEdgeInsetsMake(10, 10, 10, 10);
    popoverController.popoverContentSize = availabilityVC.preferredContentSize;

    CGRect popoverFrame = [self.parentViewController.view convertRect:self.view.subviews.firstObject.frame fromView:self.view.subviews.firstObject];
    [popoverController presentPopoverFromRect:popoverFrame inView:self.parentViewController.view permittedArrowDirections:WYPopoverArrowDirectionDown animated:YES];
}

- (void)setArtwork:(Artwork *)artwork
{
    _artwork = artwork;

    NSAttributedString *artist = [NSAttributedString artistStringForArtwork:artwork];
    NSAttributedString *title = [NSAttributedString titleAndDateStringForArtwork:artwork];

    // Order is important here
    NSArray *labels = @[
        artist ?: [NSNull null],
        title ?: [NSNull null],
        artwork.medium ?: [NSNull null],
    ];

    NSMutableArray *labelArray = [NSMutableArray arrayWithArray:labels];
    if ([self showPrice]) {
        if (artwork.internalPrice) {
            [labelArray addObject:artwork.internalPrice];
        }
    }

    /// If there are multiple editions, don't show dimensions
    if (artwork.editionSets.count > 1) {
        [labelArray addObject:@"Multiple Editions"];
    } else if (artwork.dimensions.length) {
        [labelArray addObject:artwork.dimensions];
    }

    self.view.needsIndicator = !self.hideIndicator && self.showMultipageIndicator;
    self.view.additionalImages = MIN(MAX(artwork.images.count - 1, 0), 4);

    [self.view setStrings:labelArray];

    self.artworkInfoTapGesture.enabled = self.showMultipageIndicator;
    self.artworkInfoSwipeGesture.enabled = self.showMultipageIndicator;

    BOOL showAvailabilityChanges = ![self.defaults boolForKey:ARPresentationModeOn] || ![self.defaults boolForKey:ARHideArtworkAvailability];
    self.availabilityChangeGesture.enabled = !!title && showAvailabilityChanges;

    [self.view layoutIfNeeded];
}

- (BOOL)showPrice
{
    /// If there are multiple editions, show prices with full metadata instead
    if (self.artwork.editionSets.count > 1) return NO;

    if ([self.defaults boolForKey:ARPresentationModeOn] && [self.defaults boolForKey:ARHideAllPrices]) return NO;

    BOOL isSold = [self.artwork.availability isEqualToString:ARAvailabilitySold];
    if (isSold && [self.defaults boolForKey:ARHidePricesForSoldWorks]) return NO;

    return YES;
}

- (BOOL)showMultipageIndicator
{
    BOOL hasMultipleEditions = self.artwork.editionSets.count > 1;
    BOOL showConfidentialNotes = self.shouldShowConfidentialNotes && self.artwork.confidentialNotes.length;
    return self.artwork.hasAdditionalInfo || self.artwork.hasAdditionalImages || hasMultipleEditions || showConfidentialNotes;
}

- (BOOL)shouldShowConfidentialNotes
{
    return [self.defaults boolForKey:ARPresentationModeOn] ? ![self.defaults boolForKey:ARHideConfidentialNotes] : YES;
}

- (void)registerForNotifications
{
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(hideArtworkInfo:) name:ARHideArtworkInfoNotification object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(showArtworkInfo:) name:ARShowArtworkInfoNotification object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(refreshArtworkInfo:) name:ARArtworkAvailabilityUpdated object:nil];
}

/// Called when availability is updated
- (void)refreshArtworkInfo:(NSNotification *)notification
{
    [self setArtwork:self.artwork];
}

- (void)hideArtworkInfo:(NSNotification *)notification
{
    self.view.alpha = 0;
}

- (void)showArtworkInfo:(NSNotification *)notification
{
    self.view.alpha = 1;
}

- (NSUserDefaults *)defaults
{
    return _defaults ?: [NSUserDefaults standardUserDefaults];
}

@end
