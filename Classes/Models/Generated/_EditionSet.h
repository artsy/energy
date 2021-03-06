// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to EditionSet.h instead.

#if __has_feature(modules)
@import Foundation;
@import CoreData;
#else
#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#endif

#import "ARManagedObject.h"

NS_ASSUME_NONNULL_BEGIN

@class Artwork;


@interface EditionSetID : NSManagedObjectID
{
}
@end


@interface _EditionSet : ARManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString *)entityName;
+ (nullable NSEntityDescription *)entityInManagedObjectContext:(NSManagedObjectContext *)moc_;
@property (nonatomic, readonly, strong) EditionSetID *objectID;

@property (nonatomic, strong, nullable) NSString *artistProofs;

@property (nonatomic, strong, nullable) NSString *availability;

@property (nonatomic, strong, nullable) NSString *availableEditions;

@property (nonatomic, strong, nullable) NSString *backendPrice;

@property (nonatomic, strong, nullable) NSDecimalNumber *depth;

@property (nonatomic, strong, nullable) NSDecimalNumber *diameter;

@property (nonatomic, strong, nullable) NSString *dimensionsCM;

@property (nonatomic, strong, nullable) NSString *dimensionsInches;

@property (nonatomic, strong, nullable) NSString *displayPrice;

@property (nonatomic, strong, nullable) NSString *duration;

@property (nonatomic, strong, nullable) NSString *editionSize;

@property (nonatomic, strong, nullable) NSString *editions;

@property (nonatomic, strong, nullable) NSDecimalNumber *height;

@property (nonatomic, strong, nullable) NSNumber *isAvailableForSale;

@property (atomic) BOOL isAvailableForSaleValue;
- (BOOL)isAvailableForSaleValue;
- (void)setIsAvailableForSaleValue:(BOOL)value_;

@property (nonatomic, strong, nullable) NSNumber *isPriceHidden;

@property (atomic) BOOL isPriceHiddenValue;
- (BOOL)isPriceHiddenValue;
- (void)setIsPriceHiddenValue:(BOOL)value_;

@property (nonatomic, strong, nullable) NSString *prototypes;

@property (nonatomic, strong, nullable) NSString *slug;

@property (nonatomic, strong, nullable) NSDecimalNumber *width;

@property (nonatomic, strong, nullable) Artwork *artwork;

@end


@interface _EditionSet (CoreDataGeneratedPrimitiveAccessors)

- (nullable NSString *)primitiveArtistProofs;
- (void)setPrimitiveArtistProofs:(nullable NSString *)value;

- (nullable NSString *)primitiveAvailability;
- (void)setPrimitiveAvailability:(nullable NSString *)value;

- (nullable NSString *)primitiveAvailableEditions;
- (void)setPrimitiveAvailableEditions:(nullable NSString *)value;

- (nullable NSString *)primitiveBackendPrice;
- (void)setPrimitiveBackendPrice:(nullable NSString *)value;

- (nullable NSDecimalNumber *)primitiveDepth;
- (void)setPrimitiveDepth:(nullable NSDecimalNumber *)value;

- (nullable NSDecimalNumber *)primitiveDiameter;
- (void)setPrimitiveDiameter:(nullable NSDecimalNumber *)value;

- (nullable NSString *)primitiveDimensionsCM;
- (void)setPrimitiveDimensionsCM:(nullable NSString *)value;

- (nullable NSString *)primitiveDimensionsInches;
- (void)setPrimitiveDimensionsInches:(nullable NSString *)value;

- (nullable NSString *)primitiveDisplayPrice;
- (void)setPrimitiveDisplayPrice:(nullable NSString *)value;

- (nullable NSString *)primitiveDuration;
- (void)setPrimitiveDuration:(nullable NSString *)value;

- (nullable NSString *)primitiveEditionSize;
- (void)setPrimitiveEditionSize:(nullable NSString *)value;

- (nullable NSString *)primitiveEditions;
- (void)setPrimitiveEditions:(nullable NSString *)value;

- (nullable NSDecimalNumber *)primitiveHeight;
- (void)setPrimitiveHeight:(nullable NSDecimalNumber *)value;

- (nullable NSNumber *)primitiveIsAvailableForSale;
- (void)setPrimitiveIsAvailableForSale:(nullable NSNumber *)value;

- (BOOL)primitiveIsAvailableForSaleValue;
- (void)setPrimitiveIsAvailableForSaleValue:(BOOL)value_;

- (nullable NSNumber *)primitiveIsPriceHidden;
- (void)setPrimitiveIsPriceHidden:(nullable NSNumber *)value;

- (BOOL)primitiveIsPriceHiddenValue;
- (void)setPrimitiveIsPriceHiddenValue:(BOOL)value_;

- (nullable NSString *)primitivePrototypes;
- (void)setPrimitivePrototypes:(nullable NSString *)value;

- (nullable NSString *)primitiveSlug;
- (void)setPrimitiveSlug:(nullable NSString *)value;

- (nullable NSDecimalNumber *)primitiveWidth;
- (void)setPrimitiveWidth:(nullable NSDecimalNumber *)value;

- (Artwork *)primitiveArtwork;
- (void)setPrimitiveArtwork:(Artwork *)value;

@end


@interface EditionSetAttributes : NSObject
+ (NSString *)artistProofs;
+ (NSString *)availability;
+ (NSString *)availableEditions;
+ (NSString *)backendPrice;
+ (NSString *)depth;
+ (NSString *)diameter;
+ (NSString *)dimensionsCM;
+ (NSString *)dimensionsInches;
+ (NSString *)displayPrice;
+ (NSString *)duration;
+ (NSString *)editionSize;
+ (NSString *)editions;
+ (NSString *)height;
+ (NSString *)isAvailableForSale;
+ (NSString *)isPriceHidden;
+ (NSString *)prototypes;
+ (NSString *)slug;
+ (NSString *)width;
@end


@interface EditionSetRelationships : NSObject
+ (NSString *)artwork;
@end

NS_ASSUME_NONNULL_END
