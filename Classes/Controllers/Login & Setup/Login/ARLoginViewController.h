#import <Artsy+UILabels/Artsy+UILabels.h>

@class ARSync;
@class ARTextFieldWithPlaceholder;


@interface ARLoginViewController : UIViewController

- (IBAction)login:(id)sender;

- (IBAction)clearEmail:(id)sender;

- (IBAction)clearPassword:(id)sender;

- (void)loginProcessesFailedWithError:(NSString *)error;

@property (nonatomic, copy) void (^completionBlock)();
@property (nonatomic, strong) ARSync *sync;

@property (nonatomic, strong) IBOutlet ARTextFieldWithPlaceholder *emailTextField;
@property (nonatomic, strong) IBOutlet ARTextFieldWithPlaceholder *passwordTextField;

@property (nonatomic, weak) IBOutlet ARSerifLineHeightLabel *errorMessageLabel;

@end
