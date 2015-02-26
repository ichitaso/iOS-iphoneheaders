/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Message/Message-Structs.h>
@class NSObject, NSCountedSet, CDSession;

@interface MFPowerController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _powerQueue;
	int _pluggedIn;
	int _powerToken;
	unsigned _appState;
	NSCountedSet* _identifiers;
	IONotificationPortRef _pmPort;
	unsigned _pmNotifier;
	CDSession* _duetSession;

}
+(id)sharedInstance;
+(void)powerlog:(id)arg1 eventData:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)retainAssertionWithIdentifier:(id)arg1 withAccount:(id)arg2 ;
-(void)releaseAssertionWithIdentifier:(id)arg1 ;
-(id)copyDiagnosticInformation;
-(BOOL)isPluggedIn;
-(void)_initDuet;
-(void)_setPluggedIn:(unsigned)arg1 ;
-(void)_releaseAssertion_nts;
-(void)_setupAssertionTimer:(double)arg1 ;
-(void)_retainAssertion_nts;
-(void)retainAssertionWithIdentifier:(id)arg1 ;
-(id)_duetAttributeForAccountWithUniqueId:(id)arg1 discretionary:(BOOL)arg2 ;
-(void)_deleteDuetAttributesForAccountWithUniqueId:(id)arg1 ;
-(BOOL)_createBudgetWithName:(id)arg1 parentBudgetName:(id)arg2 attribute:(id)arg3 error:(id*)arg4 ;
-(BOOL)_deleteBudgetWithName:(id)arg1 ;
-(id)duetIdentifier;
-(void)recordDuetEventForAccount:(id)arg1 event:(id)arg2 ;
-(void)_applicationStateChanged:(id)arg1 ;
@end
