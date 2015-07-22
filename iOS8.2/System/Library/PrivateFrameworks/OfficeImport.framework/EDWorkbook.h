/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:39 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OCDDocument.h>

@class EDResources, NSMutableArray, EDProcessors, ECMappingContext, EDWarnings, EDReference, NSDate, NSString, OADTheme, ESDContainer;

@interface EDWorkbook : OCDDocument {

	EDResources* mResources;
	NSMutableArray* mOtherResources;
	EDProcessors* mProcessors;
	ECMappingContext* mMappingContext;
	EDWarnings* mWarnings;
	NSMutableArray* mSheets;
	EDReference* mVisibleRange;
	unsigned mActiveSheetIndex;
	NSDate* mDateBaseDate;
	int mDateBase;
	NSString* mFileName;
	NSString* mTemporaryDirectory;
	OADTheme* mTheme;
	NSMutableArray* mBulletBlips;
	ESDContainer* mEscherDrawingGroup;

}
-(id)fileName;
-(void)dealloc;
-(id)init;
-(id)theme;
-(id)sheetAtIndex:(unsigned)arg1 ;
-(void)removeWorksheetAtIndex:(unsigned)arg1 ;
-(unsigned)sheetCount;
-(id)sheetAtIndex:(unsigned)arg1 loadIfNeeded:(BOOL)arg2 ;
-(id)workbookName;
-(id)processors;
-(id)initWithStringOptimization:(BOOL)arg1 ;
-(void)addSheet:(id)arg1 ;
-(id)temporaryDirectory;
-(void)setTemporaryDirectory:(id)arg1 ;
-(id)warnings;
-(void)applyProcessors;
-(id)initWithFileName:(id)arg1 andStringOptimization:(BOOL)arg2 ;
-(void)setDateBase:(int)arg1 ;
-(void)setVisibleRange:(id)arg1 ;
-(void)setActiveSheetIndex:(unsigned)arg1 ;
-(id)mappingContext;
-(int)dateBase;
-(unsigned)indexOfSheet:(id)arg1 ;
-(unsigned)legacyDateBase;
-(id)visibleRange;
-(void)removeSheetAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfSheetWithName:(id)arg1 ;
-(id)activeSheet;
-(void)setActiveSheet:(id)arg1 ;
-(void)setMappingContext:(id)arg1 ;
-(void)setTheme:(id)arg1 ;
-(id)bulletBlips;
-(id)escherDrawingGroup;
-(void)setEscherDrawingGroup:(id)arg1 ;
-(unsigned)activeSheetIndex;
-(void)reduceMemoryIfPossible;
-(id)dateBaseDate;
-(void)addOtherResources:(id)arg1 ;
-(id)resources;
-(void)setResources:(id)arg1 ;
@end
