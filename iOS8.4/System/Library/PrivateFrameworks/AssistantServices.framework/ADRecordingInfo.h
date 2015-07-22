/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface ADRecordingInfo : NSObject {

	BOOL _isDictation;
	BOOL _isFingerprintOnly;
	NSString* _codec;
	NSString* _source;
	NSString* _route;
	NSString* _deviceId;
	NSString* _modelName;
	NSString* _dspStatus;
	NSString* _headsetAddress;
	NSString* _headsetName;
	BOOL _isEndAlertInfo;
	NSDictionary* _voiceTriggerEventInfo;

}

@property (nonatomic,readonly) BOOL isDictation;                                  //@synthesize isDictation=_isDictation - In the implementation block
@property (nonatomic,readonly) BOOL isFingerprintOnly;                            //@synthesize isFingerprintOnly=_isFingerprintOnly - In the implementation block
@property (nonatomic,readonly) NSString * codec;                                  //@synthesize codec=_codec - In the implementation block
@property (nonatomic,readonly) NSString * source;                                 //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * route;                                  //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) NSString * deviceId;                               //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,readonly) NSString * modelName;                              //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,readonly) NSString * dspStatus;                              //@synthesize dspStatus=_dspStatus - In the implementation block
@property (nonatomic,readonly) NSString * headsetAddress;                         //@synthesize headsetAddress=_headsetAddress - In the implementation block
@property (nonatomic,readonly) NSString * headsetName;                            //@synthesize headsetName=_headsetName - In the implementation block
@property (nonatomic,readonly) NSDictionary * voiceTriggerEventInfo;              //@synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo - In the implementation block
@property (nonatomic,readonly) BOOL isBluetooth; 
@property (assign,nonatomic) BOOL isEndAlertInfo;                                 //@synthesize isEndAlertInfo=_isEndAlertInfo - In the implementation block
-(id)initWithDictation:(BOOL)arg1 fingerprintOnly:(BOOL)arg2 recordSettings:(id)arg3 usingCurrentDeviceWithRoute:(id)arg4 voiceTriggerEventInfo:(id)arg5 ;
-(id)initWithDictation:(BOOL)arg1 codec:(id)arg2 ;
-(BOOL)isDictation;
-(BOOL)isFingerprintOnly;
-(BOOL)isEndAlertInfo;
-(void)setIsEndAlertInfo:(BOOL)arg1 ;
-(NSString *)modelName;
-(NSString *)source;
-(NSString *)deviceId;
-(NSString *)codec;
-(NSString *)dspStatus;
-(NSString *)headsetAddress;
-(NSString *)headsetName;
-(NSDictionary *)voiceTriggerEventInfo;
-(BOOL)isBluetooth;
-(NSString *)route;
@end
