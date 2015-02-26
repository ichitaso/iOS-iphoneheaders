/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <NotificationsUI/NCContentServiceInterface.h>

@class NSDictionary;

@interface NCContentViewController : UIViewController <NCContentServiceInterface> {

	NSDictionary* _context;

}

@property (nonatomic,copy) NSDictionary * context;              //@synthesize context=_context - In the implementation block
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)dealloc;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)_setContext:(id)arg1 ;
-(void)_getPreferredContentSizeWithCompletion:(/*^block*/id)arg1 ;
@end
