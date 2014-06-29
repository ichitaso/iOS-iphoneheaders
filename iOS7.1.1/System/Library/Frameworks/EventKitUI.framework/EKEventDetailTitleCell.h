/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@protocol EKEventDetailTitleCellDelegate;
@class UILabel, EKTextViewWithLabelTextMetrics, UIImage, UIImageView, UIButton, NSObject;

@interface EKEventDetailTitleCell : EKEventDetailCell {

	UILabel* _titleView;
	EKTextViewWithLabelTextMetrics* _locationView;
	UIImage* _locationStatusImage;
	UIImageView* _locationStatusView;
	UILabel* _dateView;
	UILabel* _timeView;
	UILabel* _recurrenceView;
	UILabel* _statusView;
	UIButton* _editButton;
	unsigned _visibleItems;
	bool _observingLocaleChanges;
	bool _hasLocationStatus;
	int _locationStatus;
	NSObject<EKEventDetailTitleCellDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) NSObject<EKEventDetailTitleCellDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_titleFont;
+(id)_skinnyImageWithColor:(id)arg1 ;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id)_locationFont;
-(id)_locationView;
-(id)_locationStatusView;
-(id)_dateView;
-(id)_timeView;
-(id)_recurrenceView;
-(id)_statusView;
-(void)setTimeString:(id)arg1 ;
-(void)setRecurrenceString:(id)arg1 ;
-(void)editButtonTapped;
-(id)_editButton;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)delegate;
-(id)_titleView;
-(void)setColor:(id)arg1 ;
-(bool)update;
-(void).cxx_destruct;
-(void)setPrimaryTextColor:(id)arg1 ;
-(void)setDateString:(id)arg1 ;
-(void)setStatusString:(id)arg1 ;
-(void)setLocation:(id)arg1 ;
@end
