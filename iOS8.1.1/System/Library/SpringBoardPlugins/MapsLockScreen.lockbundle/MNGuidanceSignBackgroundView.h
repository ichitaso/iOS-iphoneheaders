/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, MNSignStyle;

@interface MNGuidanceSignBackgroundView : UIView {

	UIImageView* _outerBackdrop;
	UIImageView* _innerBackdrop;
	MNSignStyle* _style;

}

@property (nonatomic,retain) MNSignStyle * style;              //@synthesize style=_style - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MNSignStyle *)style;
-(void)setStyle:(MNSignStyle *)arg1 ;
@end
