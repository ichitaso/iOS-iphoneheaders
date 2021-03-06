/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoRegistry/NRDevice.h>

@class NSUUID;

@interface NRFrameworkDevice : NRDevice {

	NSUUID* _deviceID;

}

@property (nonatomic,retain) NSUUID * deviceID;              //@synthesize deviceID=_deviceID - In the implementation block
-(char)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(NSUUID *)deviceID;
-(void)setDeviceID:(NSUUID *)arg1 ;
-(id)initWithDevice:(id)arg1 deviceID:(id)arg2 queue:(id)arg3 ;
@end

