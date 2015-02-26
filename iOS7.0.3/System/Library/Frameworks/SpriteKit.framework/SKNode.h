/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <UIKit/UIResponder.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSArray, SKScene, SKPhysicsBody;

@interface SKNode : UIResponder <NSCopying, NSCoding> {

	BOOL _spritesNeedsRemove;
	NSMutableArray* _actionsToRemove;
	NSMutableArray* _spritesToRemove;
	void* csprite;
	SKNode* _parent;
	NSMutableArray* _children;
	NSMutableArray* _actions;
	NSMutableDictionary* _keyedActions;
	NSMutableDictionary* _keyedSubSprites;
	NSMutableDictionary* _info;
	BOOL _needsDelete;
	NSMutableArray* _deleteList;
	NSString* _name;
	NSMutableDictionary* _userData;

}

@property (assign,nonatomic) BOOL _showBounds; 
@property (nonatomic,readonly) CGRect _untransformedBounds; 
@property (assign,nonatomic) CGPoint _anchorPoint; 
@property (nonatomic,readonly) CGSize _size; 
@property (nonatomic,retain) NSMutableDictionary * _info; 
@property (nonatomic,readonly) CGRect frame; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) float zPosition; 
@property (assign,nonatomic) float zRotation; 
@property (assign,nonatomic) float xScale; 
@property (assign,nonatomic) float yScale; 
@property (assign,nonatomic) float speed; 
@property (assign,nonatomic) float alpha; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (getter=isUserInteractionEnabled) BOOL userInteractionEnabled; 
@property (nonatomic,readonly) SKNode * parent; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) SKScene * scene; 
@property (nonatomic,retain) SKPhysicsBody * physicsBody; 
@property (nonatomic,retain) NSMutableDictionary * userData;                          //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) float xRotation; 
@property (assign,nonatomic) float yRotation; 
+(id)node;
-(void)removeAction:(id)arg1 ;
-(BOOL)isPaused;
-(void)removeFromParent;
-(SKCSprite*)csprite;
-(id)childNodeWithName:(id)arg1 ;
-(void)runAction:(id)arg1 ;
-(float)zRotation;
-(void)setZRotation:(float)arg1 ;
-(CGPoint)convertPointFromParent:(CGPoint)arg1 ;
-(CGPoint)convertPointToParent:(CGPoint)arg1 ;
-(id)scene;
-(CGPoint)convertPoint:(CGPoint)arg1 fromNode:(id)arg2 ;
-(void)removeActionForKey:(id)arg1 ;
-(void)runAction:(id)arg1 withKey:(id)arg2 ;
-(id)nodeAtPoint:(CGPoint)arg1 recursive:(BOOL)arg2 ;
-(void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2 ;
-(CGRect)calculateAccumulatedFrame;
-(void)set_info:(id)arg1 ;
-(void)setPhysicsBody:(id)arg1 ;
-(void)addChild:(id)arg1 withKey:(id)arg2 ;
-(id)physicsBody;
-(BOOL)inParentHierarchy:(id)arg1 ;
-(void)enumerateChildNodesWithName:(id)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)_flippedChangedFrom:(BOOL)arg1 to:(BOOL)arg2 ;
-(void)_enumerateChildNodesWithName:(id)arg1 usingBlock:(/*^block*/ id)arg2 stopPointer:(BOOL*)arg3 ;
-(id)nodeAtPoint:(CGPoint)arg1 ;
-(id)nodesAtPoint:(CGPoint)arg1 ;
-(BOOL)intersectsNode:(id)arg1 useAlphaTest:(BOOL)arg2 ;
-(void)removeChildAtIndex:(int)arg1 ;
-(void)removeChildrenInArray:(id)arg1 ;
-(void)removeAllChildren;
-(void)_performCleanup;
-(void)runAction:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)containingView;
-(BOOL)hasActions;
-(float)xRotation;
-(void)setXRotation:(float)arg1 ;
-(float)yRotation;
-(void)setYRotation:(float)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 withRadius:(float)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toNode:(id)arg2 ;
-(BOOL)hasUniformAlphaAndIsVisible;
-(CGPoint)_anchorPoint;
-(id)childrenInRect:(CGRect)arg1 ;
-(void)set_showBounds:(BOOL)arg1 ;
-(BOOL)_showBounds;
-(CGRect)_untransformedBounds;
-(void)set_anchorPoint:(CGPoint)arg1 ;
-(id)allIntersectionsWithNode:(id)arg1 useAlphaTest:(BOOL)arg2 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isHidden;
-(float)alpha;
-(void)setHidden:(BOOL)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(id)init;
-(id)copy;
-(CGRect)frame;
-(id)description;
-(void)setSpeed:(float)arg1 ;
-(id)_parent;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setName:(id)arg1 ;
-(CGPoint)position;
-(BOOL)isUserInteractionEnabled;
-(float)speed;
-(id)name;
-(void)setScale:(float)arg1 ;
-(CGSize)_size;
-(id)_info;
-(void)removeAllActions;
-(void)removeChild:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setZPosition:(float)arg1 ;
-(id)userData;
-(void)setUserData:(id)arg1 ;
-(void)_update:(double)arg1 ;
-(BOOL)hasChildren;
-(void)addChild:(id)arg1 ;
-(void)insertChild:(id)arg1 atIndex:(int)arg2 ;
-(void)setXScale:(float)arg1 ;
-(float)xScale;
-(float)yScale;
-(void)setYScale:(float)arg1 ;
-(BOOL)needsUpdate;
-(void).cxx_destruct;
-(id)children;
-(BOOL)intersectsNode:(id)arg1 ;
-(float)zPosition;
-(void)setParent:(id)arg1 ;
-(id)parent;
@end
