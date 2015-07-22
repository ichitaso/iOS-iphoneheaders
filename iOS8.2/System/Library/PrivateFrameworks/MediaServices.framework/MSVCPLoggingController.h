/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSObject, NSArray, NSString;

@interface MSVCPLoggingController : NSObject {

	NSMutableArray* _registeredConfigurations;
	NSMutableDictionary* _cachedLoggingLevelPairs;
	NSObject*<OS_dispatch_queue> _configurationAccessQueue;
	NSObject*<OS_dispatch_queue> _serialLoggingQueue;
	int _configurationChangeNotifyToken;
	char _masterLoggingSwitchInitialized;
	char _masterLoggingSwitchEnabled;
	char _cachedPPTTestsAreInProgress;

}

@property (nonatomic,copy,readonly) NSArray * registeredConfigurations; 
@property (nonatomic,copy,readonly) NSString * defaultCategory; 
@property (assign,nonatomic) char masterLoggingSwitchEnabled; 
+(id)sharedController;
-(void)dealloc;
-(id)init;
-(NSString *)defaultCategory;
-(void)setMasterLoggingSwitchEnabled:(char)arg1 ;
-(void)registerConfiguration:(id)arg1 withFacilityName:(id)arg2 ;
-(char)shouldLogMessageWithLevel:(int)arg1 category:(id)arg2 ;
-(void)logMessage:(id)arg1 withLevel:(int)arg2 category:(id)arg3 fileName:(const char*)arg4 functionName:(const char*)arg5 lineNumber:(unsigned long)arg6 ;
-(void)_updateCachedPPTTestsAreInProgress;
-(void)_updateLoggingLevels;
-(id)_defaultCategoryOnAccessQueue;
-(char)masterLoggingSwitchEnabled;
-(NSArray *)registeredConfigurations;
@end
