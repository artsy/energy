#import "ARSync.h"

@class ARSyncStatusViewModel;

typedef NS_ENUM(NSInteger, ARSyncStatus) {
    ARSyncStatusSyncing,
    ARSyncStatusUpToDate,
    ARSyncStatusRecommendSync,
    ARSyncStatusOffline,
};

typedef NS_ENUM(NSInteger, ARSyncImageNotification) {
    ARSyncImageNotificationUpToDate,
    ARSyncImageNotificationRecommendSync,
    ARSyncImageNotificationNone,
};


@interface ARSyncStatusViewModel : NSObject <ARSyncDelegate, ARSyncProgressDelegate>

@property (nonatomic, strong) ARSync *sync;
@property (nonatomic, assign) NSTimeInterval timeRemainingInSync;

@property (nonatomic, assign) BOOL isSyncing;
@property (nonatomic, assign) BOOL statusHasChanged;

- (instancetype)initWithSync:(ARSync *)sync;

- (void)startSync;

- (NSString *)titleText;
- (NSString *)subtitleText;
- (NSString *)syncInProgressTitle:(NSTimeInterval)estimatedTimeRemaining;

- (BOOL)shouldShowSyncButton;
- (BOOL)shouldEnableSyncButton;
- (NSString *)syncButtonTitle;
- (UIColor *)syncButtonColor;

- (CGFloat)syncActivityViewAlpha;

- (ARSyncImageNotification)currentSyncImageNotification;

- (NSInteger)syncLogCount;
- (NSArray *)lastSyncedStrings;

@end
