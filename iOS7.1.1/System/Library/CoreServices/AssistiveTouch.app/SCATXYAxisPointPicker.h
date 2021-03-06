/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATPointPicker.h>

@class SCATFocusContext;

@interface SCATXYAxisPointPicker : SCATPointPicker {

	SCATFocusContext* _sweepFocusContext;

}

@property (nonatomic,retain) SCATFocusContext * sweepFocusContext;              //@synthesize sweepFocusContext=_sweepFocusContext - In the implementation block
-(BOOL)isRefiningPoint;
-(void)didSweepOverPoint:(CGPoint)arg1 ;
-(void)setSweepFocusContext:(id)arg1 ;
-(void)orientationDidChange:(id)arg1 ;
-(BOOL)handleInputAction:(int)arg1 withElement:(id)arg2 ;
-(BOOL)shouldKeepScannerAwake;
-(BOOL)providesElements;
-(id)initWithMenu:(id)arg1 ;
-(BOOL)allowsSelectionRefinement;
-(int)pickerType;
-(id)sweepFocusContext;
-(void)dealloc;
@end

