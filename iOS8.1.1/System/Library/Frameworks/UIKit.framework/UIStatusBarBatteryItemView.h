/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIStatusBarItemView.h>

@class UIView;

@interface UIStatusBarBatteryItemView : UIStatusBarItemView {

	int _capacity;
	int _state;
	UIView* _accessoryView;

}
-(void)dealloc;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)contentsImage;
-(double)legibilityStrength;
-(double)extraRightPadding;
-(void)_updateAccessoryImage;
-(BOOL)_needsAccessoryImage;
-(id)_accessoryImage;
-(double)_batteryYOffsetWithBackground:(id)arg1 ;
@end
