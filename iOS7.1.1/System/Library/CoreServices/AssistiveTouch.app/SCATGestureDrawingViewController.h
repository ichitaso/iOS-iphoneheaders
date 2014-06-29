/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:22 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATElementManagerViewController.h>
#import <assistivetouchd/SCATMenuObserver.h>
#import <assistivetouchd/SCATModernMenuGestureFreehandSheetDelegate.h>

@protocol SCATGestureDrawingViewDelegate, SCATElement;
@class SCATMenu, NSArray, NSTimer, SCATGestureDrawingElementManager, SCATGestureDrawingView;

@interface SCATGestureDrawingViewController : SCATElementManagerViewController <SCATMenuObserver, SCATModernMenuGestureFreehandSheetDelegate> {

	SCATMenu* _menu;
	BOOL _pressesOnMoveStart;
	BOOL _liftsOnMoveEnd;
	BOOL _areFingersPressed;
	BOOL _isRotating;
	BOOL _isCurving;
	<SCATGestureDrawingViewDelegate>* _delegate;
	<SCATElement>* _currentScannerElement;
	float _angle;
	float _velocity;
	float _curvature;
	NSArray* _fingerPositions;
	NSTimer* _moveTimer;
	NSTimer* _generalTimer;

}

@property (assign,nonatomic) <SCATGestureDrawingViewDelegate> * delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SCATGestureDrawingElementManager * drawingElementManager; 
@property (nonatomic,retain) <SCATElement> * currentScannerElement;                                   //@synthesize currentScannerElement=_currentScannerElement - In the implementation block
@property (nonatomic,readonly) SCATGestureDrawingView * mainView; 
@property (assign,nonatomic) BOOL pressesOnMoveStart;                                                 //@synthesize pressesOnMoveStart=_pressesOnMoveStart - In the implementation block
@property (assign,nonatomic) BOOL liftsOnMoveEnd;                                                     //@synthesize liftsOnMoveEnd=_liftsOnMoveEnd - In the implementation block
@property (assign,nonatomic) BOOL areFingersPressed;                                                  //@synthesize areFingersPressed=_areFingersPressed - In the implementation block
@property (assign,nonatomic) float angle;                                                             //@synthesize angle=_angle - In the implementation block
@property (assign,nonatomic) float velocity;                                                          //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) float curvature;                                                         //@synthesize curvature=_curvature - In the implementation block
@property (nonatomic,retain) NSArray * fingerPositions;                                               //@synthesize fingerPositions=_fingerPositions - In the implementation block
@property (nonatomic,retain) NSTimer * moveTimer;                                                     //@synthesize moveTimer=_moveTimer - In the implementation block
@property (nonatomic,retain) NSTimer * generalTimer;                                                  //@synthesize generalTimer=_generalTimer - In the implementation block
@property (assign,nonatomic) BOOL isRotating;                                                         //@synthesize isRotating=_isRotating - In the implementation block
@property (assign,nonatomic) BOOL isCurving;                                                          //@synthesize isCurving=_isCurving - In the implementation block
-(float)curvatureForFreehandSheet:(id)arg1 ;
-(void)freehandSheet:(id)arg1 didHighlightBendRight:(BOOL)arg2 ;
-(void)freehandSheet:(id)arg1 didHighlightBendLeft:(BOOL)arg2 ;
-(void)freehandSheet:(id)arg1 didHighlightStraighten:(BOOL)arg2 ;
-(void)bendRightForFreehandSheet:(id)arg1 ;
-(void)bendLeftForFreehandSheet:(id)arg1 ;
-(void)straightenForFreehandSheet:(id)arg1 ;
-(void)stopForFreehandSheet:(id)arg1 ;
-(void)orientationDidChange:(id)arg1 ;
-(id)lastElementWithOptions:(int*)arg1 ;
-(id)firstElementWithOptions:(int*)arg1 ;
-(void)freehandSheet:(id)arg1 didHighlightRotateCCW:(BOOL)arg2 ;
-(void)freehandSheet:(id)arg1 didHighlightRotateCW:(BOOL)arg2 ;
-(void)freehandSheet:(id)arg1 didHighlightRotateCCW90:(BOOL)arg2 ;
-(void)freehandSheet:(id)arg1 didHighlightRotateCW90:(BOOL)arg2 ;
-(void)rotateCounterclockwiseForFreehandSheet:(id)arg1 ;
-(void)rotateClockwiseForFreehandSheet:(id)arg1 ;
-(void)rotate90CounterclockwiseForFreehandSheet:(id)arg1 ;
-(void)rotate90ClockwiseForFreehandSheet:(id)arg1 ;
-(id)fingerPositions;
-(void)_rotateClockwise;
-(void)_rotateCounterclockwise;
-(id)drawingElementManager;
-(id)elementAfter:(id)arg1 didWrap:(BOOL*)arg2 options:(int*)arg3 ;
-(id)elementBefore:(id)arg1 didWrap:(BOOL*)arg2 options:(int*)arg3 ;
-(void)scannerWillMakeManagerActive:(id)arg1 ;
-(void)scannerWillMakeManagerInactive:(id)arg1 ;
-(void)menuWillDisappear:(id)arg1 ;
-(void)menuDidFinishTransition:(id)arg1 ;
-(void)setCurvature:(float)arg1 ;
-(float)curvature;
-(id)currentElement;
-(BOOL)isTouchOnForFreehandSheet:(id)arg1 ;
-(BOOL)isAutoPressOnForFreehandSheet:(id)arg1 ;
-(BOOL)isAutoLiftOnForFreehandSheet:(id)arg1 ;
-(float)angleForFreehandSheet:(id)arg1 ;
-(void)moveForFreehandSheet:(id)arg1 ;
-(void)rotateForFreehandSheet:(id)arg1 ;
-(void)bendForFreehandSheet:(id)arg1 ;
-(void)toggleTouchForFreehandSheet:(id)arg1 ;
-(void)autoPressToggledForFreehandSheet:(id)arg1 ;
-(void)autoLiftToggledForFreehandSheet:(id)arg1 ;
-(void)moveToolbarForFreehandSheet:(id)arg1 ;
-(void)didPopFreehandSheet:(id)arg1 ;
-(void)freehandSheet:(id)arg1 didHighlightMove:(BOOL)arg2 ;
-(void)freehandSheet:(id)arg1 didHighlightRotate:(BOOL)arg2 ;
-(void)freehandSheet:(id)arg1 didHighlightBend:(BOOL)arg2 ;
-(id)initWithElementManager:(id)arg1 startingFingerPositions:(id)arg2 menu:(id)arg3 ;
-(void)setCurrentScannerElement:(id)arg1 ;
-(void)setFingerPositions:(id)arg1 ;
-(void)setPressesOnMoveStart:(BOOL)arg1 ;
-(void)setLiftsOnMoveEnd:(BOOL)arg1 ;
-(id)mainView;
-(void)_updateMainViewToolbarFrame;
-(float)_previewDistance;
-(BOOL)isCurving;
-(void)setGeneralTimer:(id)arg1 ;
-(void)_installStopButtonForActionName:(id)arg1 ;
-(id)generalTimer;
-(void)_uninstallStopButton;
-(void)_adjustCurvatureWithDirection:(float)arg1 ;
-(id)moveTimer;
-(void)setMoveTimer:(id)arg1 ;
-(void)_cancelMoveTimerAndEndMove:(BOOL)arg1 ;
-(BOOL)liftsOnMoveEnd;
-(BOOL)areFingersPressed;
-(void)setAreFingersPressed:(BOOL)arg1 ;
-(CGPoint)_fingerCenter;
-(void)_moveStraight;
-(void)_curveOnLeft:(BOOL)arg1 withCurveRadius:(float)arg2 ;
-(BOOL)_isPerformingMove;
-(void)_endMovementAndForceLift:(BOOL)arg1 ;
-(void)_endGeneralTimer;
-(BOOL)pressesOnMoveStart;
-(void)setIsCurving:(BOOL)arg1 ;
-(void)_move;
-(void)_pushFreehandSheetOfClass:(Class)arg1 ;
-(void)_startGeneralTimerWithSelector:(SEL)arg1 actionName:(id)arg2 ;
-(void)_increaseCurvature;
-(void)_decreaseCurvature;
-(id)currentScannerElement;
-(id)_currentElementProvider;
-(void)_updateFocusContextCreationOptions:(int*)arg1 ;
-(void)increaseVelocityForFreehandSheet:(id)arg1 ;
-(void)decreaseVelocityForFreehandSheet:(id)arg1 ;
-(void)setIsRotating:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)setVelocity:(float)arg1 ;
-(BOOL)isRotating;
-(void)loadView;
-(void)viewDidLoad;
-(float)velocity;
-(void)setAngle:(float)arg1 ;
-(float)angle;
-(void)_cleanUp;
@end
