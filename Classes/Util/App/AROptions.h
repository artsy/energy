// All the options as consts
extern NSString *const AROptionsUseWhiteFolio;

extern NSString *const AROptionsKey;
extern NSString *const AROptionsName;

extern NSString *const ARSyncAlbumsOption;

/// A very simple version of what's in Eigen/Emission


@interface AROptions : NSObject

/// Returns all the current options
+ (NSArray *)labsOptions;

/// Get and set individual options
+ (BOOL)boolForOption:(NSString *)option;

+ (void)setBool:(BOOL)value forOption:(NSString *)option;

@end
