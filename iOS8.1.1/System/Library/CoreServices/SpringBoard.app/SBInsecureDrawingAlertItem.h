/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBInsecureDrawingAlertItem : SBAlertItem {

	NSString* _processName;

}

@property (nonatomic,copy) NSString * processName;              //@synthesize processName=_processName - In the implementation block
-(void)dealloc;
-(NSString *)processName;
-(BOOL)dismissOnLock;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
-(void)setProcessName:(NSString *)arg1 ;
-(BOOL)ignoreIfAlreadyDisplaying;
@end
