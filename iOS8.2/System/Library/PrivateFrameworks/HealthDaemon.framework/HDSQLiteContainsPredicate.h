/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:12 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePropertyPredicate.h>
#import <HealthDaemon/NSCopying.h>

@class HDSQLiteQuery, NSString, NSArray;

@interface HDSQLiteContainsPredicate : HDSQLitePropertyPredicate <NSCopying> {

	char _negative;
	HDSQLiteQuery* _query;
	NSString* _queryProperty;
	id _values;

}

@property (getter=isNegative,nonatomic,readonly) char negative;              //@synthesize negative=_negative - In the implementation block
@property (nonatomic,readonly) HDSQLiteQuery * query;                        //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) NSString * queryProperty;                     //@synthesize queryProperty=_queryProperty - In the implementation block
@property (nonatomic,readonly) NSArray * values;                             //@synthesize values=_values - In the implementation block
+(id)containsPredicateWithProperty:(id)arg1 values:(id)arg2 ;
+(id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3 ;
+(id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2 ;
-(char)isNegative;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(HDSQLiteQuery *)query;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)values;
-(char)isCompatibleWithPredicate:(id)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
-(NSString *)queryProperty;
@end

