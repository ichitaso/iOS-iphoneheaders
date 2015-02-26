/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <StoreServices/SSMemoryEntity.h>

@class FinishDownloadAssetMemoryEntity, NSArray, StoreDownload, NSString, NSNumber;

@interface FinishDownloadMemoryEntity : SSMemoryEntity {

	FinishDownloadAssetMemoryEntity* _mediaAsset;
	NSArray* _secondaryAssets;
	StoreDownload* _storeMetadata;

}

@property (nonatomic,readonly) NSString * ITunesMetadataDestinationPath; 
@property (nonatomic,retain) StoreDownload * storeMetadata;                                //@synthesize storeMetadata=_storeMetadata - In the implementation block
@property (nonatomic,readonly) FinishDownloadAssetMemoryEntity * mediaAsset;               //@synthesize mediaAsset=_mediaAsset - In the implementation block
@property (nonatomic,readonly) NSArray * secondaryAssets;                                  //@synthesize secondaryAssets=_secondaryAssets - In the implementation block
@property (nonatomic,readonly) NSString * artistName; 
@property (nonatomic,readonly) NSString * artworkTemplateName; 
@property (nonatomic,readonly) long long automaticType; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * clientIdentifier; 
@property (nonatomic,readonly) NSString * collectionName; 
@property (nonatomic,readonly) NSString * documentTargetIdentifier; 
@property (nonatomic,readonly) NSString * downloadKind; 
@property (nonatomic,readonly) NSNumber * durationInMilliseconds; 
@property (nonatomic,readonly) NSString * genreName; 
@property (nonatomic,readonly) NSNumber * handlerIdentifier; 
@property (nonatomic,readonly) BOOL hasRestoreData; 
@property (nonatomic,readonly) id libraryItemIdentifier; 
@property (getter=isRentalDownload,nonatomic,readonly) BOOL rentalDownload; 
@property (getter=isRestoreDownload,nonatomic,readonly) BOOL restoreDownload; 
@property (nonatomic,readonly) long long restoreState; 
@property (getter=isSampleDownload,nonatomic,readonly) BOOL sampleDownload; 
@property (nonatomic,readonly) NSNumber * storeAccountIdentifier; 
@property (nonatomic,readonly) NSString * storeAccountName; 
@property (nonatomic,readonly) NSNumber * storeCollectionIdentifier; 
@property (getter=isStoreDownload,nonatomic,readonly) BOOL storeDownload; 
@property (nonatomic,readonly) NSString * storeFrontIdentifier; 
@property (nonatomic,readonly) NSNumber * storeItemIdentifier; 
@property (nonatomic,readonly) NSNumber * storeSagaIdentifier; 
@property (nonatomic,readonly) NSString * storeTransactionIdentifier; 
@property (nonatomic,readonly) NSString * storeXID; 
@property (nonatomic,readonly) NSString * title; 
+(id)defaultProperties;
+(Class)databaseEntityClass;
-(long long)automaticType;
-(FinishDownloadAssetMemoryEntity *)mediaAsset;
-(NSString *)artworkTemplateName;
-(id)destinationDirectoryPathForAsset:(id)arg1 ;
-(BOOL)hasRestoreData;
-(BOOL)isRentalDownload;
-(BOOL)isSampleDownload;
-(BOOL)isStoreDownload;
-(NSString *)ITunesMetadataDestinationPath;
-(void)loadAssetsUsingSession:(id)arg1 ;
-(id)newITunesMetadataDictionary;
-(id)secondaryAssetForType:(id)arg1 ;
-(NSString *)storeAccountName;
-(NSNumber *)storeCollectionIdentifier;
-(NSNumber *)storeSagaIdentifier;
-(NSString *)storeTransactionIdentifier;
-(NSString *)storeXID;
-(NSArray *)secondaryAssets;
-(void)setStoreMetadata:(StoreDownload *)arg1 ;
-(StoreDownload *)storeMetadata;
-(NSString *)clientIdentifier;
-(NSString *)storeFrontIdentifier;
-(NSNumber *)storeItemIdentifier;
-(id)libraryItemIdentifier;
-(NSString *)bundleIdentifier;
-(NSString *)title;
-(BOOL)isRestoreDownload;
-(NSString *)artistName;
-(NSString *)collectionName;
-(NSNumber *)storeAccountIdentifier;
-(NSNumber *)handlerIdentifier;
-(NSString *)documentTargetIdentifier;
-(NSString *)downloadKind;
-(long long)restoreState;
-(NSString *)genreName;
-(NSNumber *)durationInMilliseconds;
@end
