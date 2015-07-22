/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <RadioUI/RUTrackActioning.h>

@protocol RUTrackActionsDelegate;
@class NSString, UIImage, _RUTrackActionsHeaderView, UITableView;

@interface RUTrackActionsView : UIView <UITableViewDataSource, UITableViewDelegate, RUTrackActioning> {

	_RUTrackActionsHeaderView* _headerView;
	UITableView* _tableView;
	BOOL _presentedInPopover;
	long long _enabledActions;
	long long _onActions;
	id<RUTrackActionsDelegate> _trackActionsDelegate;

}

@property (assign,getter=isPresentedInPopover,nonatomic) BOOL presentedInPopover;                 //@synthesize presentedInPopover=_presentedInPopover - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * artistText; 
@property (nonatomic,retain) UIImage * artworkImage; 
@property (nonatomic,readonly) long long cancelIndex; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (assign,nonatomic,__weak) id<RUTrackActionsDelegate> trackActionsDelegate;              //@synthesize trackActionsDelegate=_trackActionsDelegate - In the implementation block
@property (assign,nonatomic) long long enabledActions;                                            //@synthesize enabledActions=_enabledActions - In the implementation block
@property (assign,nonatomic) long long onActions;                                                 //@synthesize onActions=_onActions - In the implementation block
@property (nonatomic,copy) NSString * songText; 
+(CGSize)artworkSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)layoutSubviews;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)contentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(UIImage *)artworkImage;
-(id)_titleForAction:(long long)arg1 ;
-(id)_accessoryImageForAction:(long long)arg1 highlighted:(BOOL)arg2 ;
-(UIOffset)_accessoryImageOffsetForAction:(long long)arg1 ;
-(long long)actionForButtonIndex:(long long)arg1 ;
-(void)_didChangeContentSize;
-(void)_updateHeaderViewHeight;
-(NSString *)artistText;
-(void)setArtistText:(NSString *)arg1 ;
-(void)setSongText:(NSString *)arg1 ;
-(NSString *)songText;
-(id<RUTrackActionsDelegate>)trackActionsDelegate;
-(long long)cancelIndex;
-(void)setTrackActionsDelegate:(id<RUTrackActionsDelegate>)arg1 ;
-(long long)enabledActions;
-(void)setEnabledActions:(long long)arg1 ;
-(long long)onActions;
-(void)setOnActions:(long long)arg1 ;
-(void)setPresentedInPopover:(BOOL)arg1 ;
-(BOOL)isPresentedInPopover;
@end
