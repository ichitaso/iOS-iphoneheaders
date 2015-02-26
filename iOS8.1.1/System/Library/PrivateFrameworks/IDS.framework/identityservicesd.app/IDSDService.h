/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDictionary, NSMutableArray, NSString, NSArray;

@interface IDSDService : NSObject {

	NSDictionary* _serviceProperties;
	NSMutableArray* _adHocServices;
	BOOL _adHocServicesLoaded;

}

@property (nonatomic,retain,readonly) NSString * displayName; 
@property (nonatomic,retain,readonly) NSString * identifier; 
@property (nonatomic,retain,readonly) NSString * pushTopic; 
@property (nonatomic,retain,readonly) NSString * serviceName; 
@property (nonatomic,retain,readonly) NSString * queryService; 
@property (nonatomic,retain,readonly) NSString * protocolName; 
@property (nonatomic,retain,readonly) NSString * launchDarwinNotification; 
@property (nonatomic,readonly) BOOL allowLocalDelivery; 
@property (nonatomic,readonly) BOOL allowWiProxDelivery; 
@property (nonatomic,readonly) BOOL allowMagnetDelivery; 
@property (nonatomic,readonly) BOOL shouldShowUsageNotifications; 
@property (nonatomic,readonly) BOOL allowPartialSendsToSucceed; 
@property (nonatomic,readonly) BOOL canUseLargePayload; 
@property (nonatomic,readonly) BOOL wantsPhoneNumberAccount; 
@property (nonatomic,readonly) BOOL iCloudBasedService; 
@property (nonatomic,readonly) BOOL tunnelService; 
@property (nonatomic,readonly) BOOL shouldAutoRegisterAllHandles; 
@property (nonatomic,readonly) BOOL shouldRegisterUsingDSHandle; 
@property (nonatomic,retain,readonly) NSDictionary * properties;                        //@synthesize serviceProperties=_serviceProperties - In the implementation block
@property (nonatomic,retain,readonly) NSString * preferencesDomain; 
@property (nonatomic,retain,readonly) NSString * legacyIdentifier; 
@property (nonatomic,retain,readonly) NSString * legacyPreferencesDomain; 
@property (nonatomic,retain,readonly) NSArray * linkedServices; 
@property (nonatomic,retain,readonly) NSArray * adHocServices; 
@property (nonatomic,readonly) unsigned adHocServiceType; 
@property (nonatomic,retain,readonly) NSArray * duetIdentifiers; 
-(BOOL)shouldRegisterUsingDSHandle;
-(NSString *)launchDarwinNotification;
-(unsigned)adHocServiceType;
-(NSArray *)linkedServices;
-(BOOL)wantsPhoneNumberAccount;
-(NSArray *)adHocServices;
-(NSString *)preferencesDomain;
-(NSString *)legacyPreferencesDomain;
-(BOOL)iCloudBasedService;
-(NSString *)queryService;
-(BOOL)shouldAutoRegisterAllHandles;
-(BOOL)shouldShowUsageNotifications;
-(BOOL)tunnelService;
-(BOOL)allowLocalDelivery;
-(BOOL)allowWiProxDelivery;
-(BOOL)canUseLargePayload;
-(BOOL)allowPartialSendsToSucceed;
-(NSArray *)duetIdentifiers;
-(id)initWithServiceDictionary:(id)arg1 ;
-(BOOL)allowMagnetDelivery;
-(NSString *)legacyIdentifier;
-(NSString *)protocolName;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(NSString *)displayName;
-(NSDictionary *)properties;
-(NSString *)pushTopic;
-(NSString *)serviceName;
@end
