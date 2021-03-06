// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to Artwork.h instead.

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
@class Artist;
@class Album;
@class EditionSet;
@class Image;
@class Image;
@class Location;
@class Image;
@class Note;
@class Partner;
@class Show;


@interface ArtworkID : NSManagedObjectID
{
}
@end


@interface _Artwork : ARManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString *)entityName;
+ (nullable NSEntityDescription *)entityInManagedObjectContext:(NSManagedObjectContext *)moc_;
@property (nonatomic, readonly, strong) ArtworkID *objectID;

@property (nonatomic, strong, nullable) NSString *artistOrderingKey;

@property (nonatomic, strong, nullable) NSString *availability;

@property (nonatomic, strong, nullable) NSString *backendPrice;

@property (nonatomic, strong, nullable) NSString *category;

@property (nonatomic, strong, nullable) NSString *confidentialNotes;

@property (nonatomic, strong, nullable) NSDate *createdAt;

@property (nonatomic, strong, nullable) NSString *date;

@property (nonatomic, strong, nullable) NSDecimalNumber *depth;

@property (nonatomic, strong, nullable) NSDecimalNumber *diameter;

@property (nonatomic, strong, nullable) NSString *dimensionsCM;

@property (nonatomic, strong, nullable) NSString *dimensionsInches;

@property (nonatomic, strong, nullable) NSString *displayPrice;

@property (nonatomic, strong, nullable) NSString *displayTitle;

@property (nonatomic, strong, nullable) NSString *editions;

@property (nonatomic, strong, nullable) NSString *exhibitionHistory;

@property (nonatomic, strong, nullable) NSDecimalNumber *height;

@property (nonatomic, strong, nullable) NSString *imageRights;

@property (nonatomic, strong, nullable) NSString *info;

@property (nonatomic, strong, nullable) NSString *inventoryID;

@property (nonatomic, strong, nullable) NSNumber *isAvailableForSale;

@property (atomic) BOOL isAvailableForSaleValue;
- (BOOL)isAvailableForSaleValue;
- (void)setIsAvailableForSaleValue:(BOOL)value_;

@property (nonatomic, strong, nullable) NSNumber *isPriceHidden;

@property (atomic) BOOL isPriceHiddenValue;
- (BOOL)isPriceHiddenValue;
- (void)setIsPriceHiddenValue:(BOOL)value_;

@property (nonatomic, strong, nullable) NSNumber *isPublished;

@property (atomic) BOOL isPublishedValue;
- (BOOL)isPublishedValue;
- (void)setIsPublishedValue:(BOOL)value_;

@property (nonatomic, strong, nullable) NSString *literature;

@property (nonatomic, strong, nullable) NSString *medium;

@property (nonatomic, strong, nullable) NSString *provenance;

@property (nonatomic, strong, nullable) NSString *series;

@property (nonatomic, strong, nullable) NSString *signature;

@property (nonatomic, strong) NSString *slug;

@property (nonatomic, strong, nullable) NSString *title;

@property (nonatomic, strong, nullable) NSDate *updatedAt;

@property (nonatomic, strong, nullable) NSDecimalNumber *width;

@property (nonatomic, strong, nullable) Artist *artist;

@property (nonatomic, strong, nullable) NSSet<Artist *> *artists;
- (nullable NSMutableSet<Artist *> *)artistsSet;

@property (nonatomic, strong, nullable) NSSet<Album *> *collections;
- (nullable NSMutableSet<Album *> *)collectionsSet;

@property (nonatomic, strong, nullable) NSSet<EditionSet *> *editionSets;
- (nullable NSMutableSet<EditionSet *> *)editionSetsSet;

@property (nonatomic, strong, nullable) NSSet<Image *> *images;
- (nullable NSMutableSet<Image *> *)imagesSet;

@property (nonatomic, strong, nullable) NSSet<Image *> *installShotsFeaturingArtwork;
- (nullable NSMutableSet<Image *> *)installShotsFeaturingArtworkSet;

@property (nonatomic, strong, nullable) NSSet<Location *> *locations;
- (nullable NSMutableSet<Location *> *)locationsSet;

@property (nonatomic, strong, nullable) Image *mainImage;

@property (nonatomic, strong, nullable) Note *notes;

@property (nonatomic, strong, nullable) Partner *partner;

@property (nonatomic, strong, nullable) NSSet<Show *> *shows;
- (nullable NSMutableSet<Show *> *)showsSet;

@end


