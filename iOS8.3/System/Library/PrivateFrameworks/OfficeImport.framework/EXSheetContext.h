/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:22 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OCDDelayedNodeContext.h>

@class EXReadState, NSURL, NSString;

@interface EXSheetContext : NSObject <OCDDelayedNodeContext> {

	EXReadState* mSheetState;
	NSURL* mPackageLocation;
	NSString* mType;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)loadDelayedNode:(id)arg1 ;
-(id)initWithSheetLocation:(id)arg1 sheetXmlType:(id)arg2 state:(id)arg3 ;
@end

