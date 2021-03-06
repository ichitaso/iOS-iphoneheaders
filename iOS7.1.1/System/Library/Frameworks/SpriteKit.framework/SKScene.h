/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKEffectNode.h>

@class NSMutableDictionary, SKPhysicsWorld, PKPhysicsWorld, UIColor, SKView;

@interface SKScene : SKEffectNode {

	double _lastUpdate;
	double _pausedTime;
	CGRect _visibleRect;
	long long _scaleMode;
	NSMutableDictionary* _touchMap;
	CGRect _bounds;
	bool _isSetup;
	bool _usesExplicitUpdate;
	bool _usesExplicitRender;
	id _view;
	bool __needsUpdate;
	bool __needsRender;
	SKPhysicsWorld* _physicsWorld;
	PKPhysicsWorld* __pkPhysicsWorld;

}

@property (assign) bool _usesExplicitUpdate; 
@property (assign) bool _usesExplicitRender; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) long long scaleMode;                           //@synthesize scaleMode=_scaleMode - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (assign,nonatomic) CGPoint anchorPoint; 
@property (nonatomic,readonly) SKPhysicsWorld * physicsWorld;               //@synthesize physicsWorld=_physicsWorld - In the implementation block
@property (nonatomic,readonly) SKView * view; 
@property (assign) bool _needsUpdate;                                       //@synthesize _needsUpdate=__needsUpdate - In the implementation block
@property (assign) bool _needsRender;                                       //@synthesize _needsRender=__needsRender - In the implementation block
@property (assign,nonatomic) CGRect visibleRect;                            //@synthesize visibleRect=_visibleRect - In the implementation block
@property (assign,nonatomic) CGSize visibleRectSize; 
@property (assign,nonatomic) CGPoint visibleRectCenter; 
@property (nonatomic,retain) PKPhysicsWorld * _pkPhysicsWorld;              //@synthesize _pkPhysicsWorld=__pkPhysicsWorld - In the implementation block
+(id)sceneWithContentsOfFile:(id)arg1 ;
+(id)sceneWithSize:(CGSize)arg1 ;
+(id)sceneWithContentsOfFile:(id)arg1 size:(CGSize)arg2 ;
-(void)set_usesExplicitRender:(bool)arg1 ;
-(void)set_usesExplicitUpdate:(bool)arg1 ;
-(bool)_usesExplicitUpdate;
-(bool)_usesExplicitRender;
-(void)didContinueContact:(id)arg1 ;
-(void)_setNeedsUpdate;
-(void)_setNeedsRender;
-(long long)scaleMode;
-(void)setScaleMode:(long long)arg1 ;
-(id)physicsWorld;
-(void)set_pkPhysicsWorld:(id)arg1 ;
-(void)setVisibleRect:(CGRect)arg1 ;
-(void)didChangeSize:(CGSize)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(void)didEvaluateActions;
-(void)didSimulatePhysics;
-(double)zRotation;
-(void)setZRotation:(double)arg1 ;
-(CGPoint)convertPointFromView:(CGPoint)arg1 ;
-(CGPoint)convertPointToView:(CGPoint)arg1 ;
-(void)setVisibleRectSize:(CGSize)arg1 ;
-(CGSize)visibleRectSize;
-(void)setVisibleRectCenter:(CGPoint)arg1 ;
-(CGPoint)visibleRectCenter;
-(void)_didMoveToView:(id)arg1 ;
-(void)willMoveFromView:(id)arg1 ;
-(void)set_needsUpdate:(bool)arg1 ;
-(bool)_needsRender;
-(void)set_needsRender:(bool)arg1 ;
-(id)_pkPhysicsWorld;
-(CGSize)size;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)view;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(id)initWithSize:(CGSize)arg1 ;
-(CGPoint)anchorPoint;
-(void)setScale:(double)arg1 ;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(CGRect)visibleRect;
-(void)update:(double)arg1 ;
-(void)setPaused:(bool)arg1 ;
-(id).cxx_construct;
-(void)setZPosition:(double)arg1 ;
-(void).cxx_destruct;
-(void)_update:(double)arg1 ;
-(bool)_needsUpdate;
-(void)setXScale:(double)arg1 ;
-(double)xScale;
-(double)yScale;
-(void)setYScale:(double)arg1 ;
-(double)zPosition;
@end

