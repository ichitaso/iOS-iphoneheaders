/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <RadioUI/RUTableViewCell.h>

@class SKUICircleProgressIndicator, UIImageView, UILabel, MPUEmphasizedText;

@interface RUSearchStationTableViewCell : RUTableViewCell {

	SKUICircleProgressIndicator* _activityIndicator;
	UIImageView* _imageView;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;
	BOOL _showActivityIndicator;
	MPUEmphasizedText* _stationDescriptionEmphasizedText;
	MPUEmphasizedText* _stationNameEmphasizedText;

}

@property (nonatomic,copy) MPUEmphasizedText * stationDescriptionEmphasizedText;              //@synthesize stationDescriptionEmphasizedText=_stationDescriptionEmphasizedText - In the implementation block
@property (nonatomic,copy) MPUEmphasizedText * stationNameEmphasizedText;                     //@synthesize stationNameEmphasizedText=_stationNameEmphasizedText - In the implementation block
@property (assign,nonatomic) BOOL showActivityIndicator;                                      //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
@property (assign,nonatomic) BOOL showsArtwork; 
+(id)_titleLabelFont;
+(double)defaultHeightForTraitCollection:(id)arg1 ;
+(id)_subtitleLabelFontForTraitCollection:(id)arg1 withEmphasis:(BOOL)arg2 ;
+(id)_regularSubtitleLabelAttributesForTraitCollection:(id)arg1 ;
+(id)_emphasizedSubtitleLabelAttributesForTraitCollection:(id)arg1 ;
+(id)_regularTitleLabelAttributesForTraitCollection:(id)arg1 ;
+(id)_emphasizedTitleLabelAttributesForTraitCollection:(id)arg1 ;
+(id)_emphasizedTextColor;
+(id)_textAttributesWithFont:(id)arg1 textColor:(id)arg2 ;
+(id)_regularTextColor;
+(CGSize)artworkSize;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)imageView;
-(void)setShowActivityIndicator:(BOOL)arg1 ;
-(BOOL)showsArtwork;
-(void)setShowsArtwork:(BOOL)arg1 ;
-(void)setStationDescriptionEmphasizedText:(MPUEmphasizedText *)arg1 ;
-(void)setStationNameEmphasizedText:(MPUEmphasizedText *)arg1 ;
-(id)stationImage;
-(MPUEmphasizedText *)stationDescriptionEmphasizedText;
-(MPUEmphasizedText *)stationNameEmphasizedText;
-(BOOL)showActivityIndicator;
@end
