// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to Image.h instead.

#if __has_feature(modules)
@import Foundation;
@import CoreData;
#else
#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#endif

#import "ARManagedObject.h"

NS_ASSUME_NONNULL_BEGIN

@class Artist;
@class Artwork;
@class Artwork;
@class Album;
@class Artist;
@class Show;
@class Artwork;


@interface ImageID : NSManagedObjectID
{
}
@end


@interface _Image : ARManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString *)entityName;
+ (nullable NSEntityDescription *)entityInManagedObjectContext:(NSManagedObjectContext *)moc_;
@property (nonatomic, readonly, strong) ImageID *objectID;

@property (nonatomic, strong, nullable) NSNumber *aspectRatio;

@property (atomic) float aspectRatioValue;
- (float)aspectRatioValue;
- (void)setAspectRatioValue:(float)value_;

@property (nonatomic, strong, nullable) NSString *baseURL;

@property (nonatomic, strong, nullable) NSNumber *isMainImage;

@property (atomic) BOOL isMainImageValue;
- (BOOL)isMainImageValue;
- (void)setIsMainImageValue:(BOOL)value_;

@property (nonatomic, strong, nullable) NSNumber *maxTiledHeight;

@property (atomic) int16_t maxTiledHeightValue;
- (int16_t)maxTiledHeightValue;
- (void)setMaxTiledHeightValue:(int16_t)value_;

@property (nonatomic, strong, nullable) NSNumber *maxTiledWidth;

@property (atomic) int16_t maxTiledWidthValue;
- (int16_t)maxTiledWidthValue;
- (void)setMaxTiledWidthValue:(int16_t)value_;

@property (nonatomic, strong, nullable) NSNumber *originalHeight;

@property (atomic) float originalHeightValue;
- (float)originalHeightValue;
- (void)setOriginalHeightValue:(float)value_;

@property (nonatomic, strong, nullable) NSNumber *originalWidth;

@property (atomic) float originalWidthValue;
- (float)originalWidthValue;
- (void)setOriginalWidthValue:(float)value_;

@property (nonatomic, strong, nullable) NSNumber *position;

@property (atomic) int16_t positionValue;
- (int16_t)positionValue;
- (void)setPositionValue:(int16_t)value_;

@property (nonatomic, strong, nullable) NSNumber *processing;

@property (atomic) BOOL processingValue;
- (BOOL)processingValue;
- (void)setProcessingValue:(BOOL)value_;

@property (nonatomic, strong) NSString *slug;

@property (nonatomic, strong, nullable) NSString *tileBaseUrl;

@property (nonatomic, strong, nullable) NSString *tileFormat;

@property (nonatomic, strong, nullable) NSNumber *tileOverlap;

@property (atomic) int16_t tileOverlapValue;
- (int16_t)tileOverlapValue;
- (void)setTileOverlapValue:(int16_t)value_;

@property (nonatomic, strong, nullable) NSNumber *tileSize;

@property (atomic) int16_t tileSizeValue;
- (int16_t)tileSizeValue;
- (void)setTileSizeValue:(int16_t)value_;

@property (nonatomic, strong, nullable) Artist *artistsInImage;

@property (nonatomic, strong, nullable) Artwork *artwork;

@property (nonatomic, strong, nullable) Artwork *artworksInImage;

@property (nonatomic, strong, nullable) Album *coverForAlbum;

@property (nonatomic, strong, nullable) Artist *coverForArtist;

@property (nonatomic, strong, nullable) Show *coverForShow;

@property (nonatomic, strong, nullable) Artwork *mainImageForArtwork;

@end


@interface _Image (CoreDataGeneratedPrimitiveAccessors)

- (nullable NSNumber *)primitiveAspectRatio;
- (void)setPrimitiveAspectRatio:(nullable NSNumber *)value;

- (float)primitiveAspectRatioValue;
- (void)setPrimitiveAspectRatioValue:(float)value_;

- (nullable NSString *)primitiveBaseURL;
- (void)setPrimitiveBaseURL:(nullable NSString *)value;

- (nullable NSNumber *)primitiveIsMainImage;
- (void)setPrimitiveIsMainImage:(nullable NSNumber *)value;

- (BOOL)primitiveIsMainImageValue;
- (void)setPrimitiveIsMainImageValue:(BOOL)value_;

