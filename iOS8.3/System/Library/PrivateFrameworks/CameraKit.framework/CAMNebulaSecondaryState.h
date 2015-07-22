/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:53:33 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/NSCoding.h>

@class NSDate;

@interface CAMNebulaSecondaryState : NSObject <NSCoding> {

	NSDate* _stopTime;
	int _stopReasons;
	NSDate* _lastMovieWriteAttemptTime;
	int _movieWriteAttemptsCount;
	int _failedStateReadAttemptsCount;

}

@property (nonatomic,retain) NSDate * stopTime;                                 //@synthesize stopTime=_stopTime - In the implementation block
@property (assign,nonatomic) int stopReasons;                                   //@synthesize stopReasons=_stopReasons - In the implementation block
@property (nonatomic,readonly) NSDate * lastMovieWriteAttemptTime;              //@synthesize lastMovieWriteAttemptTime=_lastMovieWriteAttemptTime - In the implementation block
@property (nonatomic,readonly) int movieWriteAttemptsCount;                     //@synthesize movieWriteAttemptsCount=_movieWriteAttemptsCount - In the implementation block
@property (assign,nonatomic) int failedStateReadAttemptsCount;                  //@synthesize failedStateReadAttemptsCount=_failedStateReadAttemptsCount - In the implementation block
+(id)secondaryStateWithContentsOfFile:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(int)stopReasons;
-(char)addStopReasons:(int)arg1 stopTime:(id)arg2 ;
-(int)failedStateReadAttemptsCount;
-(int)movieWriteAttemptsCount;
-(NSDate *)lastMovieWriteAttemptTime;
-(void)setStopReasons:(int)arg1 ;
-(void)notifyWillAttemptToWriteMovie;
-(char)writeToFile:(id)arg1 ;
-(void)setFailedStateReadAttemptsCount:(int)arg1 ;
-(void)setStopTime:(NSDate *)arg1 ;
-(NSDate *)stopTime;
@end
