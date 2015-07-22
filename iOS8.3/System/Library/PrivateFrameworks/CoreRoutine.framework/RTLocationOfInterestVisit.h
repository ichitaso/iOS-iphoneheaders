/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:14:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <CoreRoutine/NSCopying.h>
#import <CoreRoutine/NSSecureCoding.h>
#import <CoreRoutine/RTMapAndTableRowItem.h>

@class NSDate, NSString;

@interface RTLocationOfInterestVisit : NSObject <NSCopying, NSSecureCoding, RTMapAndTableRowItem> {

	NSDate* _entryTime;
	NSDate* _exitTime;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * entryTime;                  //@synthesize entryTime=_entryTime - In the implementation block
@property (nonatomic,readonly) NSDate * exitTime;                   //@synthesize exitTime=_exitTime - In the implementation block
+(char)supportsSecureCoding;
-(void)populateSubtitleStyleCell:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localizedDescription;
-(NSDate *)entryTime;
-(NSDate *)exitTime;
-(char)_enteredAndExitedOnSameDay;
-(id)localizedTimeDetail;
-(id)localizedDateDetail;
-(id)initWithEntryTime:(id)arg1 exitTime:(id)arg2 ;
@end
