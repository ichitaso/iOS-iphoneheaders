/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppSupport/InvocationTrampoline.h>

@class NSThread;

@interface ThreadedInvocationTrampoline : InvocationTrampoline {

	NSThread* _thread;
	char _immediateForMatchingThread;

}
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithTarget:(id)arg1 thread:(id)arg2 immediateForMatchingThread:(char)arg3 ;
@end
