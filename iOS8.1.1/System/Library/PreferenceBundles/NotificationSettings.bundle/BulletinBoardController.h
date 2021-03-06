/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/NotificationSettings.bundle/NotificationSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSEditableListController.h>
#import <NotificationSettings/BulletinBoardAppDetailControllerDelegate.h>

@protocol OS_dispatch_semaphore;
@class PSSpecifier, NSObject, NSDictionary, NSString;

@interface BulletinBoardController : PSEditableListController <BulletinBoardAppDetailControllerDelegate> {

	unsigned long long _inCount;
	long long _orderRule;
	PSSpecifier* _inGroupEmptyCell;
	PSSpecifier* _outGroupEmptyCell;
	unsigned long long _cellChangeAction;
	NSObject*<OS_dispatch_semaphore> _loadSem;
	long long _inNotificationCenterSection;
	long long _outOfNotificationCenterSection;
	BOOL _loadingFromBBGateway;
	BOOL _telephonyDevice;
	unsigned long long _dndDataTypes;
	NSDictionary* _urlResourceDictionary;

}

@property (nonatomic,retain) PSSpecifier * inGroupEmptyCell;                    //@synthesize inGroupEmptyCell=_inGroupEmptyCell - In the implementation block
@property (nonatomic,retain) PSSpecifier * outGroupEmptyCell;                   //@synthesize outGroupEmptyCell=_outGroupEmptyCell - In the implementation block
@property (assign) BOOL loadingFromBBGateway;                                   //@synthesize loadingFromBBGateway=_loadingFromBBGateway - In the implementation block
@property (assign,nonatomic) unsigned long long dndDataTypes;                   //@synthesize dndDataTypes=_dndDataTypes - In the implementation block
@property (nonatomic,retain) NSDictionary * urlResourceDictionary;              //@synthesize urlResourceDictionary=_urlResourceDictionary - In the implementation block
@property (assign,nonatomic) BOOL telephonyDevice;                              //@synthesize telephonyDevice=_telephonyDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)orderingMode:(id)arg1 ;
-(void)loadedDNDData:(unsigned long long)arg1 ;
-(unsigned long long)dndDataTypes;
-(BOOL)telephonyDevice;
-(id)_sectionIDs;
-(void)_loadSections;
-(void)appDetailController:(id)arg1 allowNotificationsChangedForSpecifier:(id)arg2 ;
-(void)appDetailController:(id)arg1 moveSpecifier:(id)arg2 toOnPosition:(BOOL)arg3 isSubsection:(BOOL)arg4 ;
-(void)appDetailControllerWillDisappear:(id)arg1 ;
-(void)profileNotification:(id)arg1 ;
-(void)setUrlResourceDictionary:(NSDictionary *)arg1 ;
-(void)setCmasAlertState:(id)arg1 forSpecifier:(id)arg2 ;
-(id)cmasAlertsValue:(id)arg1 ;
-(PSSpecifier *)inGroupEmptyCell;
-(void)setInGroupEmptyCell:(PSSpecifier *)arg1 ;
-(PSSpecifier *)outGroupEmptyCell;
-(void)setOutGroupEmptyCell:(PSSpecifier *)arg1 ;
-(BOOL)loadingFromBBGateway;
-(void)setOrderingMode:(id)arg1 specifier:(id)arg2 ;
-(void)_loadSegmentCellState:(long long)arg1 ;
-(id)inOutSpecifiersFrom:(id)arg1 ;
-(void)_addRegionalAlertGroupToSpecifiers:(id)arg1 ;
-(long long)indexOfBBSectionInfoForIndexPath:(id)arg1 ;
-(void)adjustEmptyCells;
-(void)_pushControllerAtIndexPath:(id)arg1 ;
-(NSDictionary *)urlResourceDictionary;
-(void)setLoadingFromBBGateway:(BOOL)arg1 ;
-(id)_filterSuppressedSections:(id)arg1 ;
-(id)sectionsOrderedByInOutState:(id)arg1 ;
-(void)_reallyLoadSections:(id)arg1 chronologicalSections:(id)arg2 ;
-(void)_clearSections;
-(id)_sectionDescriptions;
-(void)setTrafficConditionsState:(id)arg1 forSpecifier:(id)arg2 ;
-(id)trafficConditionsState:(id)arg1 ;
-(void)setDndDataTypes:(unsigned long long)arg1 ;
-(id)_sectionUIDescriptions;
-(void)setTelephonyDevice:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
-(void)createGroupIndices;
-(id)controllerForSpecifier:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)setDesiredVerticalContentOffset:(float)arg1 ;
-(void)_reloadSections;
@end

