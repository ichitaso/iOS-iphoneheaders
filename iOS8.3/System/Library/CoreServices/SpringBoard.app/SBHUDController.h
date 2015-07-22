/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:27 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIWindow, UIView, SBHUDView;

@interface SBHUDController : NSObject {

	UIWindow* _hudWindow;
	UIView* _hudContentView;
	UIView* _hudParallaxCorrectionView;
	UIView* _hudParallaxView;
	SBHUDView* _hudView;
	int _orientation;
	char _hudVisibleOrFading;

}
+(id)sharedHUDController;
-(void)_orderWindowOut:(id)arg1 ;
-(id)visibleHUDView;
-(id)visibleOrFadingHUDView;
-(void)_recenterHUDView;
-(void)_createUI;
-(void)presentHUDView:(id)arg1 ;
-(void)hideHUDView;
-(void)_tearDown;
-(void)dealloc;
-(void)reorientHUDIfNeeded:(char)arg1 ;
-(void)presentHUDView:(id)arg1 autoDismissWithDelay:(double)arg2 ;
@end
