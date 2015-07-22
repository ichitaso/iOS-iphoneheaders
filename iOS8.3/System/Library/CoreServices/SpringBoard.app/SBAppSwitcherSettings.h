/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:29 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class SBFAnimationSettings, _UIScreenEdgePanRecognizerSettings;

@interface SBAppSwitcherSettings : _UISettings {

	char _transitionToAppThroughDefaultPng;
	int _peopleNumberOfRecents;
	int _simplicityOptions;
	SBFAnimationSettings* _transitionAnimationSettings;
	SBFAnimationSettings* _dosidoAnimationSettings;
	_UIScreenEdgePanRecognizerSettings* _gestureSettings;

}

@property (assign) int peopleNumberOfRecents;                                         //@synthesize peopleNumberOfRecents=_peopleNumberOfRecents - In the implementation block
@property (assign) char transitionToAppThroughDefaultPng;                             //@synthesize transitionToAppThroughDefaultPng=_transitionToAppThroughDefaultPng - In the implementation block
@property (assign) int simplicityOptions;                                             //@synthesize simplicityOptions=_simplicityOptions - In the implementation block
@property (retain) SBFAnimationSettings * transitionAnimationSettings;                //@synthesize transitionAnimationSettings=_transitionAnimationSettings - In the implementation block
@property (retain) SBFAnimationSettings * dosidoAnimationSettings;                    //@synthesize dosidoAnimationSettings=_dosidoAnimationSettings - In the implementation block
@property (retain) _UIScreenEdgePanRecognizerSettings * gestureSettings;              //@synthesize gestureSettings=_gestureSettings - In the implementation block
+(id)settingsControllerModule;
-(SBFAnimationSettings *)dosidoAnimationSettings;
-(char)shouldSimplifyForOptions:(int)arg1 ;
-(char)transitionToAppThroughDefaultPng;
-(void)setSimplicityOptions:(int)arg1 ;
-(SBFAnimationSettings *)transitionAnimationSettings;
-(void)setPeopleNumberOfRecents:(int)arg1 ;
-(void)setTransitionToAppThroughDefaultPng:(char)arg1 ;
-(int)simplicityOptions;
-(int)peopleNumberOfRecents;
-(void)setTransitionAnimationSettings:(SBFAnimationSettings *)arg1 ;
-(void)setDosidoAnimationSettings:(SBFAnimationSettings *)arg1 ;
-(_UIScreenEdgePanRecognizerSettings *)gestureSettings;
-(void)setGestureSettings:(_UIScreenEdgePanRecognizerSettings *)arg1 ;
-(void)setDefaultValues;
@end
