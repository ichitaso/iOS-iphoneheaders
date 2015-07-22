/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSData;

@interface DaemonBiometricOptInOperation : ISOperation {

	NSData* _authToken;
	BOOL _requiresStoreAuthentication;
	/*^block*/id _resultBlock;

}

@property (nonatomic,copy) NSData * authToken; 
@property (assign) BOOL requiresStoreAuthentication; 
@property (copy) id resultBlock; 
-(BOOL)requiresStoreAuthentication;
-(id)_authenticateWithAccount:(id)arg1 error:(id*)arg2 ;
-(BOOL)_registerAccount:(id)arg1 withAuthToken:(id)arg2 ;
-(void)setRequiresStoreAuthentication:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)run;
-(void)setAuthToken:(NSData *)arg1 ;
-(NSData *)authToken;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
@end
