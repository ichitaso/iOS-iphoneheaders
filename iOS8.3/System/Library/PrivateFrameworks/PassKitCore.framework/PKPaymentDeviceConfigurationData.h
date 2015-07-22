/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:56:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/NSSecureCoding.h>

@interface PKPaymentDeviceConfigurationData : NSObject <NSSecureCoding> {

	char _devSigned;

}

@property (assign,nonatomic) char devSigned;              //@synthesize devSigned=_devSigned - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDevSigned:(char)arg1 ;
-(char)devSigned;
@end
