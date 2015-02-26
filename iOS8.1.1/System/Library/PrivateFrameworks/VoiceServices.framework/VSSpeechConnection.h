/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection, VSSpeechConnectionDelegateWrapper, VSSpeechRequest;

@interface VSSpeechConnection : NSObject {

	NSXPCConnection* _connection;
	VSSpeechConnectionDelegateWrapper* _delegateWrapper;
	VSSpeechRequest* _request;

}

@property (assign,nonatomic,__weak) id<VSSpeechConnectionDelegate> delegate; 
@property (nonatomic,readonly) VSSpeechRequest * request;                                 //@synthesize request=_request - In the implementation block
-(void)_setRequest:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<VSSpeechConnectionDelegate>)arg1 ;
-(id<VSSpeechConnectionDelegate>)delegate;
-(VSSpeechRequest *)request;
-(id)_connection;
-(id)_remoteObject;
-(id)availableVoicesForLanguageCode:(id)arg1 ;
-(id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2 ;
-(BOOL)isSystemSpeaking;
-(void)startSpeechRequest:(id)arg1 ;
-(void)stopCurrentSpeechRequestAtMark:(long long)arg1 ;
-(void)pauseCurrentSpeechRequestAtMark:(long long)arg1 ;
-(void)continueCurrentSpeechRequest;
-(BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
-(void)setLogToFile:(BOOL)arg1 ;
-(void)getLogToFile:(/*^block*/id)arg1 ;
-(void)getAllVoiceAssets:(/*^block*/id)arg1 ;
-(void)getLocalVoiceAssets:(/*^block*/id)arg1 ;
-(void)downloadVoiceAsset:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAutoDownloadedVoiceAssets:(id)arg1 ;
-(void)getAutoDownloadedVoiceAssets:(/*^block*/id)arg1 ;
-(void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 custom:(BOOL)arg4 reply:(/*^block*/id)arg5 ;
-(void)_connectionInvalidated;
-(id)_remoteObjectWithErrorHandler:(/*^block*/id)arg1 ;
@end
