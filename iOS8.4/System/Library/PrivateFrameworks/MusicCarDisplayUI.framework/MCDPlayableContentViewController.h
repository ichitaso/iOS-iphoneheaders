/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UINavigationController, MCDBrowsableContentModel, NSString;

@interface MCDPlayableContentViewController : UIViewController {

	UINavigationController* _navigationController;
	MCDBrowsableContentModel* _model;
	BOOL _hasBrowsableContent;
	NSString* _bundleID;

}

@property (nonatomic,copy,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
-(id)preferredFocusedItem;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSString *)bundleID;
-(id)initWithBundleID:(id)arg1 ;
-(void)_updateStackForPlaying:(BOOL)arg1 launching:(BOOL)arg2 ;
-(void)_embedAppropriateViewController;
-(void)refreshNavigationStackForLaunch:(BOOL)arg1 ;
@end
