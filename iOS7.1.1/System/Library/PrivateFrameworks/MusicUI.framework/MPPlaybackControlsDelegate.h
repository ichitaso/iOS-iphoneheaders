/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPPlaybackControlsDelegate <NSObject>
@optional
-(bool)playbackControlsScrubberShouldDisplaySingleChapters:(id)arg1;
-(unsigned long long)repeatTypeForPlaybackControls:(id)arg1;
-(void)controlsOverlayDetailSliderInstructionOverlayWillHide:(id)arg1;
-(void)controlsOverlayDetailSliderTrackingDidEnd:(id)arg1;
-(unsigned long long)shuffleTypeForPlaybackControls:(id)arg1;
-(bool)controlsOverlay:(id)arg1 shouldUseDetailScrubberForItem:(id)arg2;
-(bool)playbackControlsDidTapGeniusButton:(id)arg1;
-(void)controlsOverlay:(id)arg1 didClickMailPodcastLinkButtonForItem:(id)arg2;
-(void)controlsOverlayDidClickPlaybackSpeedButton:(id)arg1;
-(bool)playbackControls:(id)arg1 changedRepeatType:(unsigned long long)arg2;
-(void)controlsOverlayDidClickFastForwardButton:(id)arg1;
-(void)controlsOverlay:(id)arg1 didTapRadioButtonForItem:(id)arg2;
-(void)controlsOverlay:(id)arg1 didTapRadioHistoryButtonForItem:(id)arg2;
-(void)controlsOverlay:(id)arg1 didTapRadioShareButtonForItem:(id)arg2;
-(void)controlsOverlay:(id)arg1 didTapTrackInfoButtonForItem:(id)arg2;
-(void)controlsOverlayDidClickRewindButton:(id)arg1;
-(bool)playbackControls:(id)arg1 changedShuffleType:(unsigned long long)arg2;
-(void)controlsOverlayDetailSliderTrackingDidBegin:(id)arg1;
-(void)controlsOverlayDetailSliderInstructionOverlayWillShow:(id)arg1;
-(void)controlsOverlay:(id)arg1 detailSliderTrackingDidChangeScrubSpeed:(long long)arg2;
-(bool)hideGeniusButtonForPlaybackControls:(id)arg1;
-(bool)controlsOverlay:(id)arg1 shouldDisableFastFowardAndRewindButtonForItem:(id)arg2;
-(bool)controlsOverlay:(id)arg1 shouldDisablePlaybackSpeedButtonForItem:(id)arg2;
-(bool)controlsOverlay:(id)arg1 shouldDisableMailPodcastLinkButtonForItem:(id)arg2;
-(bool)controlsOverlay:(id)arg1 shouldHideMailPodcastLinkButtonForItem:(id)arg2;
-(bool)controlsOverlay:(id)arg1 shouldHideRadioButtonForItem:(id)arg2;
-(unsigned long long)controlsOverlay:(id)arg1 playbackSpeedForItem:(id)arg2;
@end
