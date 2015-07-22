/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:01:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>
#import <PhotoLibrary/PLTilePlaceholderView.h>

@class UIActivityIndicatorView, UILabel, UIView, NSString;

@interface PLPhotoTilePlaceholderView : UIView <PLTilePlaceholderView> {

	UIActivityIndicatorView* _loadingIndicatorView;
	UILabel* _loadingLabel;
	UIView* _loadingContainerView;
	double _lastViewPhaseChangeDate;
	char _indicatorIsVisible;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showLoadingIndicator;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)updateCloudDownloadProgress:(float)arg1 ;
-(void)fadeOutSoonIfNeededAndRemoveFromSuperview:(char)arg1 ;
-(void)showLoadingIndicatorWhenReady;
-(void)showErrorIndicator;
-(void)setToolbarVisible:(char)arg1 ;
-(void)setImageRect:(CGRect)arg1 ;
@end
