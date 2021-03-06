
@import MessageUI;

#import "ARTheme.h"
#import "ARNavigationBar.h"
#import "ARTextToolbarButton.h"
#import "AROptions.h"
#import "ARNavigationController.h"
#import "ARTopViewController.h"


@implementation ARTheme

+ (void)setupWithWhiteFolio:(BOOL)useWhiteFolio
{
    [UIColor updateFolioColorsToWhite:useWhiteFolio];

    [ARNavigationBar appearance].shadowImage = [[UIImage alloc] init];
    [[ARNavigationBar appearance] setBackgroundImage:[[UIImage alloc] init] forBarMetrics:UIBarMetricsDefault];

    [self setupBackButton];
    [self setupNavTitle];
    [self setupNavigationButtons];

    UIWindow *window = [[UIApplication sharedApplication] keyWindow];
    [self setupWindowTintOnWindow:window];
    [self setupMailViewControllerButtons];
}

+ (void)setupWindowTintOnWindow:(UIWindow *)window
{
    window.tintColor = [UIColor artsyForegroundColor];
    window.backgroundColor = [UIColor artsyBackgroundColor];
}

+ (void)resetWindowTintOnWindow
{
    UIWindow *window = [[UIApplication sharedApplication] keyWindow];
    [self setupWindowTintOnWindow:window];
}

+ (void)setWindowTint:(UIColor *)tintColor
{
    UIWindow *window = [[UIApplication sharedApplication] keyWindow];
    window.tintColor = tintColor;
}

+ (void)setupMailViewControllerButtons
{
    [[UIBarButtonItem appearanceWhenContainedIn:MFMailComposeViewController.class, nil] setTitleTextAttributes:@{
        NSForegroundColorAttributeName : [UIColor blackColor],
        NSFontAttributeName : [UIFont boldSystemFontOfSize:14],
    } forState:UIControlStateNormal];
}

/// Note: Nav bar theming is done in ARNavigationBar.xib

+ (void)setupBackButton
{
    [[UIBarButtonItem appearanceWhenContainedIn:ARNavigationBar.class, nil] setBackgroundVerticalPositionAdjustment:-15 forBarMetrics:UIBarMetricsDefault];

    [[UIBarButtonItem appearanceWhenContainedIn:ARNavigationBar.class, nil] setTitleTextAttributes:@{
        NSForegroundColorAttributeName : [UIColor artsyForegroundColor],
        NSFontAttributeName : [UIFont sansSerifFontWithSize:16]
    } forState:UIControlStateNormal & UIControlStateHighlighted & UIControlStateDisabled];

    [[UINavigationBar appearance] setTintColor:[UIColor artsyBackgroundColor]];
    [ARNavigationController rootController].navigationBar.tintColor = [UIColor artsyForegroundColor];
    [[ARNavigationController rootController].navigationBar tintColorDidChange];
}

+ (void)setupNavTitle
{
    [[ARNavigationBar appearance] setBarTintColor:[UIColor artsyBackgroundColor]];
    [[ARNavigationBar appearance] setTintColor:[UIColor artsyForegroundColor]];

    // Because UINavbars don't use tintColor for BG we have to send the tintColorDidChange ourselves
    [[ARNavigationController rootController].navigationBar tintColorDidChange];
}

+ (void)setupNavigationButtons
{
    BOOL whiteFolio = [AROptions boolForOption:AROptionsUseWhiteFolio];
    UIImage *selectedBGImage = whiteFolio ? [UIImage imageNamed:@"Black.png"] : [UIImage imageNamed:@"White.png"];

    [[ARTextToolbarButton appearance] setBackgroundImage:selectedBGImage forState:UIControlStateSelected];
    [[ARTextToolbarButton appearance] setTitleColor:[UIColor artsyBackgroundColor] forState:UIControlStateSelected];
}

+ (void)resetWindowTint
{
    // NOOP right now
}


@end
