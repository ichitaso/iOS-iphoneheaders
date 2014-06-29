/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class UIViewController, AccessibilityInfoPanelWindow, UIView, UILabel, NSString;

@interface AccessibilityInfoPanel : NSObject {

	UIViewController* _accessibilityInfoPanelController;
	AccessibilityInfoPanelWindow* _accessibilityInfoPanelWindow;
	UIView* _accessibilityInfoPanelView;
	UIView* _rootView;
	UILabel* _labelView;
	UIView* _backgroundView;
	NSString* _title;
	bool _displayOnBottomEdge;

}

@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,@dynamic) bool displayOnBottomEdge; 
-(bool)displayOnBottomEdge;
-(CGRect)_displayFrame;
-(void)setDisplayOnBottomEdge:(bool)arg1 ;
-(id)_accessibilityInfoPanelView;
-(id)_accessibilityInfoPanelWindow;
-(id)_accessibilityInfoPanelController;
-(void)dealloc;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)show;
-(id)initWithTitle:(id)arg1 ;
-(id)title;
-(void)hide;
-(void)fadeOut;
-(id)_rootView;
-(void)_setup;
-(void)_layoutSubviews;
@end
