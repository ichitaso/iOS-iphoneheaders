/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:08:41 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIView, NSArray;

@interface ACAssistantAlternateProviderResultView : UIView {

	UILabel* _providerNameLabel;
	UIImageView* _providerLogoImageView;
	UIView* _containerView;
	UIImageView* _chevronImageView;
	NSArray* _commands;

}

@property (nonatomic,retain) NSArray * commands;              //@synthesize commands=_commands - In the implementation block
-(id)initWithAlternateProviderResult:(id)arg1 usingPersistentStore:(id)arg2 ;
-(void)_configureUsingImage:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
@end

