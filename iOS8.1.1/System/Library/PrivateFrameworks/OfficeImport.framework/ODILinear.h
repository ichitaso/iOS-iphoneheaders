/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ODIState;

@interface ODILinear : NSObject {

	BOOL mIsHorizontal;
	BOOL mWithConnectors;
	BOOL mStretch;
	float mPointHeight;
	float mConnectorWidth;
	float mPadding;
	BOOL mIsTextCenteredHorizontally;
	BOOL mIsTextCenteredVertically;
	unsigned mMaxPointCount;
	ODIState* mState;

}
+(BOOL)mapIdentifier:(id)arg1 state:(id)arg2 ;
+(void)mapUnknownWithState:(id)arg1 ;
-(void)setPadding:(float)arg1 ;
-(void)setIsHorizontal:(BOOL)arg1 ;
-(id)initWithState:(id)arg1 ;
-(void)setWithConnectors:(BOOL)arg1 ;
-(void)setPointHeight:(float)arg1 ;
-(void)setStretch:(BOOL)arg1 ;
-(void)setConnectorWidth:(float)arg1 ;
-(void)setIsTextCentered:(BOOL)arg1 ;
-(void)setMaxPointCount:(unsigned)arg1 ;
-(void)setIsTextCenteredHorizontally:(BOOL)arg1 ;
-(void)setIsTextCenteredVertically:(BOOL)arg1 ;
-(void)setLogicalBounds;
-(void)mapPoint:(id)arg1 bounds:(CGRect)arg2 ;
-(void)mapTransition:(id)arg1 pointBounds:(CGRect)arg2 ;
-(void)nextPointBounds:(CGRect*)arg1 ;
-(void)mapStyleFromPoint:(id)arg1 shape:(id)arg2 ;
-(void)mapStyleFromTransition:(id)arg1 shape:(id)arg2 ;
-(void)map;
@end
