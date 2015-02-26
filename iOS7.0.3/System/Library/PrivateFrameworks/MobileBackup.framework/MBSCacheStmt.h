/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <backupd/backupd-Structs.h>
@class MBServiceCache, NSString;

@interface MBSCacheStmt : NSObject {

	MBServiceCache* _cache;
	NSString* _SQL;
	sqlite3_stmtRef _stmt;
	double _startTime;
	BOOL _reset;

}

@property (assign,getter=isReset,nonatomic) BOOL reset;              //@synthesize reset=_reset - In the implementation block
-(BOOL)isReset;
-(id)initWithCache:(id)arg1 SQL:(id)arg2 stmt:(sqlite3_stmtRef)arg3 ;
-(void)bindText:(id)arg1 atIndex:(int)arg2 ;
-(id)textColumn:(int)arg1 ;
-(long long)int64Column:(int)arg1 ;
-(id)blobColumn:(int)arg1 ;
-(void)bindInt64:(long long)arg1 atIndex:(int)arg2 ;
-(void)bindBlob:(id)arg1 atIndex:(int)arg2 ;
-(int)intColumn:(int)arg1 ;
-(void)bindInteger:(int)arg1 atIndex:(int)arg2 ;
-(void)bindInt:(int)arg1 atIndex:(int)arg2 ;
-(void)verifyEqualToStmt:(id)arg1 exceptColumnNumbers:(id)arg2 ;
-(int)typeOfColumn:(int)arg1 ;
-(double)doubleColumn:(int)arg1 ;
-(id)valueOfColumn:(int)arg1 ;
-(void)setReset:(BOOL)arg1 ;
-(void)dealloc;
-(void)reset;
-(int)columnCount;
-(BOOL)step;
@end
