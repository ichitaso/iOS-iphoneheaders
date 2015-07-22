/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSMutableArray;

@interface MBSAccount : PBCodable {

	NSString* _accountID;
	NSMutableArray* _backupUDIDs;
	BOOL _loggingEnabled;
	SCD_Struct_MB4 _has;

}

@property (nonatomic,readonly) BOOL hasAccountID; 
@property (nonatomic,retain) NSString * accountID;                      //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) NSMutableArray * backupUDIDs;              //@synthesize backupUDIDs=_backupUDIDs - In the implementation block
@property (assign,nonatomic) BOOL hasLoggingEnabled; 
@property (assign,nonatomic) BOOL loggingEnabled;                       //@synthesize loggingEnabled=_loggingEnabled - In the implementation block
-(NSMutableArray *)backupUDIDs;
-(unsigned long long)backupUDIDsCount;
-(BOOL)hasLoggingEnabled;
-(void)setBackupUDIDs:(NSMutableArray *)arg1 ;
-(void)addBackupUDID:(id)arg1 ;
-(BOOL)hasAccountID;
-(void)clearBackupUDIDs;
-(id)backupUDIDAtIndex:(unsigned long long)arg1 ;
-(void)setHasLoggingEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)loggingEnabled;
-(void)setLoggingEnabled:(BOOL)arg1 ;
@end
