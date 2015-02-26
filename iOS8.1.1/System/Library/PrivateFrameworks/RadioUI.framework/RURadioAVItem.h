/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPAVItem.h>

@class NSArray, RadioTrack, RadioStation, NSString;

@interface RURadioAVItem : MPAVItem {

	NSArray* _buyOffers;
	RadioTrack* _radioTrack;
	BOOL _isBanned;
	BOOL _isLiked;
	BOOL _isInWishList;
	BOOL _heartbeatInvalid;
	RadioStation* _station;
	NSString* _stationHash;
	long long _stationID;
	NSString* _stationName;

}

@property (assign,nonatomic) BOOL isBanned;                                                //@synthesize isBanned=_isBanned - In the implementation block
@property (assign,nonatomic) BOOL isLiked;                                                 //@synthesize isLiked=_isLiked - In the implementation block
@property (assign,nonatomic) BOOL isInWishList;                                            //@synthesize isInWishList=_isInWishList - In the implementation block
@property (nonatomic,retain) RadioStation * station;                                       //@synthesize station=_station - In the implementation block
@property (nonatomic,readonly) NSString * stationHash;                                     //@synthesize stationHash=_stationHash - In the implementation block
@property (nonatomic,readonly) long long stationID;                                        //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,readonly) NSString * stationName;                                     //@synthesize stationName=_stationName - In the implementation block
@property (assign,getter=isHeartbeatInvalid,nonatomic) BOOL heartbeatInvalid;              //@synthesize heartbeatInvalid=_heartbeatInvalid - In the implementation block
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(long long)storeID;
-(id)chapterTimeMarkers;
-(id)artworkTimeMarkers;
-(id)urlTimeMarkers;
-(unsigned long long)countForQueueFeeder;
-(BOOL)isCloudItem;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(BOOL)isExplicitTrack;
-(BOOL)isStreamable;
-(id)mainTitle;
-(BOOL)supportsSettingCurrentTime;
-(id)titlesForTime:(double)arg1 ;
-(id)chapterTimeMarkerForTime:(double)arg1 ;
-(id)localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2 ;
-(id)localizedPositionInPlaylistString;
-(void)reevaluateType;
-(long long)albumStoreID;
-(id)buyOffers;
-(id)copyrightText;
-(id)mediaItem;
-(NSString *)stationHash;
-(long long)stationID;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(id)title;
-(id)artist;
-(unsigned long long)persistentID;
-(id)album;
-(BOOL)isRadioItem;
-(id)initWithRadioTrack:(id)arg1 ;
-(void)_radioRequestDidFinishNotification:(id)arg1 ;
-(void)_internalIsInWishlistDidChangeNotification:(id)arg1 ;
-(void)_internalIsLikedDidChangeNotification:(id)arg1 ;
-(void)_internalIsBannedDidChangeNotification:(id)arg1 ;
-(id)radioTrack;
-(void)_applyLoudnessInfoForVolumeNormalization;
-(BOOL)isInWishList;
-(BOOL)isLiked;
-(BOOL)isBanned;
-(id)aggregateDictionaryItemType;
-(void)addDerivedStationForArtist:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setIsBanned:(BOOL)arg1 ;
-(void)setIsLiked:(BOOL)arg1 ;
-(void)setIsInWishList:(BOOL)arg1 ;
-(BOOL)isHeartbeatInvalid;
-(void)setHeartbeatInvalid:(BOOL)arg1 ;
-(RadioStation *)station;
-(void)setStation:(RadioStation *)arg1 ;
-(NSString *)stationName;
@end
