/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIImage;

@interface MPAnisotropicHighlightView : UIView {

	double _filteredHighlightX;
	UIImageView* _highlightImageView;
	id _motionManagerObserver;

}

@property (nonatomic,retain) UIImage * highlightImage; 
+(id)_defaultHighlightImage;
+(CGSize)defaultHighlightSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void).cxx_destruct;
-(void)setHighlightImage:(id)arg1 ;
-(id)highlightImage;
@end
