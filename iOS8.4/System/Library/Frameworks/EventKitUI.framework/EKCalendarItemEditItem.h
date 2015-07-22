/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewControllerDelegate.h>

@protocol EKEditItemViewControllerProtocol, EKCalendarItemEditItemDelegate, EKStyleProvider;
@class EKEventStore, UIViewController, EKCalendarItem, UIResponder, NSString;

@interface EKCalendarItemEditItem : NSObject <EKEditItemViewControllerDelegate> {

	EKEventStore* _store;
	UIViewController*<EKEditItemViewControllerProtocol> _viewController;
	EKCalendarItem* _calendarItem;
	id<EKCalendarItemEditItemDelegate> _delegate;
	id<EKStyleProvider> _styleProvider;
	UIResponder* _selectedResponder;

}

@property (assign,nonatomic,__weak) id<EKCalendarItemEditItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<EKStyleProvider> styleProvider;                               //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) UIResponder * selectedResponder;                                 //@synthesize selectedResponder=_selectedResponder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)calendarItem;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfSubitems;
-(id<EKStyleProvider>)styleProvider;
-(void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(void)setSelectedResponder:(UIResponder *)arg1 ;
-(void)notifyDidStartEditing;
-(void)notifyDidEndEditing;
-(void)notifyTextChanged;
-(void)notifyRequiresHeightChange;
-(BOOL)isInline;
-(BOOL)shouldPinKeyboard;
-(void)notifySubitemDidCommit:(unsigned long long)arg1 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(void)setCalendarItem:(id)arg1 store:(id)arg2 ;
-(BOOL)editItemViewControllerCommit:(id)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(BOOL)usesDetailViewControllerForSubitem:(unsigned long long)arg1 ;
-(id)injectableViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(void)_showViewController:(id)arg1 editor:(id)arg2 animated:(BOOL)arg3 ;
-(void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(void)editItemViewControllerWantsKeyboardPinned:(BOOL)arg1 ;
-(BOOL)configureForCalendarConstraints:(id)arg1 ;
-(BOOL)requiresReconfigurationOnCommit;
-(BOOL)forceTableReloadOnCommit;
-(BOOL)forceRefreshStartAndEndDatesOnCommit;
-(BOOL)forceRefreshInviteesItemOnCommit;
-(BOOL)forceRefreshLocationItemOnCommit;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(double)footerHeightForWidth:(double)arg1 ;
-(id)titleForHeader;
-(BOOL)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2 ;
-(void)editor:(id)arg1 requestsInjectableViewControllerToBeShownForSubitem:(unsigned long long)arg2 ;
-(void)editor:(id)arg1 didDeselectSubitem:(unsigned long long)arg2 ;
-(BOOL)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned long long)arg2 ;
-(void)editorDidScroll:(id)arg1 ;
-(void)editor:(id)arg1 didStartEditingItem:(id)arg2 ;
-(void)endInlineEditing;
-(id)viewForActionSheet;
-(void)setStyleProvider:(id<EKStyleProvider>)arg1 ;
-(UIResponder *)selectedResponder;
-(void)setDelegate:(id<EKCalendarItemEditItemDelegate>)arg1 ;
-(id<EKCalendarItemEditItemDelegate>)delegate;
-(void)applicationDidResume;
-(void)reset;
-(id)footerTitle;
-(id)footerView;
@end
