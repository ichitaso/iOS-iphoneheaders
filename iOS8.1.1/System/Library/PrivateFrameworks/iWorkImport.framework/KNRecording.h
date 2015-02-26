/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:46 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@class NSArray, KNRecordingMovieTrack, NSDate;

@interface KNRecording : TSPObject {

	NSArray* mEventTracks;
	KNRecordingMovieTrack* mMovieTrack;
	double mDuration;
	NSDate* mModificationDate;
	BOOL mInSyncWithShow;

}

@property (nonatomic,readonly) NSArray * eventTracks; 
@property (nonatomic,readonly) KNRecordingMovieTrack * movieTrack; 
@property (nonatomic,readonly) double duration; 
@property (getter=isInSyncWithShow,nonatomic,readonly) BOOL inSyncWithShow; 
@property (nonatomic,readonly) NSDate * modificationDate; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(RecordingArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithContext:(id)arg1 eventTracks:(id)arg2 movieTrack:(id)arg3 duration:(double)arg4 modificationDate:(id)arg5 ;
-(NSArray *)eventTracks;
-(KNRecordingMovieTrack *)movieTrack;
-(id)initWithContext:(id)arg1 eventTracks:(id)arg2 movieTrack:(id)arg3 duration:(double)arg4 ;
-(id)recordingByReplacingSegmentAfterTime:(double)arg1 withRecording:(id)arg2 ;
-(id)recordingByMarkingAsOutOfSyncWithShow;
-(BOOL)isInSyncWithShow;
-(void)dealloc;
-(double)duration;
-(id)initWithContext:(id)arg1 ;
-(NSDate *)modificationDate;
@end
