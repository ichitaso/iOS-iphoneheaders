/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:46:24 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/XPCServices/com.apple.siri.analyzer.xpc/com.apple.siri.analyzer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AFAnalyzer : NSObject
+(id)analyzer;
-(id)_addressToPingForHost:(id)arg1 ;
-(void)_getDefaultGateway:(id*)arg1 iface:(id*)arg2 ;
-(double)_measureTimeToLoadURL:(id)arg1 withMethod:(id)arg2 ;
-(void)_pingHost:(id)arg1 time:(double*)arg2 sentPackets:(int*)arg3 droppedPackets:(int*)arg4 ;
-(void)_logAnalysisForURL:(id)arg1 failedIFaceIndex:(id)arg2 sendBufferSize:(id)arg3 isUserFailure:(char)arg4 isWWANPreferred:(char)arg5 isRetrySuccess:(char)arg6 ;
-(void)_startAnalysisWithMessage:(id)arg1 ;
-(id)_resultForCommand:(const char*)arg1 ;
-(void)runAnalyzerService;
-(void)runAnalysis;
-(void)_handleMessage:(id)arg1 ;
@end
