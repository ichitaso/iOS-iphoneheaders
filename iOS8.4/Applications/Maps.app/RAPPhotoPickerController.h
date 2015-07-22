/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class NSMapTable, UIImagePickerController, ALAssetsLibrary, UIViewController, UIView, RAPPhoto, NSString;

@interface RAPPhotoPickerController : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIPopoverPresentationControllerDelegate> {

	NSMapTable* _observers;
	UIImagePickerController* _imagePicker;
	ALAssetsLibrary* _assetsLibrary;
	char _picking;
	UIViewController* _presentingViewController;
	UIView* _anchoringView;
	RAPPhoto* _photo;

}

@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) UIView * anchoringView;                                   //@synthesize anchoringView=_anchoringView - In the implementation block
@property (nonatomic,readonly) RAPPhoto * photo;                                       //@synthesize photo=_photo - In the implementation block
@property (getter=isPicking,nonatomic,readonly) char picking;                          //@synthesize picking=_picking - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)shouldShowImagePickingUI;
-(void)addObserver:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(void)_invokeChangeHandlers;
-(id)initWithInitialPhoto:(id)arg1 ;
-(char)isPicking;
-(void)setAnchoringView:(UIView *)arg1 ;
-(void)startPicking;
-(void)_clearImagePicker;
-(UIView *)anchoringView;
-(void)_deletePhoto;
-(RAPPhoto *)photo;
-(void)dealloc;
-(id)init;
-(UIViewController *)presentingViewController;
-(void)removeObserver:(id)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)_cancel;
@end
