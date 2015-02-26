/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSString, AVCaptureDevice, FigCaptureSessionConfiguration, NSMutableArray, NSHashTable, AVCaptureSessionConfiguration, NSError, AVRunLoopCondition;

@interface AVCaptureSessionInternal : NSObject {

	AVWeakReference* weakReference;
	NSString* sessionPreset;
	AVCaptureDevice* adjustingDeviceActiveFormat;
	int beginConfigRefCount;
	FigCaptureSessionConfiguration* sessionConfig;
	OpaqueFigCaptureSessionRef figCaptureSession;
	BOOL figCaptureSessionRunning;
	NSMutableArray* inputs;
	NSMutableArray* outputs;
	NSHashTable* videoPreviewLayers;
	NSMutableArray* connections;
	NSMutableArray* committedAVCaptureSessionConfigurations;
	AVCaptureSessionConfiguration* liveAVCaptureSessionConfiguration;
	NSError* stopError;
	BOOL running;
	BOOL interrupted;
	BOOL usesApplicationAudioSession;
	BOOL automaticallyConfiguresApplicationAudioSession;
	AVRunLoopCondition* runLoopCondition;
	BOOL waitingForFigCaptureSessionToStart;
	BOOL waitingForFigCaptureSessionToStop;
	BOOL waitingForFigCaptureSessionConfigurationToBecomeLive;
	BOOL waitingForFigCaptureSessionToStopDueToEmptyConfig;
	OpaqueCMClockRef masterClock;
	BOOL notifiesOnMainThread;
	BOOL adjustingVideoDeviceHDREnabled;
	BOOL sessionPresetChanging;

}
@end
