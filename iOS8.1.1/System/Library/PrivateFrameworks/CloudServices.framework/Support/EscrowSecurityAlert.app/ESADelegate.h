/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/Support/EscrowSecurityAlert.app/EscrowSecurityAlert
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <EscrowSecurityAlert/EscrowSecurityAlertDelegateProtocol.h>

@class NSString;

@interface ESADelegate : NSObject <EscrowSecurityAlertDelegateProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isNotificationDisabled;
-(void)prompt:(int)arg1 ;
-(void)cancelAlert;
-(BOOL)isNotificationSnoozed;
-(id)init;
-(int)alertType;
@end
