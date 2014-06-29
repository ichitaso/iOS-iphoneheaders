/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GAXBackboardServer/GAXBackboardServer-Structs.h>
#import <GAXBackboardServer/GAXAppManagerDelegate.h>
#import <GAXBackboardServer/AXUIClientDelegate.h>
#import <GAXBackboardServer/GAXProfileManagerDelegate.h>
#import <GAXBackboardServer/GAXBackboardServerDelegate.h>
#import <GAXBackboardServer/GAXSpringboardClientDelegate.h>

@class AXAccessQueue, GAXSpringboardClient, AXUIClient, GAXBackboardServer, GAXAppManager, GAXProfileManager, AXTimer, NSMutableArray, NSString, NSMutableSet, NSArray, GAXSettings;

@interface GAXBackboard : NSObject <GAXAppManagerDelegate, AXUIClientDelegate, GAXProfileManagerDelegate, GAXBackboardServerDelegate, GAXSpringboardClientDelegate> {

	bool _locked;
	bool _shouldStartSessionUponFrontmostAppChanged;
	bool _wasEverActiveInCurrentFrontmostApp;
	bool _sentCancelEventForSnarfedTouch;
	bool _verifyingIntegrity;
	bool _launchingCrashedApp;
	bool _restartingAndWasActiveBeforeRestart;
	bool _shouldBlockAllEvents;
	bool _passcodeViewVisible;
	int _desiredModeAfterSuccessfulPasscodeEntry;
	unsigned _passcodeWindowContextID;
	unsigned _tripleClickSheetWindowContextID;
	unsigned _voiceOverItemChooserWindowContextID;
	unsigned _assistiveTouchPort;
	AXAccessQueue* _backboardAccessQueue;
	GAXSpringboardClient* _springboardClient;
	AXUIClient* _userInterfaceClient;
	GAXBackboardServer* _backboardServer;
	GAXAppManager* _appManager;
	GAXProfileManager* _profileManager;
	unsigned long long _passcodeEntryFailedCount;
	double _lastLockoutStartedTimeInterval;
	AXTimer* _substantialTransitionTimer;
	NSMutableArray* _modeHistory;
	NSString* _eventTapIdentifier;
	NSMutableSet* _allowAllTouchOverrideReasons;
	NSMutableSet* _ignoreAllTouchOverrideReasons;
	NSArray* _ignoredTouchRegions;
	double _lastAlertDisplayedTimeInterval;
	double _lastHomeButtonPressedTimeInterval;
	long long _activeInterfaceOrientation;

}

