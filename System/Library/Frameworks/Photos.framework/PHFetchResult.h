/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol OS_dispatch_queue;
@class PHBatchFetchingArray, NSArray, NSObject, _PHFetchRequestWrapper, PHQuery, NSFetchRequest;

@interface PHFetchResult : NSObject <NSCopying, NSFastEnumeration> {

	PHBatchFetchingArray* _fetchedObjects;
	NSArray* _seedOIDs;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	BOOL _registeredForChangeNotificationDeltas;
	unsigned long long _photosCount;
	unsigned long long _videosCount;
	unsigned long long _audiosCount;
	_PHFetchRequestWrapper* _fetchRequestWrapper;
	long long _chunkSizeForFetch;
	PHQuery* _query;

}

@property (readonly) unsigned long long count; 
@property (nonatomic,readonly) id firstObject; 
@property (nonatomic,readonly) id lastObject; 
@property (readonly) NSArray * fetchedObjectIDs; 
@property (readonly) NSArray * fetchedObjects; 
@property (readonly) NSFetchRequest * fetchRequest; 
@property (assign) long long chunkSizeForFetch;                  //@synthesize chunkSizeForFetch=_chunkSizeForFetch - In the implementation block
@property (readonly) PHQuery * query;                            //@synthesize query=_query - In the implementation block
+(id)pl_fetchResultContainingAssetContainer:(id)arg1 includeTrash:(BOOL)arg2 ;
+(id)pl_fetchResultForAssetContainerList:(id)arg1 ;
+(id)pl_filterPredicateForAssetContainer:(id)arg1 ;
+(id)pl_fetchResultContainingAssetContainer:(id)arg1 ;
+(id)pl_fetchResultForStandInAssetCollection:(id)arg1 ;
+(id)fetchObjectIDsForCombinableFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)cleanedAndSortedOIDsFrom:(id)arg1 usingFetchOptions:(id)arg2 ;
+(id)fetchObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)_batchFetchingArrayForObjectIDs:(id)arg1 fetchResult:(id)arg2 ;
-(id)pl_photoLibraryObject;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PH8*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)firstObject;
-(id)lastObject;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)description;
-(BOOL)containsObject:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(PHQuery *)query;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(NSFetchRequest *)fetchRequest;
-(id)containerIdentifier;
-(long long)collectionFetchType;
-(unsigned long long)possibleChangesForChange:(id)arg1 ;
-(id)changeHandlingKey;
-(id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3 ;
-(long long)chunkSizeForFetch;
-(id)fetchResultWithChangeHandlingValue:(id)arg1 ;
-(void)updateRegistrationForChangeNotificationDeltas;
-(id)initWithQuery:(id)arg1 oids:(id)arg2 registerIfNeeded:(BOOL)arg3 usingManagedObjectContext:(id)arg4 ;
-(id)fetchedObjectsUsingManagedObjectContext:(id)arg1 ;
-(BOOL)isRegisteredForChangeNotificationDeltas;
-(void)setRegisteredForChangeNotificationDeltas:(BOOL)arg1 ;
-(id)fetchedObjectIDsSet;
-(void)getMediaTypeCounts;
-(void)setChunkSizeForFetch:(long long)arg1 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)countOfAssetsWithMediaType:(long long)arg1 ;
-(NSArray *)fetchedObjects;
-(id)photoLibrary;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)copyWithOptions:(id)arg1 ;
-(NSArray *)fetchedObjectIDs;
-(void)prefetchObjectsAtIndexes:(id)arg1 ;
-(id)objectIDAtIndex:(unsigned long long)arg1 ;
-(id)initWithQuery:(id)arg1 ;
@end

