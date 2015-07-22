/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:08:56 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SCNView;

@interface SCNEventHandler : NSObject {

	id _reserved;
	SCNView* _view;

}

@property (readonly) SCNView * view; 
-(void)sceneWillChange;
-(void)sceneDidChange;
-(void)viewDidDraw;
-(void)cameraWillChange;
-(void)cameraDidChange;
-(char)wantsRedraw;
-(void)dealloc;
-(id)init;
-(SCNView *)view;
-(id)gestureRecognizers;
-(void)setView:(SCNView *)arg1 ;
-(void)viewWillDraw;
@end
