/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDTrackerManipulator.h>

@class TSDInteractiveCanvasController, TSDRepDragTracker;

@interface TSDKeyboardMovementManipulator : NSObject <TSDTrackerManipulator> {

	TSDInteractiveCanvasController* mICC;
	TSDRepDragTracker* mTracker;

}
-(id)initWithInteractiveCanvasController:(id)arg1 ;
-(bool)allowTrackerManipulatorToTakeControl:(id)arg1 ;
-(void)operationDidEnd;
-(id)tracker;
-(bool)readyToEndOperation;
-(void)moveSelectionByDelta:(CGPoint)arg1 ;
-(double)p_movementFactorInPixelSpace:(long long)arg1 ;
-(void)dealloc;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(void)moveUp:(id)arg1 ;
-(void)moveDown:(id)arg1 ;
-(void)moveDownAndModifySelection:(id)arg1 ;
-(void)moveLeftAndModifySelection:(id)arg1 ;
-(void)moveRightAndModifySelection:(id)arg1 ;
-(void)moveUpAndModifySelection:(id)arg1 ;
-(void)moveBackward:(id)arg1 ;
-(void)moveForward:(id)arg1 ;
-(void)moveParagraphBackwardAndModifySelection:(id)arg1 ;
-(void)moveParagraphForwardAndModifySelection:(id)arg1 ;
-(void)moveToBeginningOfParagraph:(id)arg1 ;
-(void)moveToEndOfParagraph:(id)arg1 ;
-(void)moveWordLeft:(id)arg1 ;
-(void)moveWordLeftAndModifySelection:(id)arg1 ;
-(void)moveWordRight:(id)arg1 ;
-(void)moveWordRightAndModifySelection:(id)arg1 ;
@end
