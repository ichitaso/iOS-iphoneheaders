/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface VMXPCMessageResult : NSObject {

	BOOL _wasSuccessful;
	NSDictionary* _message;

}

@property (retain) NSDictionary * message;              //@synthesize message=_message - In the implementation block
@property (assign) BOOL wasSuccessful;                  //@synthesize wasSuccessful=_wasSuccessful - In the implementation block
+(id)result;
+(id)resultWithWasSuccessful:(BOOL)arg1 message:(id)arg2 ;
-(void)dealloc;
-(NSDictionary *)message;
-(void)setMessage:(NSDictionary *)arg1 ;
-(BOOL)wasSuccessful;
-(id)initWithWasSuccessful:(BOOL)arg1 message:(id)arg2 ;
-(void)setWasSuccessful:(BOOL)arg1 ;
@end
