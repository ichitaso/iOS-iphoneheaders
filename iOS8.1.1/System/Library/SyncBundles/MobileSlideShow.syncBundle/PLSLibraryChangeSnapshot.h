/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:09 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSlideShow/NSCoding.h>

@class NSDictionary, NSString, NSArray, NSMutableDictionary;

@interface PLSLibraryChangeSnapshot : NSObject <NSCoding> {

	NSDictionary* _updates;
	NSDictionary* _deletes;
	NSString* _libraryUUID;
	NSString* _libraryKind;
	BOOL _isFolderSync;
	NSArray* _orderedAlbums;
	NSDictionary* _albumsAndEventsByUUID;
	NSMutableDictionary* _assetsByUUID;

}

@property (nonatomic,retain) NSDictionary * updates;                            //@synthesize updates=_updates - In the implementation block
@property (nonatomic,retain) NSDictionary * deletes;                            //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,retain) NSString * libraryUUID;                            //@synthesize libraryUUID=_libraryUUID - In the implementation block
@property (nonatomic,retain) NSString * libraryKind;                            //@synthesize libraryKind=_libraryKind - In the implementation block
@property (nonatomic,readonly) BOOL hasChangedObjects; 
@property (assign,nonatomic) BOOL isFolderSync;                                 //@synthesize isFolderSync=_isFolderSync - In the implementation block
@property (nonatomic,retain) NSArray * orderedAlbums;                           //@synthesize orderedAlbums=_orderedAlbums - In the implementation block
@property (nonatomic,retain) NSDictionary * albumsAndEventsByUUID;              //@synthesize albumsAndEventsByUUID=_albumsAndEventsByUUID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetsByUUID;                //@synthesize assetsByUUID=_assetsByUUID - In the implementation block
+(BOOL)number:(id)arg1 equalsNumber:(id)arg2 ;
+(BOOL)string:(id)arg1 equalsString:(id)arg2 ;
+(id)librarySnapshot;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(NSDictionary *)albumsAndEventsByUUID;
-(BOOL)isEqualToSnapshot:(id)arg1 ;
-(void)setAlbumsAndEventsByUUID:(NSDictionary *)arg1 ;
-(void)setOrderedAlbums:(NSArray *)arg1 ;
-(void)setIsFolderSync:(BOOL)arg1 ;
-(void)setAssetsByUUID:(NSMutableDictionary *)arg1 ;
-(NSArray *)orderedAlbums;
-(BOOL)isFolderSync;
-(void)setLibraryKind:(NSString *)arg1 ;
-(void)setLibraryUUID:(NSString *)arg1 ;
-(NSString *)libraryKind;
-(NSMutableDictionary *)assetsByUUID;
-(NSString *)libraryUUID;
-(BOOL)hasChangedObjects;
-(NSDictionary *)deletes;
-(void)setUpdates:(NSDictionary *)arg1 ;
-(void)setDeletes:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(NSDictionary *)updates;
@end
