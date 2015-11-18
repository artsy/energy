#import "ARLabSettingsMasterViewController.h"
#import "AROptions.h"
#import "ARLabSettingsSectionButton.h"
#import "ARToggleSwitch.h"
#import "ARStoryboardIdentifiers.h"
#import "ARLabSettingsSplitViewController.h"
#import "ARLabSettingsNavigationController.h"
#import "NSString+NiceAttributedStrings.h"
#import "ARAppDelegate.h"

typedef NS_ENUM(NSInteger, ARSettingsAlertViewButtonIndex) {
    ARSettingsAlertViewButtonIndexCancel,
    ARSettingsAlertViewButtonIndexLogout
};


@interface ARLabSettingsMasterViewController () <UIAlertViewDelegate>
@property (nonatomic, strong) NSUserDefaults *defaults;
@property (nonatomic, strong) ARAppDelegate *appDelegate;

@property (weak, nonatomic) IBOutlet UIButton *settingsIcon;
@property (weak, nonatomic) IBOutlet UILabel *presentationModeLabel;

@property (weak, nonatomic) IBOutlet ARLabSettingsSectionButton *syncContentButton;
@property (weak, nonatomic) IBOutlet ARLabSettingsSectionButton *presentationModeButton;
@property (weak, nonatomic) IBOutlet UIView *presentationModeToggle;
@property (weak, nonatomic) IBOutlet ARLabSettingsSectionButton *editPresentationModeButton;

@property (weak, nonatomic) IBOutlet ARLabSettingsSectionButton *backgroundButton;
@property (weak, nonatomic) IBOutlet ARLabSettingsSectionButton *emailButton;
@property (weak, nonatomic) IBOutlet ARLabSettingsSectionButton *supportButton;
@property (weak, nonatomic) IBOutlet ARLabSettingsSectionButton *logoutButton;
@end


@implementation ARLabSettingsMasterViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self setupSettingsIcon];
    [self setupSectionButtons];
    [self setPresentationModeLabelText:NSLocalizedString(@"Hides sensitive information when showing artworks to clients", @"Explanatory text for presentation mode setting")];
}

- (void)setupSectionButtons
{
    /// Sync settings
    [self.syncContentButton setTitle:NSLocalizedString(@"Sync Content", @"Title for sync settings button")];

    /// Presentation Mode settings
    [self.presentationModeButton setTitle:NSLocalizedString(@"Presentation Mode", @"Title for presentation mode toggle button")];
    [self.presentationModeButton hideChevron];
    [self setupPresentationModeToggleSwitch];

    [self.editPresentationModeButton setTitle:NSLocalizedString(@"Edit Presentation Mode", @"Title for edit presentation mode settings button")];
    [self.editPresentationModeButton hideTopBorder];

    /// Miscellaneous settings
    [self.backgroundButton setTitle:NSLocalizedString(@"Background", @"Title for background settings button")];
    [self.emailButton setTitle:NSLocalizedString(@"Email", @"Title for email settings button")];
    [self.emailButton hideTopBorder];

    /// Intercom
    [self.supportButton setTitle:NSLocalizedString(@"Support", @"Title for support button")];
    [self.supportButton hideChevron];

    /// Logout
    [self.logoutButton setTitle:NSLocalizedString(@"Logout", @"Title for logout button")];
    [self.logoutButton hideChevron];
}

- (void)setupPresentationModeToggleSwitch
{
    ARToggleSwitch *toggle = [ARToggleSwitch buttonWithFrame:self.presentationModeToggle.frame];
    toggle.userInteractionEnabled = NO;
    [self.presentationModeButton addSubview:toggle];
    toggle.on = [self.defaults boolForKey:ARPresentationModeOn];
}

#pragma mark -
#pragma mark labels

- (void)setPresentationModeLabelText:(NSString *)string
{
    [self.presentationModeLabel setAttributedText:[string attributedStringWithLineSpacing:5]];
}

#pragma mark -
#pragma mark buttons
- (IBAction)syncButtonPressed:(id)sender
{
    [(ARLabSettingsSplitViewController *)self.splitViewController showDetailViewControllerForSettingsSection:ARLabSettingsSectionSync];
}

- (IBAction)presentationModeButtonPressed:(id)sender
{
    ARToggleSwitch *toggle = [self.presentationModeButton.subviews find:^BOOL(UIView *subview) {
        return [subview isKindOfClass:ARToggleSwitch.class];
    }];
    if (toggle) {
        BOOL on = ![self.defaults boolForKey:ARPresentationModeOn];
        [self.defaults setBool:on forKey:ARPresentationModeOn];
        toggle.on = on;
    }
}

- (IBAction)editPresentationModeButton:(id)sender
{
    [(ARLabSettingsSplitViewController *)self.splitViewController showDetailViewControllerForSettingsSection:ARLabSettingsSectionPresentationMode];
}

- (IBAction)logoutButtonPressed:(id)sender
{
    [self showLogoutAlertView];
}

- (void)showLogoutAlertView
{
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:nil
                                                    message:NSLocalizedString(@"Do you want to logout?", @"Confirm Logout Prompt")
                                                   delegate:self
                                          cancelButtonTitle:NSLocalizedString(@"No", @"Cancel Logout Process")
                                          otherButtonTitles:NSLocalizedString(@"Yes, logout", @"Confirm Logout"), nil];
    [alert show];
}

#pragma mark - UIAlertView delegate

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
    if (buttonIndex == ARSettingsAlertViewButtonIndexLogout) {
        [self exitSettingsPanel];

        [self.appDelegate startLogout];

        [[NSNotificationCenter defaultCenter] postNotificationName:ARDismissAllPopoversNotification object:nil];
    }
}

#pragma mark -
#pragma mark settings icon

- (void)setupSettingsIcon
{
    [self.settingsIcon setImage:[[UIImage imageNamed:@"settings_btn_whiteborder"] imageWithRenderingMode:UIImageRenderingModeAlwaysTemplate] forState:UIControlStateNormal];
    [self.settingsIcon setTintColor:UIColor.blackColor];
    [self.settingsIcon setBackgroundColor:UIColor.whiteColor];
}

- (IBAction)settingsIconPressed:(id)sender
{
    [self exitSettingsPanel];
}

#pragma mark -
#pragma mark dependency injection

- (NSUserDefaults *)defaults
{
    return _defaults ?: [NSUserDefaults standardUserDefaults];
}

- (ARAppDelegate *)appDelegate
{
    return _appDelegate ?: (ARAppDelegate *)[[UIApplication sharedApplication] delegate];
}

#pragma mark -
#pragma mark exit strategies

- (void)exitSettingsPanel
{
    [(ARLabSettingsSplitViewController *)self.splitViewController exitSettingsPanel];
}

- (IBAction)ogSettingsButtonPressed:(id)sender
{
    [self.defaults setBool:NO forKey:AROptionsUseLabSettings];
    [self exitSettingsPanel];
}

- (BOOL)prefersStatusBarHidden
{
    return YES;
}

@end
