/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKAnnotationTrackingCameraController.h>

@interface VKMapAnnotationTrackingCameraController : VKAnnotationTrackingCameraController
-(void)_goToAnnotationAnimated:(BOOL)arg1 duration:(double)arg2 isInitial:(BOOL)arg3 ;
-(void)_rotateToHeadingAnimated:(BOOL)arg1 duration:(double)arg2 ;
-(double)_minTrackingCameraDistance;
-(double)_zoomLevelForCameraPosition:(VKPoint)arg1 ;
@end
