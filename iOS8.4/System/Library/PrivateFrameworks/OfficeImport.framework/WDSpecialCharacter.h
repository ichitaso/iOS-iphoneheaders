/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:20 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties;

@interface WDSpecialCharacter : WDRun {

	WDCharacterProperties* mProperties;
	int mType;

}
-(void)clearProperties;
-(void)dealloc;
-(id)properties;
-(int)runType;
-(id)initWithParagraph:(id)arg1 ;
-(void)setCharacterType:(int)arg1 ;
-(int)characterType;
@end
