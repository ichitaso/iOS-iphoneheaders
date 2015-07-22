/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKFetchesSyncServiceServerDelegate;
@interface NNMKFetchesSyncServiceServer : NNMKSyncServiceEndpoint {

	id<NNMKFetchesSyncServiceServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKFetchesSyncServiceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<NNMKFetchesSyncServiceServerDelegate>)arg1 ;
-(id<NNMKFetchesSyncServiceServerDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(void)requestPrepareForFullSync:(id)arg1 ;
-(void)warnNeedsUnlock:(id)arg1 ;
-(void)warnErrorDownloadingContentForMessage:(id)arg1 notificationPriority:(BOOL)arg2 userRequested:(BOOL)arg3 ;
-(void)notifyOldMessagesAvailable:(id)arg1 ;
-(void)notifyFetchRequestCompleted:(id)arg1 ;
@end
