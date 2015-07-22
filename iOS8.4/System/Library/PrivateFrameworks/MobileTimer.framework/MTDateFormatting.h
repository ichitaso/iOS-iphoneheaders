/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDateFormatter;

@interface MTDateFormatting : NSObject {

	NSString* _amString;
	NSString* _pmString;
	NSDateFormatter* _dateOnlyFormatter;
	NSDateFormatter* _timeOnlyFormatter;
	BOOL _use24HourTime;
	BOOL _timeDesignatorAppearsBeforeTime;

}

@property (nonatomic,readonly) NSString * amString; 
@property (nonatomic,readonly) NSString * pmString; 
@property (nonatomic,readonly) BOOL use24HourTime;                                //@synthesize use24HourTime=_use24HourTime - In the implementation block
@property (nonatomic,readonly) BOOL timeDesignatorAppearsBeforeTime;              //@synthesize timeDesignatorAppearsBeforeTime=_timeDesignatorAppearsBeforeTime - In the implementation block
+(id)sharedInstance;
+(void)load;
-(void)dealloc;
-(id)init;
-(BOOL)timeDesignatorAppearsBeforeTime;
-(BOOL)use24HourTime;
-(NSString *)amString;
-(NSString *)pmString;
-(void)_reloadLocaleInfo;
-(void)_clearLocaleDependentState;
-(id)_dateOnlyFormatter;
-(id)localizedTimeStringFromDate:(id)arg1 forTimeZone:(id)arg2 timeDesignator:(out id*)arg3 ;
-(id)_timeOnlyFormatter;
-(id)timeDesignatorForDate:(id)arg1 timeZone:(id)arg2 ;
-(id)localizedTimeStringFromDate:(id)arg1 timeDesignator:(out id*)arg2 ;
-(id)timeDesignatorForDate:(id)arg1 ;
@end
