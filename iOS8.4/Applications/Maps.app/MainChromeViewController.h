/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MapsChromeViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Maps/GEOResourceManifestTileGroupObserver.h>
#import <Maps/EventCaptureViewDelegate.h>
#import <Maps/AdvisorySheetViewDelegate.h>
#import <Maps/MainChromeViews.h>
#import <Maps/AudioSettingsViewControllerDelegate.h>

@protocol MainChromeTopBarContent, MainChromeSheet, MainChromeTopBarContentProvider;
@class ControlBarView, AdvisorySheet, EventCaptureView, MainChromeCommonControls, SearchPinsManager, BlurView, EasyCallbackAlertView, UIButton, AudioSettingsViewController, UINavigationController, UIView, SettingsController, PlacePresentationSelectionManager, AdaptivePresenter, UILabel, UIViewController, MainChromeDetailsBarView, BarShadowView, UIToolbar, NSError, UIFont, PlacePresentationSelectionManagerContext, MainChromeViewItem, NSString, MKMapView;

@interface MainChromeViewController : MapsChromeViewController <UINavigationControllerDelegate, GEOResourceManifestTileGroupObserver, EventCaptureViewDelegate, AdvisorySheetViewDelegate, MainChromeViews, AudioSettingsViewControllerDelegate> {

	id<MainChromeTopBarContent> _topBarContent;
	CGSize _lastKnownBoundsSize;
	int _lastKnownTopBarContentVariant;
	CGRect _statusBarFrame;
	int _statusBarStyle;
	SCD_Struct_Di9 _bars;
	SCD_Struct_Di9 _previousBars;
	char _hasEnqueuedBarStateChange;
	char _hasPerformedBarStateChange;
	double _barStateChangeDuration;
	char _appearing;
	char _rotating;
	char _advisoryVisible;
	char _displayed;
	char _showingSettingsTopBarStyle;
	char _animatingTopBars;
	unsigned _viewCallbacksSuppressionCount;
	char _hasCalledViewAppearMethods;
	/*^block*/id _lastUpdateTopBarContentCompletionBlock;
	AdvisorySheet* _advisorySheet;
	EventCaptureView* _eventCaptureView;
	char _animatingPresentAdvisory;
	char _animatingDismissAdvisory;
	char _hasDoneInitalLayoutForControlBar;
	MainChromeCommonControls* _commonControls;
	SearchPinsManager* _searchPinsManager;
	BlurView* _topBlurView;
	EasyCallbackAlertView* _locationServicesAlertView;
	UIButton* _audioControl;
	AudioSettingsViewController* _audioSettingsViewController;
	UINavigationController* _audioSettingsNavController;
	int _viewMode;
	char _isObservingNonselectingTaps;
	char _hasScheduledTapToHideToggle;
	char _shouldSuppressTapToHideToggle;
	char _suppressLayoutForStatusBarUpdate;
	int _topBarLightness;
	UIView* _currentTopBarPaletteView;
	char _currentTopBarPaletteDrawsOwnBackground;
	SettingsController* _settingsController;
	PlacePresentationSelectionManager* _placePresentationSelectionManager;
	AdaptivePresenter* _audioSettingsPresenter;
	UILabel* _tourLabel;
	UIViewController* _previouslyShownViewController;
	int _flyoverTourStartMode;
	MainChromeDetailsBarView* _detailsBar;
	SCD_Struct_RA7 _detailsBarState;
	UIViewController*<MainChromeSheet> _displayedSheetViewController;
	id<MainChromeTopBarContentProvider> _displayedSheetTopBarContentProvider;
	id<MainChromeTopBarContent> _displayedSheetTopBarContent;
	BlurView* _sheetBackdropBlurView;
	BarShadowView* _sheetShadowView;
	UIView* _sheetShieldView;
	char _sheetPresentationAnimationIsInFlight;
	SCD_Struct_Ma36 _mapInteractionStateBeforeDisplayingSheet;
	/*^block*/id _displayedSheetDismissalBlock;
	ControlBarView* _controlBar;
	UIToolbar* _topBar;
	/*^block*/id _didFinishAnimatingSettingsView;
	UIView* _mapViewReplacement;
	UIView* _customTopBarView;
	NSError* _displayedLocationError;
	id<MainChromeTopBarContentProvider> _topBarContentProvider;

}

