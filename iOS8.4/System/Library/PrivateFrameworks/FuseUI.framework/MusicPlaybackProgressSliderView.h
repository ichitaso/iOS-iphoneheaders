/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>
#import <FuseUI/MusicPlaybackProgressScrubberDelegate.h>
#import <FuseUI/MusicPlaybackProgressScrubbing.h>

@protocol OS_dispatch_source, MusicPlaybackProgressScrubberDelegate;
@class NSObject, MusicPlaybackProgressSlider, UILabel, NSString;

@interface MusicPlaybackProgressSliderView : UIView <MusicPlaybackProgressScrubberDelegate, MusicPlaybackProgressScrubbing> {

	BOOL _isTracking;
	NSObject*<OS_dispatch_source> _labelAdjustTimerSource;
	BOOL _needsUpdateTimeLabelText;
	MusicPlaybackProgressSlider* _playbackProgressSlider;
	BOOL _preventsTimerStart;
	CGSize _previousKnownSize;
	id<MusicPlaybackProgressScrubberDelegate> _scrubberDelegate;
	UILabel* _timePlayedLabel;
	UILabel* _timeRemainingLabel;
	UIEdgeInsets _textLabelEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets textLabelEdgeInsets;                                               //@synthesize textLabelEdgeInsets=_textLabelEdgeInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isAlwaysLive,nonatomic) BOOL alwaysLive; 
@property (nonatomic,readonly) long long currentScrubSpeed; 
@property (assign,nonatomic,__weak) id<MusicPlaybackProgressScrubberDelegate> scrubberDelegate; 
@property (nonatomic,readonly) double effectiveCurrentTime; 
@property (assign,nonatomic) float rate; 
@property (assign,getter=isScrubbingEnabled,nonatomic) BOOL scrubbingEnabled; 
@property (assign,nonatomic) double totalDuration; 
-(BOOL)isAlwaysLive;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(long long)currentScrubSpeed;
-(id<MusicPlaybackProgressScrubberDelegate>)scrubberDelegate;
-(void)setScrubberDelegate:(id<MusicPlaybackProgressScrubberDelegate>)arg1 ;
-(void)_setTracking:(BOOL)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)effectiveCurrentTime;
-(void)cancelScrubbing;
-(void)setAlwaysLive:(BOOL)arg1 ;
-(BOOL)isScrubbingEnabled;
-(void)setScrubbingEnabled:(BOOL)arg1 ;
-(double)totalDuration;
-(void)setTotalDuration:(double)arg1 ;
-(void)setTextLabelEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)playbackProgressScrubberTrackingDidBegin:(id)arg1 ;
-(void)playbackProgressScrubberTrackingDidEnd:(id)arg1 ;
-(void)playbackProgressScrubber:(id)arg1 didChangeCurrentTime:(double)arg2 ;
-(void)playbackProgressScrubber:(id)arg1 didChangeScrubSpeed:(long long)arg2 ;
-(void)_cancelTimeLabelUpdateTimer;
-(BOOL)_updateTimeLabelsText;
-(void)_setNeedsUpdateTimeLabelText;
-(void)_reloadTimeLabelUpdateTimer;
-(UIEdgeInsets)textLabelEdgeInsets;
-(float)rate;
-(void)setRate:(float)arg1 ;
@end

