/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:25 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/DataClassMigrators/Accounts.migrator/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface ACAccountsMigrator : DataClassMigrator
-(void)_removeMultipleTencentWeiboAccounts;
-(void)_removeAccountsPlist;
-(id)_oldAccountsPlistPath;
-(id)dataClassName;
-(BOOL)performMigration;
-(float)estimatedDuration;
-(float)migrationProgress;
@end
