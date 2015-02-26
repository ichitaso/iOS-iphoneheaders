/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIButton.h>

@class CADisplayLink, UIImageView;

@interface MPUDownloadProgressIndicator : UIButton {

	float _animatedStartValue;
	float _animatedValue;
	BOOL _animating;
	BOOL _canCancel;
	double _animationEndTime;
	double _animationStartTime;
	CADisplayLink* _displayLink;
	UIImageView* _centerImageView;
	BOOL _mpExternalHidden;
	BOOL _mpInternalHidden;
	long long _style;
	float _value;

}

@property (nonatomic,readonly) long long style;              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) float value;                    //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL canCancel;                 //@synthesize canCancel=_canCancel - In the implementation block
+(CGSize)_sizeForStyle:(long long)arg1 ;
+(id)_stopImageForStyle:(long long)arg1 ;
+(void)_drawModernGradientInRect:(CGRect)arg1 ;
+(id)_nonstopImageForStyle:(long long)arg1 ;
+(BOOL)_isStyleModernShimmer:(long long)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setValue:(float)arg1 ;
-(long long)style;
-(float)value;
-(id)initWithStyle:(long long)arg1 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void)_animateValueOnDisplayLink:(id)arg1 ;
-(BOOL)canCancel;
-(CGRect)_baseFrameForSize:(CGSize)arg1 inBounds:(CGRect)arg2 ;
-(CGRect)_centerImageViewFrame:(CGRect)arg1 inBounds:(CGRect)arg2 forStyle:(long long)arg3 ;
-(void)updateFromObserver:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setInternalHidden:(BOOL)arg1 ;
-(void)setCanCancel:(BOOL)arg1 ;
-(void)updateFromObserver:(id)arg1 ;
-(CGRect)_fillFrameForSize:(CGSize)arg1 inBounds:(CGRect)arg2 ;
@end
