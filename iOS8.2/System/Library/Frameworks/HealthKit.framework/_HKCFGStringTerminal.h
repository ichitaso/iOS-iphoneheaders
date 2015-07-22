/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/_HKCFGTerminal.h>

@class NSString;

@interface _HKCFGStringTerminal : _HKCFGTerminal {

	char _caseSensitive;
	NSString* _string;

}

@property (nonatomic,copy) NSString * string;                 //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) char caseSensitive;              //@synthesize caseSensitive=_caseSensitive - In the implementation block
-(char)caseSensitive;
-(unsigned)_minimumLength;
-(char)_scanValue:(id*)arg1 withScanner:(id)arg2 ;
-(id)_label;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setCaseSensitive:(char)arg1 ;
-(id)characterSet;
@end