@interface _Artwork (ArtistsCoreDataGeneratedAccessors)
- (void)addArtists:(NSSet<Artist *> *)value_;
- (void)removeArtists:(NSSet<Artist *> *)value_;
- (void)addArtistsObject:(Artist *)value_;
- (void)removeArtistsObject:(Artist *)value_;

@end


@interface _Artwork (CollectionsCoreDataGeneratedAccessors)
- (void)addCollections:(NSSet<Album *> *)value_;
- (void)removeCollections:(NSSet<Album *> *)value_;
- (void)addCollectionsObject:(Album *)value_;
- (void)removeCollectionsObject:(Album *)value_;

@end


@interface _Artwork (EditionSetsCoreDataGeneratedAccessors)
- (void)addEditionSets:(NSSet<EditionSet *> *)value_;
- (void)removeEditionSets:(NSSet<EditionSet *> *)value_;
- (void)addEditionSetsObject:(EditionSet *)value_;
- (void)removeEditionSetsObject:(EditionSet *)value_;

@end


@interface _Artwork (ImagesCoreDataGeneratedAccessors)
- (void)addImages:(NSSet<Image *> *)value_;
- (void)removeImages:(NSSet<Image *> *)value_;
- (void)addImagesObject:(Image *)value_;
- (void)removeImagesObject:(Image *)value_;

@end


@interface _Artwork (InstallShotsFeaturingArtworkCoreDataGeneratedAccessors)
- (void)addInstallShotsFeaturingArtwork:(NSSet<Image *> *)value_;
- (void)removeInstallShotsFeaturingArtwork:(NSSet<Image *> *)value_;
- (void)addInstallShotsFeaturingArtworkObject:(Image *)value_;
- (void)removeInstallShotsFeaturingArtworkObject:(Image *)value_;

@end


@interface _Artwork (LocationsCoreDataGeneratedAccessors)
- (void)addLocations:(NSSet<Location *> *)value_;
- (void)removeLocations:(NSSet<Location *> *)value_;
- (void)addLocationsObject:(Location *)value_;
- (void)removeLocationsObject:(Location *)value_;

@end


@interface _Artwork (ShowsCoreDataGeneratedAccessors)
- (void)addShows:(NSSet<Show *> *)value_;
- (void)removeShows:(NSSet<Show *> *)value_;
- (void)addShowsObject:(Show *)value_;
- (void)removeShowsObject:(Show *)value_;

@end


@interface _Artwork (CoreDataGeneratedPrimitiveAccessors)

- (nullable NSString *)primitiveArtistOrderingKey;
- (void)setPrimitiveArtistOrderingKey:(nullable NSString *)value;

- (nullable NSString *)primitiveAvailability;
- (void)setPrimitiveAvailability:(nullable NSString *)value;

- (nullable NSString *)primitiveBackendPrice;
- (void)setPrimitiveBackendPrice:(nullable NSString *)value;

- (nullable NSString *)primitiveCategory;
- (void)setPrimitiveCategory:(nullable NSString *)value;

- (nullable NSString *)primitiveConfidentialNotes;
- (void)setPrimitiveConfidentialNotes:(nullable NSString *)value;

- (nullable NSDate *)primitiveCreatedAt;
- (void)setPrimitiveCreatedAt:(nullable NSDate *)value;

- (nullable NSString *)primitiveDate;
- (void)setPrimitiveDate:(nullable NSString *)value;

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

- (nullable NSString *)primitiveDisplayTitle;
- (void)setPrimitiveDisplayTitle:(nullable NSString *)value;

- (nullable NSString *)primitiveEditions;
- (void)setPrimitiveEditions:(nullable NSString *)value;

- (nullable NSString *)primitiveExhibitionHistory;
- (void)setPrimitiveExhibitionHistory:(nullable NSString *)value;

- (nullable NSDecimalNumber *)primitiveHeight;
- (void)setPrimitiveHeight:(nullable NSDecimalNumber *)value;

- (nullable NSString *)primitiveImageRights;
- (void)setPrimitiveImageRights:(nullable NSString *)value;

- (nullable NSString *)primitiveInfo;
- (void)setPrimitiveInfo:(nullable NSString *)value;

- (nullable NSString *)primitiveInventoryID;
- (void)setPrimitiveInventoryID:(nullable NSString *)value;

- (nullable NSNumber *)primitiveIsAvailableForSale;
- (void)setPrimitiveIsAvailableForSale:(nullable NSNumber *)value;

- (BOOL)primitiveIsAvailableForSaleValue;
- (void)setPrimitiveIsAvailableForSaleValue:(BOOL)value_;

- (nullable NSNumber *)primitiveIsPriceHidden;
- (void)setPrimitiveIsPriceHidden:(nullable NSNumber *)value;