@property (getter=isActive,nonatomic,readonly) bool active; 
@property (getter=isInWorkspace,nonatomic,readonly) bool inWorkspace; 
@property (nonatomic,readonly) bool allowsMotion; 
@property (nonatomic,readonly) bool allowsTripleClickSheet; 
@property (nonatomic,retain) GAXBackboardServer * backboardServer;                                                               //@synthesize backboardServer=_backboardServer - In the implementation block
@property (nonatomic,retain) GAXSpringboardClient * springboardClient;                                                           //@synthesize springboardClient=_springboardClient - In the implementation block
@property (nonatomic,retain) AXUIClient * userInterfaceClient;                                                                   //@synthesize userInterfaceClient=_userInterfaceClient - In the implementation block
@property (nonatomic,retain) GAXAppManager * appManager;                                                                         //@synthesize appManager=_appManager - In the implementation block
@property (nonatomic,retain) GAXProfileManager * profileManager;                                                                 //@synthesize profileManager=_profileManager - In the implementation block
@property (assign,getter=isLocked,nonatomic) bool locked;                                                                        //@synthesize locked=_locked - In the implementation block
@property (assign,nonatomic) bool shouldStartSessionUponFrontmostAppChanged;                                                     //@synthesize shouldStartSessionUponFrontmostAppChanged=_shouldStartSessionUponFrontmostAppChanged - In the implementation block
@property (assign,nonatomic) int desiredModeAfterSuccessfulPasscodeEntry;                                                        //@synthesize desiredModeAfterSuccessfulPasscodeEntry=_desiredModeAfterSuccessfulPasscodeEntry - In the implementation block
@property (assign,nonatomic) unsigned long long passcodeEntryFailedCount;                                                        //@synthesize passcodeEntryFailedCount=_passcodeEntryFailedCount - In the implementation block
@property (assign,nonatomic) double lastLockoutStartedTimeInterval;                                                              //@synthesize lastLockoutStartedTimeInterval=_lastLockoutStartedTimeInterval - In the implementation block
@property (assign,nonatomic) bool wasEverActiveInCurrentFrontmostApp;                                                            //@synthesize wasEverActiveInCurrentFrontmostApp=_wasEverActiveInCurrentFrontmostApp - In the implementation block
@property (nonatomic,retain) AXTimer * substantialTransitionTimer;                                                               //@synthesize substantialTransitionTimer=_substantialTransitionTimer - In the implementation block
@property (assign,nonatomic) int mode; 
@property (nonatomic,retain) NSMutableArray * modeHistory;                                                                       //@synthesize modeHistory=_modeHistory - In the implementation block
@property (assign,getter=isVerifyingIntegrity,nonatomic) bool verifyingIntegrity;                                                //@synthesize verifyingIntegrity=_verifyingIntegrity - In the implementation block
@property (assign,getter=isLaunchingCrashedApp,nonatomic) bool launchingCrashedApp;                                              //@synthesize launchingCrashedApp=_launchingCrashedApp - In the implementation block
@property (assign,getter=isRestartingAndWasActiveBeforeRestart,nonatomic) bool restartingAndWasActiveBeforeRestart;              //@synthesize restartingAndWasActiveBeforeRestart=_restartingAndWasActiveBeforeRestart - In the implementation block
@property (nonatomic,copy) NSString * eventTapIdentifier;                                                                        //@synthesize eventTapIdentifier=_eventTapIdentifier - In the implementation block
@property (assign,nonatomic) bool shouldBlockAllEvents;                                                                          //@synthesize shouldBlockAllEvents=_shouldBlockAllEvents - In the implementation block
@property (nonatomic,retain) NSMutableSet * allowAllTouchOverrideReasons;                                                        //@synthesize allowAllTouchOverrideReasons=_allowAllTouchOverrideReasons - In the implementation block
@property (nonatomic,retain) NSMutableSet * ignoreAllTouchOverrideReasons;                                                       //@synthesize ignoreAllTouchOverrideReasons=_ignoreAllTouchOverrideReasons - In the implementation block
@property (assign,getter=isPasscodeViewVisible,nonatomic) bool passcodeViewVisible;                                              //@synthesize passcodeViewVisible=_passcodeViewVisible - In the implementation block
@property (assign,nonatomic) unsigned passcodeWindowContextID;                                                                   //@synthesize passcodeWindowContextID=_passcodeWindowContextID - In the implementation block
@property (assign,nonatomic) unsigned tripleClickSheetWindowContextID;                                                           //@synthesize tripleClickSheetWindowContextID=_tripleClickSheetWindowContextID - In the implementation block
@property (assign,nonatomic) unsigned voiceOverItemChooserWindowContextID;                                                       //@synthesize voiceOverItemChooserWindowContextID=_voiceOverItemChooserWindowContextID - In the implementation block
@property (nonatomic,retain) NSArray * ignoredTouchRegions;                                                                      //@synthesize ignoredTouchRegions=_ignoredTouchRegions - In the implementation block
@property (assign,nonatomic) unsigned assistiveTouchPort;                                                                        //@synthesize assistiveTouchPort=_assistiveTouchPort - In the implementation block
@property (assign,nonatomic) double lastAlertDisplayedTimeInterval;                                                              //@synthesize lastAlertDisplayedTimeInterval=_lastAlertDisplayedTimeInterval - In the implementation block
@property (assign,nonatomic) double lastHomeButtonPressedTimeInterval;                                                           //@synthesize lastHomeButtonPressedTimeInterval=_lastHomeButtonPressedTimeInterval - In the implementation block
@property (assign,nonatomic) long long activeInterfaceOrientation;                                                               //@synthesize activeInterfaceOrientation=_activeInterfaceOrientation - In the implementation block
@property (assign,nonatomic) bool sentCancelEventForSnarfedTouch;                                                                //@synthesize sentCancelEventForSnarfedTouch=_sentCancelEventForSnarfedTouch - In the implementation block
@property (nonatomic,retain) AXAccessQueue * backboardAccessQueue;                                                               //@synthesize backboardAccessQueue=_backboardAccessQueue - In the implementation block
@property (nonatomic,readonly) GAXSettings * settings; 
+(id)sharedInstance;
-(id)ignoreAllTouchOverrideReasons;
-(void)setPasscodeViewVisible:(bool)arg1 ;
-(void)setSubstantialTransitionTimer:(id)arg1 ;
-(void)_setPasscode:(id)arg1 ;
-(void)backboardServer:(id)arg1 frontmostAppDidChangeWithServiceName:(id)arg2 pid:(int)arg3 ;
-(bool)allowsMotion;
-(double)lastAlertDisplayedTimeInterval;
-(void)setUserInterfaceClient:(id)arg1 ;
-(void)setBackboardServer:(id)arg1 ;
-(bool)_isIgnoringAllTouchByOverride;
-(void)setEventTapIdentifier:(id)arg1 ;
-(bool)shouldBlockAllEvents;
-(void)setPasscodeEntryFailedCount:(unsigned long long)arg1 ;
-(id)ignoredTouchRegions;
-(bool)setEnabled:(bool)arg1 fromAppWithIdentifier:(id)arg2 ;
-(bool)isSelfLockedToAppWithIdentifier:(id)arg1 ;
-(id)modeHistory;
-(id)allowAllTouchOverrideReasons;
-(bool)_isAllowingAllTouchByOverride;
-(bool)isTouchEventSwallowed:(id)arg1 ;
-(bool)allowsTripleClickSheet;
-(unsigned long long)availabilityForExternalRequestWithSpringboardParameters:(id)arg1 ;
-(unsigned long long)passcodeEntryFailedCount;
-(void)setVerifyingIntegrity:(bool)arg1 ;
-(void)setPasscodeWindowContextID:(unsigned)arg1 ;
-(bool)isPasscodeViewVisible;
-(double)_remainingLockoutDuration;
-(unsigned)passcodeWindowContextID;
-(bool)_isTouchEventSwallowed:(id)arg1 ;
-(void)_transitionToMode:(int)arg1 ;
-(id)userInterfaceClient;
-(void)setLaunchingCrashedApp:(bool)arg1 ;
-(id)eventTapIdentifier;
-(id)substantialTransitionTimer;
-(void)_resetOverrideTouchReasons;
-(void)setIgnoredTouchRegions:(id)arg1 ;
-(void)setBackboardAccessQueue:(id)arg1 ;
-(id)springboardClient;
-(void)setProfileManager:(id)arg1 ;
-(id)backboardAccessQueue;
-(void)setSpringboardClient:(id)arg1 ;
-(void)springboardClientWentInvalid:(id)arg1 ;
-(id)profileManagerSessionAppID:(id)arg1 ;
-(id)backboardServer;
-(bool)_hasPasscode;
-(void)_enableEventTap;
-(id)_passcode;
-(void)setModeHistory:(id)arg1 ;
-(void)setAppManager:(id)arg1 ;
-(id)profileManager;
-(void)backboardServer:(id)arg1 clientWentInvalid:(id)arg2 ;
-(void)backboardServer:(id)arg1 passcodeDidChange:(id)arg2 ;
-(void)deviceWasUnlockedWithBackboardServer:(id)arg1 ;
-(void)deviceWasLockedWithBackboardServer:(id)arg1 ;
-(void)backboardServer:(id)arg1 tripleClickSheetDidShow:(unsigned)arg2 ;
-(void)backboardServer:(id)arg1 voiceOverItemChooserDidShow:(unsigned)arg2 ;
-(long long)activeAppInterfaceOrientationWithBackboardServer:(id)arg1 ;
-(void)backboardServer:(id)arg1 didFinishLaunchingApplicationWithConfiguration:(int)arg2 errorMessage:(id)arg3 ;
-(void)systemDidRestartDueToLowBatteryWithBackboardServer:(id)arg1 ;
-(void)backboardServer:(id)arg1 requestedToAllowAllTouch:(bool)arg2 forOverrideReason:(int)arg3 ;
-(void)backboardServer:(id)arg1 requestedToIgnoreAllTouch:(bool)arg2 forOverrideReason:(int)arg3 ;
-(long long)backboardServer:(id)arg1 restrictionStateForIdentifier:(id)arg2 ;
-(void)profileManager:(id)arg1 didRestrictDevice:(bool)arg2 ;
-(void)didExitSingleAppModeWithProfileManager:(id)arg1 ;
-(void)didExitAppSelfLockModeWithProfileManager:(id)arg1 ;
-(void)didEnterAppSelfLockModeWithProfileManager:(id)arg1 ;
-(void)didEnterSingleAppModeWithProfileManager:(id)arg1 ;
-(void)appDidChangeForSingleAppModeWithProfileManager:(id)arg1 ;
-(void)_clearSavedActiveAppIDAfterRelaunchIfNeeeded;
-(void)setRestartingAndWasActiveBeforeRestart:(bool)arg1 ;
-(void)_prepareGuidedAccessAfterConnectingToSpringboard:(bool)arg1 ;
-(void)_transitionToMode:(int)arg1 requireUserUnlock:(bool)arg2 ;
-(void)_updateSessionAppWithIdentifier:(id)arg1 ;
-(void)_verifyIntegrityWithDelay:(double)arg1 shouldForceRelaunch:(bool)arg2 forReason:(id)arg3 ;
-(void)_updateSessionAppForSingleAppMode;
-(void)_handleToggleServerModeNotification:(id)arg1 ;
-(void)_handleAssistiveTouchEnabledNotification:(id)arg1 ;
-(void)setAllowAllTouchOverrideReasons:(id)arg1 ;
-(void)setIgnoreAllTouchOverrideReasons:(id)arg1 ;
-(void)setLastAlertDisplayedTimeInterval:(double)arg1 ;
-(void)setWasEverActiveInCurrentFrontmostApp:(bool)arg1 ;
-(void)_applyDeniedStatesForRestrictions;
-(bool)shouldStartSessionUponFrontmostAppChanged;
-(void)setShouldStartSessionUponFrontmostAppChanged:(bool)arg1 ;
-(void)_notifyOfStateChangeWithComponents:(unsigned long long)arg1 destinations:(unsigned long long)arg2 ;
-(void)setTripleClickSheetWindowContextID:(unsigned)arg1 ;
-(void)setVoiceOverItemChooserWindowContextID:(unsigned)arg1 ;
-(void)_didFinishTryingToLaunchSessionAppWithConfiguration:(int)arg1 error:(id)arg2 ;
-(void)_overrideIgnoreAllTouch:(bool)arg1 forReason:(int)arg2 asynchronously:(bool)arg3 ;
-(void)_overrideAllowAllTouch:(bool)arg1 forReason:(int)arg2 asynchronously:(bool)arg3 ;
-(void)setLastLockoutStartedTimeInterval:(double)arg1 ;
-(void)_showAlertWithTextType:(int)arg1 asBanner:(bool)arg2 isUrgent:(bool)arg3 ;
-(int)desiredModeAfterSuccessfulPasscodeEntry;
-(void)setDesiredModeAfterSuccessfulPasscodeEntry:(int)arg1 ;
-(id)_unarchivedIgnoredTouchRegionsWithDataArray:(id)arg1 ;
-(void)_transitionToMode:(int)arg1 requireUserUnlock:(bool)arg2 assumeUserInterfaceConnectionSevered:(bool)arg3 ;
-(bool)isRestartingAndWasActiveBeforeRestart;
-(void)setLastHomeButtonPressedTimeInterval:(double)arg1 ;
-(double)lastHomeButtonPressedTimeInterval;
-(bool)_touchEventIsForAccessibilityFeatures:(id)arg1 ;
-(bool)sentCancelEventForSnarfedTouch;
-(void)setSentCancelEventForSnarfedTouch:(bool)arg1 ;
-(unsigned)assistiveTouchPort;
-(void)setAssistiveTouchPort:(unsigned)arg1 ;
-(unsigned)tripleClickSheetWindowContextID;
-(bool)_touchEvent:(id)arg1 isForWindowWithContextID:(unsigned)arg2 ;
-(unsigned)voiceOverItemChooserWindowContextID;
-(bool)_touchEventIsForAssistiveTouch:(id)arg1 ;
-(bool)_touchEventIsForTripleClickSheet:(id)arg1 ;
-(bool)_touchEventIsForVoiceOverItemChooser:(id)arg1 ;
-(void)_handleServerModeChangeRequestWithType:(int)arg1 ;
-(void)_updateSessionAppWithIdentifier:(id)arg1 notifyUserInterfaceServer:(bool)arg2 sessionAppIdentifierDidChange:(bool*)arg3 ;
-(void)setShouldBlockAllEvents:(bool)arg1 ;
-(bool)_sessionAppIsFrontmost;
-(bool)_isPasscodeStale;
-(void)_didFinishTransitioningFromWorkspaceToSession;
-(void)_didFinishTransitioningFromWorkspaceToApplication;
-(void)_disableEventTap;
-(unsigned long long)_availabilityForRequestType:(int)arg1 springboardParameters:(id)arg2 ;
-(id)_errorMessageForAvailability:(unsigned long long)arg1 ;
-(bool)_shouldAllowDirectInactiveToActiveTransition;
-(int)_previousModeIgnoringWorkspace:(bool)arg1 ;
-(void)_applyChangedStatesForRestrictions;
-(void)_applyAllowedStatesForRestrictions;
-(void)_clearChangedStatesForRestrictions;
-(double)lastLockoutStartedTimeInterval;
-(bool)isVerifyingIntegrity;
-(bool)_sessionAppIsFrontmostAllowingRemoteMessageSend:(bool)arg1 shouldManuallyCheckWhetherAppIsWebAndForegroundRunning:(bool*)arg2 ;
-(void)_launchSessionAppWithIdentifier:(id)arg1 forProfileConfiguration:(int)arg2 ;
-(bool)isLaunchingCrashedApp;
-(void)_handleSubstationalTransition;
-(void)_handleTelephonyCallStatusChangedNotificationWithCall:(CTCallRef)arg1 ;
-(void)purpleBuddyDidTerminateWithAppManager:(id)arg1 ;
-(void)frontmostAppDidBecomeInvalidWithAppManager:(id)arg1 ;
-(bool)isInWorkspace;
-(bool)wasEverActiveInCurrentFrontmostApp;
-(void)_performValidation;
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)userInterfaceClient:(id)arg1 accessQueueForProcessingMessageWithIdentifier:(unsigned long long)arg2 ;
-(bool)userInterfaceClient:(id)arg1 messageWithIdentifierRequiresWritingBlock:(unsigned long long)arg2 ;
-(void)userInterfaceClient:(id)arg1 willActivateUserInterfaceServiceWithInitializationMessage:(id)arg2 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(bool)_isRunningInStoreDemoMode;
-(void)dealloc;
-(id)init;
-(id)description;
-(bool)isActive;
-(long long)activeInterfaceOrientation;
-(bool)isLocked;
-(void)setLocked:(bool)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)settings;
-(void)setActiveInterfaceOrientation:(long long)arg1 ;
-(id)appManager;
-(bool)_handleEvent:(id)arg1 ;
@end
