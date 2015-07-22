/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Photos/PHAssetCollection.h>

@class NSData, NSDate;

@interface PHMoment : PHAssetCollection {

	NSData* _approximateLocationData;
	NSData* _reverseLocationData;
	BOOL _reverseLocationDataIsValid;
	short _generationType;
	NSDate* _representativeDate;

}

@property (nonatomic,readonly) NSDate * representativeDate;              //@synthesize representativeDate=_representativeDate - In the implementation block
@property (nonatomic,readonly) short generationType;                     //@synthesize generationType=_generationType - In the implementation block
+(id)managedEntityName;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 ;
+(id)entityKeyForPropertyKey:(id)arg1 ;
+(id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(BOOL)managedObjectSupportsTrashedState;
+(id)identifierCode;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(void)_decodeTitlesIfNeeded;
-(BOOL)collectionHasFixedOrder;
-(id)description;
-(id)localizedTitle;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(BOOL)canShowAvalancheStacks;
-(id)localizedLocationNames;
-(short)generationType;
-(id)approximateLocation;
-(NSDate *)representativeDate;
-(BOOL)isMeaningful;
@end
