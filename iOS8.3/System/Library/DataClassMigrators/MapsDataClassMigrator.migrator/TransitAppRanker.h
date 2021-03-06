/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:26:48 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsDataClassMigrator/NSCoding.h>

@class NSMutableArray;

@interface TransitAppRanker : NSObject <NSCoding> {

	NSMutableArray* _rankings;

}

@property (nonatomic,retain) NSMutableArray * rankings;              //@synthesize rankings=_rankings - In the implementation block
-(id)initWithRecentlyLaunchedApps:(id)arg1 ;
-(id)rankApps:(id)arg1 ;
-(void)recordAppLaunch:(id)arg1 ;
-(id)recentlyLaunchedApps;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSMutableArray *)rankings;
-(void)setRankings:(NSMutableArray *)arg1 ;
@end

