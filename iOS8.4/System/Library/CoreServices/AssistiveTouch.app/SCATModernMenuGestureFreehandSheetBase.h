/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <assistivetouchd/SCATModernMenuGesturesSheetBase.h>
#import <assistivetouchd/SCATModernMenuGestureFreehandItemDelegate.h>

@protocol SCATModernMenuGestureFreehandSheetDelegate;
@class NSString;

@interface SCATModernMenuGestureFreehandSheetBase : SCATModernMenuGesturesSheetBase <SCATModernMenuGestureFreehandItemDelegate> {

	id<SCATModernMenuGestureFreehandSheetDelegate> _delegate;

}

@property (assign,nonatomic) id<SCATModernMenuGestureFreehandSheetDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isLandscape;
-(id)moveMenuItemWithPreferredNumberOfLines:(unsigned long long)arg1 ;
-(id)touchToggleMenuItemWithPreferredNumberOfLines:(unsigned long long)arg1 ;
-(id)moveToolbarMenuItem;
-(BOOL)shouldUpdateMenuItem:(id)arg1 ;
-(void)menuItem:(id)arg1 didBecomeFocused:(BOOL)arg2 ;
-(void)menuItemWasActivated:(id)arg1 ;
-(BOOL)shouldUpdateItemsOnOrientationChange;
-(BOOL)shouldKeepScannerAwake;
-(id)pathMenuItems;
-(id)elementProvider;
-(id)autoPressLiftItems;
-(id)rotateMenuItemWithPreferredNumberOfLines:(unsigned long long)arg1 ;
-(id)bendMenuItemWithPreferredNumberOfLines:(unsigned long long)arg1 ;
-(void)pushFreehandSheetOfClass:(Class)arg1 ;
-(void)didChangeOrientation;
-(unsigned long long)presentationMode;
-(BOOL)delegatesScannerControl;
-(id)_titleForLocalizableString:(id)arg1 state:(BOOL)arg2 ;
-(id)_imageNameForPrefix:(id)arg1 ;
-(Class)_menuItemClass;
-(void)setDelegate:(id<SCATModernMenuGestureFreehandSheetDelegate>)arg1 ;
-(id<SCATModernMenuGestureFreehandSheetDelegate>)delegate;
-(void)setMenuItems:(id)arg1 ;
@end
