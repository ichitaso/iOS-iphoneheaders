/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:26:33 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MRDRemoteControlBlacklistEntry : NSObject {

	NSString* _bundleIdentifier;
	int _type;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) int type;                                 //@synthesize type=_type - In the implementation block
-(id)initWithBundleID:(id)arg1 blacklistType:(int)arg2 ;
-(NSString *)bundleIdentifier;
-(int)type;
@end