@property (nonatomic,readonly) float availableDetailsBarTitleLabelWidth; 
@property (nonatomic,readonly) UIFont * detailsBarTitleLabelFont; 
@property (getter=isShowingLocationServicesAlert,nonatomic,readonly) char showingLocationServicesAlert; 
@property (nonatomic,retain) id<MainChromeTopBarContentProvider> topBarContentProvider;                              //@synthesize topBarContentProvider=_topBarContentProvider - In the implementation block
@property (nonatomic,readonly) UINavigationController * phoneNavigationController; 
@property (nonatomic,readonly) char statusBarHidden; 
@property (nonatomic,readonly) char topBarHidden; 
@property (nonatomic,readonly) char animatingTopBars;                                                                //@synthesize animatingTopBars=_animatingTopBars - In the implementation block
@property (readonly) PlacePresentationSelectionManager * placePresentationSelectionManager; 
@property (readonly) PlacePresentationSelectionManagerContext * currentPlacePresentationContext; 
@property (readonly) int topBarLightness;                                                                            //@synthesize topBarLightness=_topBarLightness - In the implementation block
@property (readonly) MainChromeCommonControls * commonControls;                                                      //@synthesize commonControls=_commonControls - In the implementation block
@property (nonatomic,retain) UIToolbar * topBar;                                                                     //@synthesize topBar=_topBar - In the implementation block
@property (assign,nonatomic) int viewMode;                                                                           //@synthesize viewMode=_viewMode - In the implementation block
@property (assign,getter=isSuppressed,nonatomic) char suppressed; 
@property (nonatomic,readonly) SettingsController * settingsController; 
@property (nonatomic,copy) id didFinishAnimatingSettingsView;                                                        //@synthesize didFinishAnimatingSettingsView=_didFinishAnimatingSettingsView - In the implementation block
@property (nonatomic,retain) ControlBarView * controlBar;                                                            //@synthesize controlBar=_controlBar - In the implementation block
@property (nonatomic,retain) UIView * mapViewReplacement;                                                            //@synthesize mapViewReplacement=_mapViewReplacement - In the implementation block
@property (setter=_setCustomTopBarView:,nonatomic,retain) UIView * _customTopBarView;                                //@synthesize customTopBarView=_customTopBarView - In the implementation block
@property (nonatomic,copy) id lastUpdateTopBarContentCompletionBlock;                                                //@synthesize lastUpdateTopBarContentCompletionBlock=_lastUpdateTopBarContentCompletionBlock - In the implementation block
@property (nonatomic,retain) NSError * displayedLocationError;                                                       //@synthesize displayedLocationError=_displayedLocationError - In the implementation block
@property (nonatomic,readonly) MainChromeViewItem * topItem; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MKMapView * mapView; 
@property (nonatomic,readonly) UIView * containingView; 
+(int)_blurViewStyleForBarBackdropKind:(int)arg1 ;
+(Class)chromeViewItemClass;
-(void)performInitialConfigurationOnDirectionsAnnotationsManager:(id)arg1 ;
-(void)performInitialConfigurationOnSearchPinsManager:(id)arg1 ;
-(void)moveToMapDisplayStyle:(unsigned)arg1 forChangeToLightLevel:(int)arg2 animation:(id)arg3 ;
-(void)_locationManagerApprovalDidChange:(id)arg1 ;
-(void)eventCaptureViewDidReceiveIncidentalTap:(id)arg1 ;
-(SettingsController *)settingsController;
-(void)fillReportAProblemContext:(id)arg1 ;
-(PlacePresentationSelectionManager *)placePresentationSelectionManager;
-(MainChromeCommonControls *)commonControls;
-(char)supportsSuppression;
-(void)setTopBarContentProvider:(id)arg1 animated:(char)arg2 ;
-(void)setBlurColor:(id)arg1 forMode:(id)arg2 ;
-(void)hideTopBarShadow:(char)arg1 forMode:(id)arg2 ;
-(void)setBackdropKind:(int)arg1 forMode:(id)arg2 ;
-(void)setBottomLineHidden:(char)arg1 forMode:(id)arg2 ;
-(void)insertSubviewBelowTopBar:(id)arg1 ;
-(ControlBarView *)controlBar;
-(void)dismissAdvisorySheetWithIdentifier:(id)arg1 animated:(char)arg2 ;
-(char)isCurrentMode:(id)arg1 ;
-(void)setOverriddenViewMode:(int)arg1 forMode:(id)arg2 ;
-(void)setStatusBarHidden:(char)arg1 topBarHidden:(char)arg2 animated:(char)arg3 ;
-(void)updateTopBarContentAnimated:(char)arg1 ;
-(void)layoutForUnobscuredBoundsChange;
-(void)setExtendedBlurFrame:(CGRect)arg1 forMode:(id)arg2 ;
-(char)canDisplayTraffic;
-(/*^block*/id)presentUnhandledInterruptionOfKind:(int)arg1 userInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)pushMode:(id)arg1 animated:(char)arg2 ;
-(CGRect)unobscuredBoundsInContainingViewWithOptions:(int)arg1 ;
-(void)setSuppressed:(char)arg1 ;
-(void)updateTrafficDisplay;
-(void)_stopFlyoverTourAnimation;
-(PlacePresentationSelectionManagerContext *)currentPlacePresentationContext;
-(char)isTapToHideEnabledForMode:(id)arg1 ;
-(void)setTapToHideEnabled:(char)arg1 forMode:(id)arg2 ;
-(char)isShowingLocationServicesAlert;
-(char)shouldUseMapSelectionForUserAction;
-(void)presentAdvisorySheetAnimated:(char)arg1 expectsIncidentalInteraction:(char)arg2 identifier:(id)arg3 title:(id)arg4 subtitle:(id)arg5 buttonTitle:(id)arg6 accessoryView:(id)arg7 userInfo:(id)arg8 delegate:(id)arg9 ;
-(void)advisorySheetButtonWasTapped:(id)arg1 ;
-(id)initChromeAndContainer:(id*)arg1 ;
-(id)_topBarAreaView;
-(id)_currentlyTrackedTopBarView;
-(char)getPreferredUserInterfaceIdiom:(out int*)arg1 ;
-(char)animatingTopBars;
-(void)_setDetailsBarContent:(id)arg1 forMode:(id)arg2 ;
-(void)_updateDisplayBarAnimated:(char)arg1 ;
-(id)_detailsBarContentForMode:(id)arg1 ;
-(void)presentDetailsBarWithContent:(id)arg1 forMode:(id)arg2 animated:(char)arg3 ;
-(void)dismissDetailsBarForMode:(id)arg1 animated:(char)arg2 ;
-(id)detailsBarContentForMode:(id)arg1 ;
-(float)availableDetailsBarTitleLabelWidth;
-(UIFont *)detailsBarTitleLabelFont;
-(int)topBarLightness;
-(CGRect)_detailsBarFrameAtRest:(char)arg1 ;
-(void)_layoutDetailsBar;
-(void)_userDefaultsDidChange;
-(void)_updateCurrentEnvironmentName;
-(void)_animateBarsToCurrentStateWithDuration:(double)arg1 ;
-(int)_currentTopBarBackdropStyle;
-(void)setControlBar:(ControlBarView *)arg1 ;
-(void)_layoutTopBlurView;
-(void)_layoutControlBar;
-(id)activeTopBarContent;
-(int)_currentTopBarContentVariant;
-(void)_layoutTopBar;
-(void)_layoutMapView;
-(float)_statusBarMaxY;
-(UIView *)_customTopBarView;
-(void)updateStatusBarWithoutLayout;
-(char)_shouldSlideTopBar;
-(CGRect)_topBlurViewFrame;
-(char)_blurViewExtendsToPaletteView;
-(CGRect)_topBarPaletteFrameForView:(id)arg1 insetByMargin:(char)arg2 ;
-(void)_updateBottomLineHidden;
-(id)_topBarIfAvailable;
-(CGRect)_topBarFrameInsetByMargin:(char)arg1 ;
-(void)topBarSizeWillChange:(CGSize)arg1 ;
-(void)topBarSizeDidChange:(CGSize)arg1 ;
-(CGRect)_advisorySheetFrameForPresentationForSheet:(id)arg1 ;
-(void)_updateAudioRoutingButtonVisability;
-(void)setStatusBarHidden:(char)arg1 topBarHidden:(char)arg2 controlBarHidden:(char)arg3 animated:(char)arg4 ;
-(void)quiesceMapView;
-(id)_topMainChromeMode;
-(void)_updateAdvisorySheetLayout;
-(void)unquiesceMapView;
-(void)_updateBlurView;
-(int)_displayedViewMode;
-(void)_updateViewMode;
-(id)_currentMainChromeMode;
-(void)_updateTopBarContentLightnessAnimated:(char)arg1 ;
-(void)_updateTapToHideIfNeeded;
-(void)_setTopBarContentForDisplay:(id)arg1 ;
-(void)_moveToCurrentTopBarContentAnimated:(char)arg1 ;
-(char)_updateCurrentTopBarContentVariantAndReturnWhetherChanged;
-(id<MainChromeTopBarContentProvider>)topBarContentProvider;
-(void)_setDisplayedSheetTopBarContentForDisplay:(id)arg1 ;
-(id)lastUpdateTopBarContentCompletionBlock;
-(id)_displayableTopBarContent;
-(void)setLastUpdateTopBarContentCompletionBlock:(id)arg1 ;
-(id)presentNavSafetyAlertForInterruption:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setDisplayedLocationError:(NSError *)arg1 ;
-(UIEdgeInsets)mapInsetsIncludingBarsWithNonopaqueParts:(char)arg1 ;
-(UIView *)mapViewReplacement;
-(void)_layoutSheetViewsIfNeeded;
-(void)_layoutTourLabel;
-(void)_sheetsDisplayPreferredContentSizeDidChangeForChildContainer:(id)arg1 ;
-(void)_notifySizeClassChange;
-(void)_notifySizeClassDidChange;
-(char)topBarHidden;
-(void)_handleDisappearingCalloutAtCoordinate:(SCD_Struct_RA2)arg1 ;
-(void)ignoreCurrentTapForTapToHide;
-(id)_advisorySheet;
-(void)_presentAdvisorySheetAnimated:(char)arg1 ;
-(id)_eventCaptureView;
-(id)_audioSettingsViewController;
-(id)_audioControl;
-(void)_dismissAudioSettings:(id)arg1 ;
-(id)_audioSettingsNavController;
-(void)_handleTapOnAudioControl:(id)arg1 ;
-(void)_setAudioSettingsViewControllerBluetoothEnabled:(char)arg1 ;
-(void)dismissSheetViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_scheduleToggleBarsForTapToHide;
-(void)_toggleBarsForTapToHide;
-(void)audioSettingsViewControllerSettingsDidAppear:(id)arg1 ;
-(void)audioSettingsViewControllerSettingsDidDisappear:(id)arg1 ;
-(void)audioSettingsViewController:(id)arg1 hasRoutesToPick:(char)arg2 ;
-(void)audioSettingsViewControllerPickedRouteForAudioSetting:(id)arg1 ;
-(void)audioSettingsViewController:(id)arg1 updatedHFPPreferenceForAudioSetting:(char)arg2 ;
-(void)setDisallowedViewModes:(id)arg1 preferredViewMode:(int)arg2 forMode:(id)arg3 ;
-(int)displayedViewMode;
-(void)setTopBlurViewHidden:(char)arg1 ;
-(char)topBlurViewHidden;
-(void)setControlBarHidden:(char)arg1 ;
-(char)controlBarHidden;
-(char)controlBarOffScreen;
-(void)willPresentSettings;
-(void)willDismissSettings;
-(void)setTopBarContent:(id)arg1 ;
-(void)setTopBarContent:(id)arg1 animated:(char)arg2 ;
-(void)setTopBarContentProvider:(id<MainChromeTopBarContentProvider>)arg1 ;
-(UINavigationController *)phoneNavigationController;
-(int)currentBackdropKind;
-(void)setTopBarMiniAltHeight:(float)arg1 forMode:(id)arg2 ;
-(void)_setBlockingInteractionsForPageCurl:(char)arg1 ;
-(void)addReplacementViewToViewHierarchy:(id)arg1 ;
-(void)currentModeDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(char)arg3 ;
-(void)currentModeWillChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(char)arg3 ;
-(CGSize)attributionAnchorOffset;
-(void)presentSettingsFromSettingsButton;
-(id)didFinishAnimatingSettingsView;
-(void)setDidFinishAnimatingSettingsView:(id)arg1 ;
-(void)setMapViewReplacement:(UIView *)arg1 ;
-(void)_setCustomTopBarView:(id)arg1 ;
-(NSError *)displayedLocationError;
-(CGRect)_frameForSheetViewController:(id)arg1 atDisplayPosition:(char)arg2 ;
-(CGRect)_frameForSheetViewAtDisplayPosition:(char)arg1 ;
-(void)presentSheetViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 dismissal:(/*^block*/id)arg4 ;
-(CGRect)_frameForSheetShieldViewAtDisplayPosition:(char)arg1 ;
-(void)presentSheetViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(char)isDisplayingSheetViewController:(id)arg1 ;
-(void)_willChangeStatusBarFrame:(id)arg1 ;
-(void)mapView:(id)arg1 canEnter3DModeDidChange:(char)arg2 ;
-(void)mapViewDidStartUserInteraction:(id)arg1 ;
-(void)mapViewDidStopUserInteraction:(id)arg1 ;
-(void)mapViewWillStartFlyoverTour:(id)arg1 ;
-(void)mapView:(id)arg1 didStopFlyoverTourCompleted:(char)arg2 ;
-(void)mapView:(id)arg1 flyoverTourLabelDidChange:(id)arg2 ;
-(void)mapView:(id)arg1 didBecomePitched:(char)arg2 ;
-(void)mapView:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)_mapView:(id)arg1 calloutDidAppearForAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2 ;
-(void)_mapView:(id)arg1 willDeselectLabelMarker:(id)arg2 ;
-(void)_mapView:(id)arg1 willDeselectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(char)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(void)dealloc;
-(char)statusBarHidden;
-(id)_preferredStatusBarHideAnimationParameters;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(char)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(MainChromeViewItem *)topItem;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)rotatingHeaderView;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
-(int)viewMode;
-(void)setTopBar:(UIToolbar *)arg1 ;
-(UIToolbar *)topBar;
-(void)setViewMode:(int)arg1 ;
-(UIEdgeInsets)labelEdgeInsets;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
@end
