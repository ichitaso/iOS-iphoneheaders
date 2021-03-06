/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/BWNodeMessage.h>

@class BWFormat;

@interface BWNodeConfigurationLiveMessage : BWNodeMessage {

	long long _configurationID;
	BWFormat* _updatedFormat;

}

@property (readonly) long long configurationID; 
@property (readonly) BWFormat * updatedFormat; 
+(id)newMessageWithConfigurationID:(long long)arg1 updatedFormat:(id)arg2 ;
+(id)newMessageWithConfigurationID:(long long)arg1 ;
-(long long)configurationID;
-(void)dealloc;
-(BWFormat *)updatedFormat;
-(id)_initWithConfigurationID:(long long)arg1 updatedFormat:(id)arg2 ;
@end

