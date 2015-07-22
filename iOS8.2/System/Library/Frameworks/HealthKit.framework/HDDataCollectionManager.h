/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:51 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/HealthKit.framework/healthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <healthd/HDDiagnosticObject.h>
#import <healthd/HDHealthDaemonReadyObserver.h>
#import <healthd/HDHealthDataCollectionManager.h>

@protocol HDHealthDaemon, HDDataCollectionManagerDelegate, OS_dispatch_queue;
@class NSDate, NSMutableSet, NSMutableDictionary, NSObject, HDDemoManager, NSString;

@interface HDDataCollectionManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDHealthDataCollectionManager> {

	NSDate* _lastLaunchUpdate;
	NSMutableSet* _dataCollectors;
	id<HDHealthDaemon> _healthDaemon;
	id<HDDataCollectionManagerDelegate> _delegate;
	NSMutableDictionary* _activeDataClasses;
	NSObject*<OS_dispatch_queue> _queue;
	HDDemoManager* _demoManager;

}

@property (assign,nonatomic,__weak) id<HDHealthDaemon> healthDaemon;                           //@synthesize healthDaemon=_healthDaemon - In the implementation block
@property (assign,nonatomic,__weak) id<HDDataCollectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeDataClasses;                          //@synthesize activeDataClasses=_activeDataClasses - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) HDDemoManager * demoManager;                                      //@synthesize demoManager=_demoManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopFakingData;
-(void)stopReplayingData;
-(void)stopRecordingData;
-(void)startRecordingDataToFile:(id)arg1 ;
-(void)startFakingDataWithActivity:(int)arg1 speed:(id)arg2 ;
-(void)startReplayingDataFromFile:(id)arg1 repeat:(char)arg2 ;
-(id)initWithHealthDaemon:(id)arg1 delegate:(id)arg2 ;
-(void)periodicUpdate;
-(void)sensorDataReceived:(id)arg1 sourceEntity:(id)arg2 ;
-(char)_queue_dataReceived:(id)arg1 fromSource:(id)arg2 isDemoData:(char)arg3 error:(id*)arg4 ;
-(void)_queue_addObserver:(id)arg1 collectionInterval:(double)arg2 forType:(id)arg3 ;
-(void)_queue_alertCollectorsCollectionStartedForType:(id)arg1 ;
-(void)_queue_removeObserver:(id)arg1 forType:(id)arg2 ;
-(char)_queue_observersExistForType:(id)arg1 ;
-(void)_queue_alertCollectorsCollectionStoppedForType:(id)arg1 ;
-(void)_queue_updateCollectionPeriodForCollectorsOfType:(id)arg1 ;
-(double)_queue_collectionIntervalForType:(id)arg1 ;
-(void)_queue_setupUnprotectedDataDependantState;
-(void)_queue_addDataCollector:(id)arg1 ;
-(void)_queue_alertCollectorsOfTypesWithObservers;
-(id)_queue_demoManagerCreatingIfNecessary;
-(void)demoDataReceived:(id)arg1 ;
-(id)_activeClassesString;
-(id)_dataCollectorsDiagnosticDescription;
-(void)setDataCollectors:(id)arg1 ;
-(char)_queue_anyObserversExistForTypes:(id)arg1 ;
-(void)_updateDataCollectorsWithPrivacySettings;
-(NSMutableDictionary *)activeDataClasses;
-(void)setActiveDataClasses:(NSMutableDictionary *)arg1 ;
-(HDDemoManager *)demoManager;
-(void)setDemoManager:(HDDemoManager *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<HDDataCollectionManagerDelegate>)arg1 ;
-(id<HDDataCollectionManagerDelegate>)delegate;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)diagnosticDescription;
-(void)daemonReady:(id)arg1 ;
-(id<HDHealthDaemon>)healthDaemon;
-(void)setHealthDaemon:(id<HDHealthDaemon>)arg1 ;
-(void)sensorDataArrayReceived:(id)arg1 sourceEntity:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)startDataCollectionForType:(id)arg1 observer:(id)arg2 collectionInterval:(double)arg3 ;
-(void)stopDataCollectionForType:(id)arg1 observer:(id)arg2 ;
-(id)dataCollectors;
@end
