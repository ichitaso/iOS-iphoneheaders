/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol VOTEventFactoryCallbackProtocol
@required
-(void)handleSystemWideServerDied;
-(void)handleRingerSwitchSwitched:(id)arg1;
-(void)handleKeyboardKeyEvent:(id)arg1;
-(void)handleVolumeButtonPress:(id)arg1;
-(void)handleMenuButtonPress:(id)arg1;
-(void)handleMediaKeyPress:(id)arg1;
-(void)handleLockButtonPress:(id)arg1;
-(void)handleProximityEvent:(id)arg1;
-(void)handleOrientationChanged;
-(void)handleReturnToSpringBoard;
@end
