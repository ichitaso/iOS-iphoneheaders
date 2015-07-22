/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBStarkToAppWorkspaceTransaction.h>
#import <SpringBoard/SBUIAnimationControllerObserver.h>

@class SBAlert, SBUIAnimationController, NSString;

@interface SBStarkAlertToAppWorkspaceTransaction : SBStarkToAppWorkspaceTransaction <SBUIAnimationControllerObserver> {

	SBAlert* _alert;
	SBUIAnimationController* _animation;
	BOOL _animatedAppActivation;
	BOOL _animatingAlertSuspension;
	BOOL _deactivateAfterNextLaunch;
	BOOL _activatingLauncher;
	BOOL _fromAssistant;
	BOOL _waitingForAppActivation;

}

@property (nonatomic,readonly) SBAlert * alert;                     //@synthesize alert=_alert - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)swizzledToDisplayIfNecessary;
-(void)_setupMilestonesFrom:(id)arg1 to:(id)arg2 ;
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(id)initWithMainScreenAlertManager:(id)arg1 starkScreenController:(id)arg2 alert:(id)arg3 toApplication:(id)arg4 ;
-(void)_beginAnimation;
-(void)_endAnimation;
-(void)_deactivateAlertIfNecessary;
-(void)_alertAnimationComplete:(id)arg1 ;
-(void)mainScreenApplicationUpdateScenesTransactionCompleted:(id)arg1 ;
-(void)mainScreenApplicationSceneDidCommit:(id)arg1 ;
-(BOOL)_hasAnimation;
-(void)_alertDidDeactivate;
-(void)_handleFailure;
-(void)dealloc;
-(NSString *)debugDescription;
-(SBAlert *)alert;
-(void)_didComplete;
-(void)_begin;
@end
