/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CECBusPollingOperationDelegate <NSObject>
@optional
-(void)pollingOperation:(id)arg1 deviceNotRespondingAtAddress:(unsigned char)arg2;
-(void)pollingOperation:(id)arg1 encounteredError:(id)arg2 forMessage:(id)arg3;

@required
-(BOOL)pollingOperation:(id)arg1 shouldSkipAddress:(unsigned char)arg2;
-(void)pollingOperationCompleted:(id)arg1;

@end
