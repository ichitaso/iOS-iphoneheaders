/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:24:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIImageView.h>

@class UIColor;

@interface MPUExtrasBorderedImageView : UIImageView {

	char _shouldDeferSettingTransform;
	char _shouldUseTransformWhenReplicatingState;
	char _shouldSkipImageWhenReplicatingState;
	CGAffineTransform _deferredTransform;

}

@property (nonatomic,copy) UIColor * borderColor; 
@property (assign,nonatomic) float borderWidth; 
@property (assign,nonatomic) CGAffineTransform deferredTransform;                      //@synthesize deferredTransform=_deferredTransform - In the implementation block
@property (assign,nonatomic) char shouldDeferSettingTransform;                         //@synthesize shouldDeferSettingTransform=_shouldDeferSettingTransform - In the implementation block
@property (assign,nonatomic) char shouldUseTransformWhenReplicatingState;              //@synthesize shouldUseTransformWhenReplicatingState=_shouldUseTransformWhenReplicatingState - In the implementation block
@property (assign,nonatomic) char shouldSkipImageWhenReplicatingState;                 //@synthesize shouldSkipImageWhenReplicatingState=_shouldSkipImageWhenReplicatingState - In the implementation block
-(void)setTransform:(CGAffineTransform)arg1 ;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setBorderWidth:(float)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(float)borderWidth;
-(UIColor *)borderColor;
-(void)replicateStateFromImageView:(id)arg1 ;
-(char)shouldDeferSettingTransform;
-(void)setDeferredTransform:(CGAffineTransform)arg1 ;
-(char)shouldSkipImageWhenReplicatingState;
-(char)shouldUseTransformWhenReplicatingState;
-(CGAffineTransform)deferredTransform;
-(void)setShouldDeferSettingTransform:(char)arg1 ;
-(void)setShouldUseTransformWhenReplicatingState:(char)arg1 ;
-(void)setShouldSkipImageWhenReplicatingState:(char)arg1 ;
@end
