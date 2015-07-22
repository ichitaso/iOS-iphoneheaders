/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:05 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/SWRunWorkoutObserver.h>

@class NSString, NSDecimalNumber, SWVoicePromptController, NSMutableArray;

@interface SWRunWorkoutPreset : NSObject <SWRunWorkoutObserver> {

	NSString* _presetGoal;
	unsigned _templateId;
	NSString* _templateName;
	NSString* _workoutName;
	float _goal;
	NSDecimalNumber* _goalInDisplayUnits;
	NSString* _goalType;
	SWVoicePromptController* _promptController;
	NSMutableArray* _timeObservationTargets;
	NSMutableArray* _distanceObservationTargets;
	NSMutableArray* _calorieObservationTargets;
	NSMutableArray* _stateObservationTargets;
	NSMutableArray* _userEventObservationTargets;

}

@property (nonatomic,readonly) NSString * presetGoal;                        //@synthesize presetGoal=_presetGoal - In the implementation block
@property (nonatomic,readonly) unsigned templateId;                          //@synthesize templateId=_templateId - In the implementation block
@property (nonatomic,readonly) NSString * templateName;                      //@synthesize templateName=_templateName - In the implementation block
@property (nonatomic,readonly) NSString * workoutName;                       //@synthesize workoutName=_workoutName - In the implementation block
@property (nonatomic,readonly) float goal;                                   //@synthesize goal=_goal - In the implementation block
@property (nonatomic,readonly) NSString * goalType;                          //@synthesize goalType=_goalType - In the implementation block
@property (nonatomic,readonly) NSString * distanceDisplayUnits; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)presetForCustomGoalWithAmount:(id)arg1 units:(id)arg2 ;
+(id)presetForGoal:(id)arg1 ;
-(void)dealloc;
-(float)goal;
-(NSString *)templateName;
-(NSString *)goalType;
-(unsigned)templateId;
-(NSString *)workoutName;
-(NSString *)distanceDisplayUnits;
-(void)observeRunWorkoutControllerDataChange:(id)arg1 elapsedTime:(unsigned)arg2 pace:(float)arg3 distance:(float)arg4 calories:(float)arg5 location:(id)arg6 ;
-(void)observeRunWorkoutStateChange:(id)arg1 oldState:(id)arg2 newState:(id)arg3 ;
-(void)observeRunWorkoutUserEvent:(id)arg1 userEvent:(id)arg2 ;
-(id)initWithPresetGoal:(id)arg1 goal:(float)arg2 goalType:(id)arg3 goalInDisplayUnits:(id)arg4 templateId:(unsigned)arg5 templateName:(id)arg6 workoutName:(id)arg7 ;
-(void)_addStateObservationTarget:(id)arg1 ;
-(id)_distanceInDisplayUnits:(id)arg1 forWorkoutData:(id)arg2 ;
-(id)_distanceDisplayUnitsForWorkoutData:(id)arg1 ;
-(id)_paceInDisplayUnits:(id)arg1 forWorkoutData:(id)arg2 ;
-(id)_paceDisplayUnitsForWorkoutData:(id)arg1 ;
-(void)_fireAttaboysForWorkoutController:(id)arg1 ;
-(void)_fireOnDemandPromptForWorkoutController:(id)arg1 target:(id)arg2 ;
-(void)_addTimeObservationTarget:(id)arg1 ;
-(void)_setUpBenchmarkTargets;
-(void)_addCalorieObservationTarget:(id)arg1 ;
-(void)_addDistanceObservationTarget:(id)arg1 ;
-(void)_setUpBenchmarkTargetsForKilometerDistanceWorkout;
-(void)_stopAllPromptsOrFireOnDemandPromptForWorkoutController:(id)arg1 target:(id)arg2 ;
-(void)_addUserEventObservationTarget:(id)arg1 ;
-(void)_observeSteadilyIncreasingValueForRunWorkoutController:(id)arg1 withCurrentWorkoutValue:(id)arg2 targets:(id)arg3 ;
-(void)_observeStateChangeForWorkoutController:(id)arg1 oldState:(id)arg2 newState:(id)arg3 targets:(id)arg4 ;
-(void)_workoutController:(id)arg1 observeUserEvent:(id)arg2 targets:(id)arg3 ;
-(void)_setUpHalfwayTarget;
-(void)_setUpFinalRushTargets;
-(void)_setUpGoalCompletedTarget;
-(void)_setUpHalfwayTargetWithUnits:(id)arg1 ;
-(void)_setUpGoalCompletedTargetWithUnits:(id)arg1 ;
-(NSString *)presetGoal;
@end
