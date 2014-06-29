/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityListController.h>
#import <DataDetectorsUI/MFMailComposeViewControllerDelegate.h>
#import <AccessibilitySettings/CBPeripheralManagerDelegate.h>

@class NSMutableArray, CBPeripheralManager, UIAlertView, NSLock, NSString;

@interface HearingAidController : AccessibilityListController <MFMailComposeViewControllerDelegate, CBPeripheralManagerDelegate> {

	NSMutableArray* _availableDevices;
	bool _bluetoothAvailable;
	CBPeripheralManager* _pairingManager;
	UIAlertView* _compressingAlert;
	NSLock* deviceUpdateLock;
	NSString* availableDeviceIdentifier;

}

@property (nonatomic,retain) NSMutableArray * availableDevices;                 //@synthesize availableDevices=_availableDevices - In the implementation block
@property (nonatomic,retain) NSLock * deviceUpdateLock; 
@property (nonatomic,retain) NSString * availableDeviceIdentifier; 
-(void)setBluetoothAvailable:(id)arg1 ;
-(void)setDeviceUpdateLock:(id)arg1 ;
-(id)bluetoothAvailable;
-(void)_toggleHACSwitch:(bool)arg1 ;
-(void)setBluetoothAvailability:(bool)arg1 ;
-(void)setAvailableDeviceIdentifier:(id)arg1 ;
-(void)setAvailableDevices:(id)arg1 ;
-(id)deviceUpdateLock;
-(id)availableDevices;
-(void)refreshAvailableDevices;
-(void)prepareHearingReporterEmail;
-(id)availableDeviceIdentifier;
-(void)_updateHACSwitchSettingWithStatus:(int)arg1 ;
-(void)viewHearingAidDetailsWithSpecifier:(id)arg1 ;
-(void)beginSearching;
-(id)accessibilityPreferenceForSpecifier:(id)arg1 ;
-(void)accessibilitySetPreference:(id)arg1 specifier:(id)arg2 ;
-(void)cleanupView;
-(void)emailLogs:(id)arg1 ;
-(void)bluetoothPowerDidChange:(id)arg1 ;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(id)valueForSpecifier:(id)arg1 ;
-(void)bluetoothAvailabilityDidChange:(id)arg1 ;
-(id)compressFile:(id)arg1 ;
-(id)specifiers;
-(void)willResignActive;
-(void)willBecomeActive;
@end
