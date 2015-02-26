/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class UIFetchContentInBackgroundAction, NSString;

@interface SBBackgroundFetchExternalRequest : NSObject {

	int _sequenceNumber;
	UIFetchContentInBackgroundAction* _action;
	NSString* _bundleID;

}

@property (nonatomic,retain) UIFetchContentInBackgroundAction * action;              //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) int sequenceNumber;                                     //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                      //@synthesize bundleID=_bundleID - In the implementation block
-(id)initForBundleID:(id)arg1 ;
-(int)sequenceNumber;
-(void)dealloc;
-(UIFetchContentInBackgroundAction *)action;
-(void)setAction:(UIFetchContentInBackgroundAction *)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setSequenceNumber:(int)arg1 ;
-(void)execute;
@end
