/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:47 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/NSCopying.h>
#import <Photos/NSFastEnumeration.h>

@protocol OS_dispatch_queue;
@class PHBatchFetchingArray, NSArray, NSObject, _PHFetchRequestWrapper, PHQuery, NSFetchRequest;

@interface PHFetchResult : NSObject <NSCopying, NSFastEnumeration> {

	PHBatchFetchingArray* _fetchedObjects;
	NSArray* _seedOIDs;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	char _registeredForChangeNotificationDeltas;
	unsigned _photosCount;
	unsigned _videosCount;
	unsigned _audiosCount;
	_PHFetchRequestWrapper* _fetchRequestWrapper;
	int _chunkSizeForFetch;
	PHQuery* _query;

}

@property (readonly) unsigned count; 
@property (nonatomic,readonly) id firstObject; 
@property (nonatomic,readonly) id lastObject; 
@property (readonly) NSArray * fetchedObjectIDs; 
@property (readonly) NSArray * fetchedObjects; 
@property (readonly) NSFetchRequest * fetchRequest; 
@property (assign) int chunkSizeForFetch;                        //@synthesize chunkSizeForFetch=_chunkSizeForFetch - In the implementation block
@property (readonly) PHQuery * query;                            //@synthesize query=_query - In the implementation block
+(id)fetchObjectIDs:(id)arg1 ;
+(id)_batchFetchingArrayForObjectIDs:(id)arg1 fetchResult:(id)arg2 ;
+(id)pl_fetchResultForAssetContainerList:(id)arg1 ;
+(id)pl_filterPredicateForAssetContainer:(id)arg1 ;
+(id)pl_fetchResultContainingAssetContainer:(id)arg1 ;
+(id)bulkFetchResultForAssetsWithObjectIDs:(id)arg1 changeDetails:(char)arg2 ;
+(id)pl_fetchResultForStandInAssetCollection:(id)arg1 ;
-(NSArray *)fetchedObjects;
-(void)setChunkSizeForFetch:(int)arg1 ;
-(id)pl_photoLibraryObject;
-(int)collectionFetchType;
-(id)changeHandlingKey;
-(id)changeHandlingValue;
-(int)chunkSizeForFetch;
-(char)interestedInChange:(id)arg1 ;
-(id)fetchResultWithChangeHandlingValue:(id)arg1 ;
-(void)updateRegistrationForChangeNotificationDeltas;
-(id)initWithQuery:(id)arg1 oids:(id)arg2 registerIfNeeded:(char)arg3 ;
-(void)setRegisteredForChangeNotificationDeltas:(char)arg1 ;
-(void)getMediaTypeCounts;
-(char)isRegisteredForChangeNotificationDeltas;
-(unsigned)countOfAssetsWithMediaType:(int)arg1 ;
-(NSArray *)fetchedObjectIDs;
-(id)objectIDAtIndex:(unsigned)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_PH6*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(id)firstObject;
-(id)lastObject;
-(id)objectAtIndexedSubscript:(unsigned)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned)indexOfObject:(id)arg1 ;
-(id)description;
-(char)containsObject:(id)arg1 ;
-(PHQuery *)query;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithQuery:(id)arg1 ;
-(id)photoLibrary;
-(id)containerIdentifier;
-(NSFetchRequest *)fetchRequest;
-(unsigned)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
@end