- (nullable NSNumber *)primitiveMaxTiledHeight;
- (void)setPrimitiveMaxTiledHeight:(nullable NSNumber *)value;

- (int16_t)primitiveMaxTiledHeightValue;
- (void)setPrimitiveMaxTiledHeightValue:(int16_t)value_;

- (nullable NSNumber *)primitiveMaxTiledWidth;
- (void)setPrimitiveMaxTiledWidth:(nullable NSNumber *)value;

- (int16_t)primitiveMaxTiledWidthValue;
- (void)setPrimitiveMaxTiledWidthValue:(int16_t)value_;

- (nullable NSNumber *)primitiveOriginalHeight;
- (void)setPrimitiveOriginalHeight:(nullable NSNumber *)value;

- (float)primitiveOriginalHeightValue;
- (void)setPrimitiveOriginalHeightValue:(float)value_;

- (nullable NSNumber *)primitiveOriginalWidth;
- (void)setPrimitiveOriginalWidth:(nullable NSNumber *)value;

- (float)primitiveOriginalWidthValue;
- (void)setPrimitiveOriginalWidthValue:(float)value_;

- (nullable NSNumber *)primitivePosition;
- (void)setPrimitivePosition:(nullable NSNumber *)value;

- (int16_t)primitivePositionValue;
- (void)setPrimitivePositionValue:(int16_t)value_;

- (nullable NSNumber *)primitiveProcessing;
- (void)setPrimitiveProcessing:(nullable NSNumber *)value;

- (BOOL)primitiveProcessingValue;
- (void)setPrimitiveProcessingValue:(BOOL)value_;

- (NSString *)primitiveSlug;
- (void)setPrimitiveSlug:(NSString *)value;

- (nullable NSString *)primitiveTileBaseUrl;
- (void)setPrimitiveTileBaseUrl:(nullable NSString *)value;

- (nullable NSString *)primitiveTileFormat;
- (void)setPrimitiveTileFormat:(nullable NSString *)value;

- (nullable NSNumber *)primitiveTileOverlap;
- (void)setPrimitiveTileOverlap:(nullable NSNumber *)value;

- (int16_t)primitiveTileOverlapValue;
- (void)setPrimitiveTileOverlapValue:(int16_t)value_;

- (nullable NSNumber *)primitiveTileSize;
- (void)setPrimitiveTileSize:(nullable NSNumber *)value;

- (int16_t)primitiveTileSizeValue;
- (void)setPrimitiveTileSizeValue:(int16_t)value_;

- (Artist *)primitiveArtistsInImage;
- (void)setPrimitiveArtistsInImage:(Artist *)value;

- (Artwork *)primitiveArtwork;
- (void)setPrimitiveArtwork:(Artwork *)value;

- (Artwork *)primitiveArtworksInImage;
- (void)setPrimitiveArtworksInImage:(Artwork *)value;

- (Album *)primitiveCoverForAlbum;
- (void)setPrimitiveCoverForAlbum:(Album *)value;

- (Artist *)primitiveCoverForArtist;
- (void)setPrimitiveCoverForArtist:(Artist *)value;

- (Show *)primitiveCoverForShow;
- (void)setPrimitiveCoverForShow:(Show *)value;

- (Artwork *)primitiveMainImageForArtwork;
- (void)setPrimitiveMainImageForArtwork:(Artwork *)value;

@end


@interface ImageAttributes : NSObject
+ (NSString *)aspectRatio;
+ (NSString *)baseURL;
+ (NSString *)isMainImage;
+ (NSString *)maxTiledHeight;
+ (NSString *)maxTiledWidth;
+ (NSString *)originalHeight;
+ (NSString *)originalWidth;
+ (NSString *)position;
+ (NSString *)processing;
+ (NSString *)slug;
+ (NSString *)tileBaseUrl;
+ (NSString *)tileFormat;
+ (NSString *)tileOverlap;
+ (NSString *)tileSize;
@end


@interface ImageRelationships : NSObject
+ (NSString *)artistsInImage;
+ (NSString *)artwork;
+ (NSString *)artworksInImage;
+ (NSString *)coverForAlbum;
+ (NSString *)coverForArtist;
+ (NSString *)coverForShow;
+ (NSString *)mainImageForArtwork;
@end

NS_ASSUME_NONNULL_END
