/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PreferenceBundles/MobileStoreSettings.bundle/MobileStoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <MobileStoreSettings/PSHeaderFooterView.h>

@class StoreSettingsLinkButton, NSString;

@interface SUSettingsLinkHeaderFooterView : UIView <PSHeaderFooterView> {

	StoreSettingsLinkButton* _linkButton;
	NSString* _linkURLBagKey;

}
+(id)groupSpecifierWithFooterLinkWithTitle:(id)arg1 URLBagKey:(id)arg2 ;
+(id)linkAttributedStringWithTitle:(id)arg1 highlighted:(char)arg2 ;
-(id)initWithSpecifier:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(float)preferredHeightForWidth:(float)arg1 ;
-(void)_buttonAction:(id)arg1 ;
@end
