/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:05 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/geod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <geod/GEOServer.h>

@interface GEODefaultsServer : GEOServer
+(id)_acceptableKeys;
+(id)_acceptableKeysWithCountrySuffixes;
+(id)identifier;
-(void)setDefaultWithMessage:(id)arg1 ;
-(void)registerNetworkDefaultsWithMessage:(id)arg1 ;
-(void)resetAllDefaultsWithMessage:(id)arg1 ;
-(void)countryProvidersDidChangeWithMessage:(id)arg1 ;
-(void)countryCodeDidChangeWithMessage:(id)arg1 ;
@end
