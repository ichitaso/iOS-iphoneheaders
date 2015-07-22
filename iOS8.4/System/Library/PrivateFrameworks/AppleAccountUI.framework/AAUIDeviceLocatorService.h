/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AAUIDeviceLocatorService : NSObject {

	unsigned long long _lastKnownState;
	BOOL _hasAttemptedToFetchState;
	BOOL _wantsToEnable;
	NSObject*<OS_dispatch_queue> _stateUpdateQueue;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)isEnabled;
-(void)_updateStateAndNotify:(BOOL)arg1 ;
-(BOOL)isChangingState;
-(BOOL)isStateKnown;
-(void)enableInContext:(unsigned long long)arg1 ;
-(void)disableInContext:(unsigned long long)arg1 withWipeToken:(id)arg2 ;
-(void)setShouldEnable:(BOOL)arg1 ;
-(BOOL)shouldEnable;
@end
