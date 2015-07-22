/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:41:59 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSUReadChannel.h>
#import <iWorkImport/TSUStreamWriteChannel.h>
#import <iWorkImport/TSURandomWriteChannel.h>

@protocol OS_dispatch_io, OS_dispatch_queue;
@class NSObject, NSString;

@interface TSUFileIOChannel : NSObject <TSUReadChannel, TSUStreamWriteChannel, TSURandomWriteChannel> {

	NSObject*<OS_dispatch_io> _channel;
	NSObject*<OS_dispatch_queue> _readQueue;
	char _isClosed;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isValid; 
-(id)initForStreamWritingURL:(id)arg1 error:(id*)arg2 ;
-(void)writeData:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)readFromOffset:(long long)arg1 length:(unsigned long)arg2 handler:(/*^block*/id)arg3 ;
-(id)initForReadingDescriptor:(int)arg1 queue:(id)arg2 cleanupHandler:(/*^block*/id)arg3 ;
-(id)initForRandomWritingURL:(id)arg1 error:(id*)arg2 ;
-(void)setLowWater:(unsigned long)arg1 ;
-(id)initForReadingURL:(id)arg1 error:(id*)arg2 ;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(void)writeData:(id)arg1 offset:(long long)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)initWithType:(unsigned long)arg1 URL:(id)arg2 oflag:(int)arg3 mode:(unsigned short)arg4 error:(id*)arg5 ;
-(id)initWithType:(unsigned long)arg1 descriptor:(int)arg2 queue:(id)arg3 cleanupHandler:(/*^block*/id)arg4 ;
-(id)initWithType:(unsigned long)arg1 channel:(id)arg2 ;
-(id)createRandomAccessChannel;
-(void)dealloc;
-(char)isValid;
-(void)close;
@end