- (BOOL)primitiveIsPriceHiddenValue;
- (void)setPrimitiveIsPriceHiddenValue:(BOOL)value_;

- (nullable NSNumber *)primitiveIsPublished;
- (void)setPrimitiveIsPublished:(nullable NSNumber *)value;

- (BOOL)primitiveIsPublishedValue;
- (void)setPrimitiveIsPublishedValue:(BOOL)value_;

- (nullable NSString *)primitiveLiterature;
- (void)setPrimitiveLiterature:(nullable NSString *)value;

- (nullable NSString *)primitiveMedium;
- (void)setPrimitiveMedium:(nullable NSString *)value;

- (nullable NSString *)primitiveProvenance;
- (void)setPrimitiveProvenance:(nullable NSString *)value;

- (nullable NSString *)primitiveSeries;
- (void)setPrimitiveSeries:(nullable NSString *)value;

- (nullable NSString *)primitiveSignature;
- (void)setPrimitiveSignature:(nullable NSString *)value;

- (NSString *)primitiveSlug;
- (void)setPrimitiveSlug:(NSString *)value;

- (nullable NSString *)primitiveTitle;
- (void)setPrimitiveTitle:(nullable NSString *)value;

- (nullable NSDate *)primitiveUpdatedAt;
- (void)setPrimitiveUpdatedAt:(nullable NSDate *)value;

- (nullable NSDecimalNumber *)primitiveWidth;
- (void)setPrimitiveWidth:(nullable NSDecimalNumber *)value;

- (Artist *)primitiveArtist;
- (void)setPrimitiveArtist:(Artist *)value;

- (NSMutableSet<Artist *> *)primitiveArtists;
- (void)setPrimitiveArtists:(NSMutableSet<Artist *> *)value;

- (NSMutableSet<Album *> *)primitiveCollections;
- (void)setPrimitiveCollections:(NSMutableSet<Album *> *)value;

- (NSMutableSet<EditionSet *> *)primitiveEditionSets;
- (void)setPrimitiveEditionSets:(NSMutableSet<EditionSet *> *)value;

- (NSMutableSet<Image *> *)primitiveImages;
- (void)setPrimitiveImages:(NSMutableSet<Image *> *)value;

- (NSMutableSet<Image *> *)primitiveInstallShotsFeaturingArtwork;
- (void)setPrimitiveInstallShotsFeaturingArtwork:(NSMutableSet<Image *> *)value;

- (NSMutableSet<Location *> *)primitiveLocations;
- (void)setPrimitiveLocations:(NSMutableSet<Location *> *)value;

- (Image *)primitiveMainImage;
- (void)setPrimitiveMainImage:(Image *)value;

- (Note *)primitiveNotes;
- (void)setPrimitiveNotes:(Note *)value;

- (Partner *)primitivePartner;
- (void)setPrimitivePartner:(Partner *)value;

- (NSMutableSet<Show *> *)primitiveShows;
- (void)setPrimitiveShows:(NSMutableSet<Show *> *)value;

@end


@interface ArtworkAttributes : NSObject
+ (NSString *)artistOrderingKey;
+ (NSString *)availability;
+ (NSString *)backendPrice;
+ (NSString *)category;
+ (NSString *)confidentialNotes;
+ (NSString *)createdAt;
+ (NSString *)date;
+ (NSString *)depth;
+ (NSString *)diameter;
+ (NSString *)dimensionsCM;
+ (NSString *)dimensionsInches;
+ (NSString *)displayPrice;
+ (NSString *)displayTitle;
+ (NSString *)editions;
+ (NSString *)exhibitionHistory;
+ (NSString *)height;
+ (NSString *)imageRights;
+ (NSString *)info;
+ (NSString *)inventoryID;
+ (NSString *)isAvailableForSale;
+ (NSString *)isPriceHidden;
+ (NSString *)isPublished;
+ (NSString *)literature;
+ (NSString *)medium;
+ (NSString *)provenance;
+ (NSString *)series;
+ (NSString *)signature;
+ (NSString *)slug;
+ (NSString *)title;
+ (NSString *)updatedAt;
+ (NSString *)width;
@end


@interface ArtworkRelationships : NSObject
+ (NSString *)artist;
+ (NSString *)artists;
+ (NSString *)collections;
+ (NSString *)editionSets;
+ (NSString *)images;
+ (NSString *)installShotsFeaturingArtwork;
+ (NSString *)locations;
+ (NSString *)mainImage;
+ (NSString *)notes;
+ (NSString *)partner;
+ (NSString *)shows;
@end

NS_ASSUME_NONNULL_END
