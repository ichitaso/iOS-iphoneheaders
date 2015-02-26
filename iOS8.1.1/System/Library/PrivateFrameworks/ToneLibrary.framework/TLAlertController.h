/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, TLAccessQueue;

@interface TLAlertController : NSObject {

	NSMutableDictionary* _alertsBySoundIDs;
	TLAccessQueue* _alertsBySoundIDsAccessQueue;

}

@property (nonatomic,readonly) BOOL _hasVibratorCapability; 
@property (setter=_setAlertsBySoundIDs:,nonatomic,retain) NSMutableDictionary * _alertsBySoundIDs;                    //@synthesize alertsBySoundIDs=_alertsBySoundIDs - In the implementation block
@property (setter=_setAlertsBySoundIDsAccessQueue:,retain) TLAccessQueue * _alertsBySoundIDsAccessQueue;              //@synthesize alertsBySoundIDsAccessQueue=_alertsBySoundIDsAccessQueue - In the implementation block
+(id)sharedAlertController;
-(void)dealloc;
-(id)init;
-(BOOL)_hasVibratorCapability;
-(BOOL)_playAlert:(id)arg1 completionHandler:(/*^block*/id)arg2 targetQueue:(id)arg3 ;
-(void)_stopAlert:(id)arg1 ;
-(void)_setAlertsBySoundIDsAccessQueue:(id)arg1 ;
-(TLAccessQueue *)_alertsBySoundIDsAccessQueue;
-(NSMutableDictionary *)_alertsBySoundIDs;
-(void)_removeSoundID:(unsigned)arg1 shouldStopSound:(BOOL)arg2 fireCompletionHandler:(BOOL)arg3 ;
-(void)_setAlertsBySoundIDs:(id)arg1 ;
-(BOOL)_stopAllAlerts;
-(unsigned)_soundIDForAlert:(id)arg1 ;
-(void)_didReachTimeoutForSystemSound:(id)arg1 ;
-(BOOL)stopAllAlerts;
-(void)_systemSoundDidFinishPlaying:(unsigned)arg1 ;
@end
