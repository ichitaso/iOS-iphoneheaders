/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/SetupChoiceController.h>

@class SetupChoice;

@interface BuddyDiagnosticsController : SetupChoiceController {

	SetupChoice* _enableChoice;
	SetupChoice* _disableChoice;

}

@property (nonatomic,retain) SetupChoice * enableChoice;               //@synthesize enableChoice=_enableChoice - In the implementation block
@property (nonatomic,retain) SetupChoice * disableChoice;              //@synthesize disableChoice=_disableChoice - In the implementation block
+(BOOL)controllerNeedsToRun;
+(void)skip;
+(void)setSubmissionEnabled:(BOOL)arg1 ;
+(void)initialize;
-(void)choice:(id)arg1 resultWasValid:(BOOL)arg2 ;
-(BOOL)wantsNextButton;
-(id)footerDetailText;
-(id)footerIconName;
-(id)footerIconTintColor;
-(id)footerTitleText;
-(id)learnMoreButtonText;
-(void)learnMoreButtonTapped:(id)arg1 ;
-(void)setEnableChoice:(id)arg1 ;
-(void)setDisableChoice:(id)arg1 ;
-(id)enableChoice;
-(id)disableChoice;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)titleText;
@end
