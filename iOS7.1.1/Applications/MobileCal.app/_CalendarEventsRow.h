/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface _CalendarEventsRow : NSObject {

	NSMutableArray* _blocks;
	int _occupyingDays;
	unsigned _startDate;

}
-(void)addOccurrenceBlock:(id)arg1 ;
-(BOOL)isFilledForDay:(unsigned)arg1 ;
-(unsigned)spaceGapFor:(id)arg1 ;
-(id)occurrenceBlocks;
-(id)init;
-(void).cxx_destruct;
@end
