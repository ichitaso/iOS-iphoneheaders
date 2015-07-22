/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ODIDrawable : NSObject
+(id)presentationWithName:(id)arg1 point:(id)arg2 ;
+(id)styleForPresentation:(id)arg1 point:(id)arg2 state:(id)arg3 ;
+(void)mapShapeProperties:(id)arg1 shape:(id)arg2 state:(id)arg3 ;
+(void)mapShapeProperties:(id)arg1 shapeStyle:(id)arg2 shape:(id)arg3 state:(id)arg4 ;
+(id)styleForLabelName:(id)arg1 styleCount:(int)arg2 styleIndex:(int)arg3 state:(id)arg4 ;
+(void)addArrowHeadToShapeProperties:(id)arg1 ;
+(id)shapeGeometryWithShapeType:(int)arg1 adjustValues:(const int*)arg2 ;
+(void)mapStyleForLabelName:(id)arg1 shape:(id)arg2 state:(id)arg3 ;
+(id)shapeGeometryForEllipse;
+(void)mapStyleAndTextFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3 ;
+(id)shapeGeometryForBezierPath:(id)arg1 gSpace:(CGRect)arg2 ;
+(void)map1dArrowStyleFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3 ;
+(void)map1dArrowStyleToShape:(id)arg1 state:(id)arg2 ;
+(id)shapeGeometryForDoubleArrowWithControlPoint:(CGPoint)arg1 ;
+(CGSize)sizeOfDiagram:(id)arg1 ;
+(id)shapeGeometryForRoundedRectangleWithRadius:(float)arg1 ;
+(id)addShapeWithBounds:(CGRect)arg1 rotation:(float)arg2 geometry:(id)arg3 state:(id)arg4 ;
+(void)mapStyleFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3 ;
+(id)shapeGeometryForRightArrowWithControlPoint:(CGPoint)arg1 ;
+(void)mapStyleForPresentationName:(id)arg1 point:(id)arg2 shape:(id)arg3 state:(id)arg4 ;
+(id)shapeGeometryForRectangle;
+(void)mapStyleForLabelName:(id)arg1 point:(id)arg2 shape:(id)arg3 state:(id)arg4 ;
@end
