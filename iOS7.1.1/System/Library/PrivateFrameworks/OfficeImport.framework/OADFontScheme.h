/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface OADFontScheme : NSObject {

	NSMutableDictionary* mMajorFont;
	NSMutableDictionary* mMinorFont;

}
+(void)addFontEntry:(id)arg1 script:(id)arg2 typeface:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(bool)isFontSchemeRef:(id)arg1 ;
-(id)fontForFontSchemeRef:(id)arg1 ;
-(id)minorTypefaceForScript:(id)arg1 ;
-(id)majorTypefaceForScript:(id)arg1 ;
-(unsigned long long)majorFontCount;
-(id)majorFont;
-(unsigned long long)minorFontCount;
-(id)minorFont;
@end

