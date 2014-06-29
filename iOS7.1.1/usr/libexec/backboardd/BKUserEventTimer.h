/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface BKUserEventTimer : NSObject {

	double _currentTimeout;
	double _lastUserEvent;
	double _lastResetTimerRequest;
	NSObject<OS_dispatch_source>* _timer;
	BOOL _isIdle;
	int _currentMode;
	NSObject<OS_dispatch_queue>* _queue;
	BOOL _shouldNotify;

}
+(id)sharedInstance;
-(void)resetTimer:(double)arg1 mode:(int)arg2 ;
-(void)userEventOccurredOnDisplay:(id)arg1 ;
-(void)_scheduleTimerWithTimeInterval:(double)arg1 ;
-(void)_didUnIdle;
-(void)_userEventOccurredInIdleMode;
-(void)_userEventOccurredInPresenceMode;
-(void)_clearTimer;
-(void)dealloc;
-(id)init;
-(void)notifyOnNextUserEvent;
@end
