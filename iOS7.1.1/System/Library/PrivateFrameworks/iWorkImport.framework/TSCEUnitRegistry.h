/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCEUnitRegistry : NSObject
+(int)unitForCurrencyCode:(id)arg1 ;
+(int)unitForString:(id)arg1 ;
+(int)unitPrefixForCharacter:(unsigned short)arg1 ;
+(double)multiplierForUnitPrefix:(int)arg1 ;
+(int)unitForCurrentLocaleCurrencyCode;
+(id)currencyCodeForUnit:(int)arg1 ;
+(int)canonicalUnitForDimension:(int)arg1 ;
+(SCD_Struct_TS266)prefixedUnitForString:(id)arg1 ;
+(bool)unitIsMetric:(int)arg1 ;
+(double)convert:(double)arg1 fromUnit:(SCD_Struct_TS266)arg2 toUnit:(SCD_Struct_TS266)arg3 ;
+(int)dimensionForUnit:(int)arg1 ;
+(void)initialize;
@end
