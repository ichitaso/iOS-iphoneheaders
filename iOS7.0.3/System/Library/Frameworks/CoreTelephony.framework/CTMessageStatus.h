/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface CTMessageStatus : NSObject {

	unsigned _messageId;
	int _messageType;
	int _result;

}

@property (readonly) unsigned messageId;              //@synthesize messageId=_messageId - In the implementation block
@property (readonly) int messageType;                 //@synthesize messageType=_messageType - In the implementation block
@property (readonly) int result;                      //@synthesize result=_result - In the implementation block
-(unsigned)messageId;
-(int)messageType;
-(id)initWithMessageId:(unsigned)arg1 messageType:(int)arg2 result:(int)arg3 ;
-(int)result;
@end

