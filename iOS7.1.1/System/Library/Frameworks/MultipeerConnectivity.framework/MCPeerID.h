/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MultipeerConnectivity/MultipeerConnectivity-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class MCPeerIDInternal, NSString;

@interface MCPeerID : NSObject <NSCopying, NSSecureCoding> {

	MCPeerIDInternal* _internal;

}

@property (nonatomic,readonly) NSString * displayName; 
+(bool)supportsSecureCoding;
-(id)idString;
-(id)serializedRepresentation;
-(id)initWithIDString:(id)arg1 displayName:(id)arg2 ;
-(unsigned long long)pid64;
-(id)internalDescription;
-(id)initWithPID:(unsigned)arg1 displayName:(id)arg2 ;
-(id)initWithDisplayName:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)displayName;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(unsigned)pid;
@end
