/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface MNThermalLogger : NSObject {

	int _maxCLTM;
	BOOL _hasMaxCLTM;
	int _appMode;

}
-(void)endLogging;
-(void)startLogging;
-(void)updateMaxThermalLevel;
-(void)dealloc;
-(id)init;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
@end

