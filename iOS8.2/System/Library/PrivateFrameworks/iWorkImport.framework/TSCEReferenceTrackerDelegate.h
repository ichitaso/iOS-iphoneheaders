/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSCEReferenceTrackerDelegate
@optional
-(void)updateTrackedHeaders:(CFUUIDRef)arg1;

@required
-(void)trackedReferenceWasDeleted:(id)arg1 fromOwnerID:(CFUUIDRef)arg2;
-(void)referencedCellWasModified:(id)arg1;
-(char)shouldRewriteOnSort;
-(char)shouldRewriteOnRangeMove;
-(char)shouldRewriteOnTectonicShift;
-(char)shouldRewriteOnCellMerge;
-(char)shouldRewriteOnTranspose;
-(id)cellRangeWasInserted:(SCD_Struct_TS275*)arg1;
-(id)commandForUpdatingWithSpec:(id)arg1 formulas:(id)arg2;

@end
