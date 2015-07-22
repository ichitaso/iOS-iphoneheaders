/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:47:35 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/SubscribedCalendarSettings.bundle/SubscribedCalendarSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccessUI/DASettingsAccountsUIController.h>

@class NSArray;

@interface SubCalSettingsAccountsUIController : DASettingsAccountsUIController {

	char _broughtUpInitialKeyboard;
	NSArray* _plistSpecifiers;

}

@property (assign,nonatomic) char broughtUpInitialKeyboard;              //@synthesize broughtUpInitialKeyboard=_broughtUpInitialKeyboard - In the implementation block
@property (nonatomic,retain) NSArray * plistSpecifiers;                  //@synthesize plistSpecifiers=_plistSpecifiers - In the implementation block
-(void)cancelButtonTapped:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountBooleanPropertyWithSpecifier:(id)arg1 ;
-(id)localizedValidationFailureTitleString;
-(id)newDefaultAccount;
-(id)localizedConfirmSaveUnvalidatedAccountTitleString;
-(id)localizedConfirmSaveUnvalidatedAccountMessageString;
-(id)localizedAccountSetupTitleString;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(char)validateAccount;
-(char)haveEnoughValues;
-(NSArray *)plistSpecifiers;
-(void)_setHostKeyboardToDefaultOnTraits:(id)arg1 ;
-(id)_secondarySpecifiers;
-(id)_primarySpecifiers;
-(char)broughtUpInitialKeyboard;
-(void)setBroughtUpInitialKeyboard:(char)arg1 ;
-(void)_setHostKeyboardForLoneSpecifierOnTraits:(id)arg1 ;
-(char)_showingSecondarySpecifiers;
-(void)_insertSecondarySpecifiers;
-(void)_reloadHostDependentSepcifiers;
-(void)setPlistSpecifiers:(NSArray *)arg1 ;
-(id)accountSpecifiers;
-(void)account:(id)arg1 isValid:(char)arg2 validationError:(id)arg3 ;
@end
