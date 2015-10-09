#import "ARLabSettingsViewController.h"
#import "ARTopViewController.h"


@implementation ARLabSettingsViewController

- (void)viewDidLoad
{
    [super viewDidLoad];

    self.preferredPrimaryColumnWidthFraction = 0.4;

    self.delegate = self;
    self.preferredDisplayMode = [UIDevice isPad] ? UISplitViewControllerDisplayModeAllVisible : UISplitViewControllerDisplayModeAutomatic;
}

#pragma mark - exit strategy

- (void)exitSettingsPanel
{
    @try {
        [[self valueForKey:@"_hiddenPopoverController"] dismissPopoverAnimated:YES];
    }
    @catch (__unused NSException *exception) {
    }

    [[ARTopViewController sharedInstance] dismissViewControllerAnimated:YES completion:NULL];
}

#pragma mark - UISplitViewControllerDelegate

/// Ensures the master view is shown by default on iPhone
- (BOOL)splitViewController:(UISplitViewController *)splitViewController collapseSecondaryViewController:(UIViewController *)secondaryViewController ontoPrimaryViewController:(UIViewController *)primaryViewController
{
    return YES;
}

- (BOOL)splitViewController:(UISplitViewController *)svc shouldHideViewController:(UIViewController *)vc inOrientation:(UIInterfaceOrientation)orientation
{
    return NO;
}

- (BOOL)prefersStatusBarHidden
{
    return YES;
}

@end
