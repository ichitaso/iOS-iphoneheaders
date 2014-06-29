/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <Setup/BuddySubtitleView.h>

@class UIButton;

@interface BuddySubtitleButtonView : BuddySubtitleView {

	UIButton* _doneButton;

}

@property (nonatomic,retain) UIButton * doneButton;              //@synthesize doneButton=_doneButton - In the implementation block
-(void)setButtonFontSize:(float)arg1 ;
-(void)setDoneButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setButtonText:(id)arg1 ;
-(id)doneButton;
@end
