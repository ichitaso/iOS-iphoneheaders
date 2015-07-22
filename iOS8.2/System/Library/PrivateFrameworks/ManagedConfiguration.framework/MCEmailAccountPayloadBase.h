/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSData;

@interface MCEmailAccountPayloadBase : MCPayload {

	char _preventMove;
	char _preventAppSheet;
	char _SMIMEEnabled;
	char _isRecentsSyncingDisabled;
	char _SMIMEPerMessageSwitchEnabled;
	NSString* _SMIMESigningIdentityUUID;
	NSString* _SMIMEEncryptionIdentityUUID;
	NSData* _SMIMESigningIdentityPersistentID;
	NSData* _SMIMEEncryptionIdentityPersistentID;

}

@property (assign,nonatomic) char preventMove;                                                                                    //@synthesize preventMove=_preventMove - In the implementation block
@property (assign,nonatomic) char preventAppSheet;                                                                                //@synthesize preventAppSheet=_preventAppSheet - In the implementation block
@property (assign,setter=MIMEEnabled,nonatomic) char SMIMEEnabled;                                                                //@synthesize SMIMEEnabled=_SMIMEEnabled - In the implementation block
@property (assign,nonatomic) char isRecentsSyncingDisabled;                                                                       //@synthesize isRecentsSyncingDisabled=_isRecentsSyncingDisabled - In the implementation block
@property (setter=MIMESigningIdentityUUID,nonatomic,retain) NSString * SMIMESigningIdentityUUID;                                  //@synthesize SMIMESigningIdentityUUID=_SMIMESigningIdentityUUID - In the implementation block
@property (setter=MIMEEncryptionIdentityUUID,nonatomic,retain) NSString * SMIMEEncryptionIdentityUUID;                            //@synthesize SMIMEEncryptionIdentityUUID=_SMIMEEncryptionIdentityUUID - In the implementation block
@property (setter=MIMESigningIdentityPersistentID,nonatomic,retain) NSData * SMIMESigningIdentityPersistentID;                    //@synthesize SMIMESigningIdentityPersistentID=_SMIMESigningIdentityPersistentID - In the implementation block
@property (setter=MIMEEncryptionIdentityPersistentID,nonatomic,retain) NSData * SMIMEEncryptionIdentityPersistentID;              //@synthesize SMIMEEncryptionIdentityPersistentID=_SMIMEEncryptionIdentityPersistentID - In the implementation block
@property (assign,setter=MIMEPerMessageSwitchEnabled,nonatomic) char SMIMEPerMessageSwitchEnabled;                                //@synthesize SMIMEPerMessageSwitchEnabled=_SMIMEPerMessageSwitchEnabled - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(char)preventMove;
-(void)setPreventMove:(char)arg1 ;
-(char)preventAppSheet;
-(void)setPreventAppSheet:(char)arg1 ;
-(char)SMIMEEnabled;
-(void)setSMIMEEnabled:(char)arg1 ;
-(char)isRecentsSyncingDisabled;
-(void)setIsRecentsSyncingDisabled:(char)arg1 ;
-(NSString *)SMIMESigningIdentityUUID;
-(void)setSMIMESigningIdentityUUID:(NSString *)arg1 ;
-(NSString *)SMIMEEncryptionIdentityUUID;
-(void)setSMIMEEncryptionIdentityUUID:(NSString *)arg1 ;
-(NSData *)SMIMESigningIdentityPersistentID;
-(void)setSMIMESigningIdentityPersistentID:(NSData *)arg1 ;
-(NSData *)SMIMEEncryptionIdentityPersistentID;
-(void)setSMIMEEncryptionIdentityPersistentID:(NSData *)arg1 ;
-(char)SMIMEPerMessageSwitchEnabled;
-(void)setSMIMEPerMessageSwitchEnabled:(char)arg1 ;
@end
