// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to AlbumDelete.h instead.

#if __has_feature(modules)
@import Foundation;
@import CoreData;
#else
#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#endif

#import "ARManagedObject.h"

NS_ASSUME_NONNULL_BEGIN


@interface AlbumDeleteID : NSManagedObjectID
{
}
@end


@interface _AlbumDelete : ARManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString *)entityName;
+ (nullable NSEntityDescription *)entityInManagedObjectContext:(NSManagedObjectContext *)moc_;
@property (nonatomic, readonly, strong) AlbumDeleteID *objectID;

@property (nonatomic, strong, nullable) NSString *albumID;

@property (nonatomic, strong, nullable) NSDate *createdAt;

@end


@interface _AlbumDelete (CoreDataGeneratedPrimitiveAccessors)

- (nullable NSString *)primitiveAlbumID;
- (void)setPrimitiveAlbumID:(nullable NSString *)value;

- (nullable NSDate *)primitiveCreatedAt;
- (void)setPrimitiveCreatedAt:(nullable NSDate *)value;

@end


@interface AlbumDeleteAttributes : NSObject
+ (NSString *)albumID;
+ (NSString *)createdAt;
@end

NS_ASSUME_NONNULL_END
