/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <assistivetouchd/assistivetouchd-Structs.h>
@class SCRCThread, NSMutableArray, NSLock, NSString, NSThread, AXAssertion;

@interface HNDEventManager : NSObject {

	SCRCThread* _eventDispatchThread;
	NSMutableArray* _eventsToDispatch;
	NSMutableArray* _eventsToMatch;
	CFRunLoopSourceRef _source;
	CFRunLoopRef _runLoop;
	NSLock* _eventLock;
	BOOL _isCapturingEvents;
	BOOL _nubbitMoving;
	NSString* _axSpringBoardCallbackIdentifier;
	NSThread* _ioFilterThread;
	IOHIDEventSystemClientRef _ioSystemFilterClient;
	IOHIDEventSystemClientRef _ioSystemPostBackClient;
	AXAssertion* _disableSystemGesturesAssertion;
	IOHIDEventSystemClientRef _ioSystemClient;

}

@property (nonatomic,retain) AXAssertion * disableSystemGesturesAssertion;              //@synthesize disableSystemGesturesAssertion=_disableSystemGesturesAssertion - In the implementation block
@property (nonatomic,readonly) BOOL isCapturingEvents;                                  //@synthesize isCapturingEvents=_isCapturingEvents - In the implementation block
@property (nonatomic,readonly) IOHIDEventSystemClientRef ioSystemClient;                //@synthesize ioSystemClient=_ioSystemClient - In the implementation block
+(void)initialize;
+(id)sharedManager;
-(void)resetEventManager;
-(void)setCaptureEvents:(BOOL)arg1 ;
-(void)setNubbitMoving:(BOOL)arg1 ;
-(void)performCancel;
-(void)systemServerRestarted;
-(void)performDownWithFingers:(id)arg1 ;
-(void)performUpWithFingers:(id)arg1 ;
-(void)performMoveWithFingers:(id)arg1 ;
-(void)notifyUserEventOccurred;
-(void)performHardwareButton:(int)arg1 state:(int)arg2 ;
-(BOOL)isCapturingEvents;
-(void)wakeDeviceFromSleepIfNecessary;
-(void)manipulateDimTimer:(BOOL)arg1 ;
-(void)ringerSwitchChanged;
-(void)substantialTransitionOccurred;
-(void)_startThread;
-(void)_initializeASTNotificationCenter;
-(void)_initializeSystemWideServerPort;
-(void)_initializeSpringBoardItems;
-(void)_resetEventManager;
-(void)_unregisterIOFilter;
-(void)keyboardStatusChanged:(id)arg1 userInfo:(id)arg2 ;
-(void)mediaControlsChanged:(id)arg1 userInfo:(id)arg2 ;
-(void)_disableIOFilter;
-(void)_startIOThread;
-(void)_registerIOHIDUsage;
-(void)_sendEventRepresentation:(id)arg1 ;
-(void)_sendHandEvent:(unsigned)arg1 location:(id)arg2 ;
-(void)_sendButtonEvent:(unsigned)arg1 ;
-(void)_sendDeviceOrientationChange:(int)arg1 ;
-(void)_takeScreenshot;
-(void)_toggleAppSwitcher;
-(void)_toggleSiri;
-(void)_toggleVoiceControl;
-(void)_tripleClick;
-(void)_restartConnectionToSystemServer;
-(void)_handleIOHIDEvent:(IOHIDEventRef)arg1 ;
-(BOOL)sideSwitchUsedForOrientation;
-(BOOL)orientationLocked;
-(void)openCreateCustomGestureForAST;
-(void)openCreateCustomGestureForSCAT;
-(void)openCommonTasks;
-(void)_performPressAndHoldMenu:(float)arg1 ;
-(IOHIDEventSystemClientRef)ioSystemClient;
-(id)init;
-(int)deviceOrientation;
-(void)setMenuVisible:(BOOL)arg1 ;
-(AXAssertion *)disableSystemGesturesAssertion;
-(void)setDisableSystemGesturesAssertion:(AXAssertion *)arg1 ;
-(void)setOrientationLocked:(BOOL)arg1 ;
-(double)volumeLevel;
-(BOOL)isVoiceControlRunning;
-(void)_processQueue;
@end
