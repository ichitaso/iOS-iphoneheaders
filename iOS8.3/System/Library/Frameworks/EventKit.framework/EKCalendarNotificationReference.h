/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:46:18 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <EventKit/EventKit-Structs.h>
@class NSDate, EKEventStore, EKCalendarNotification;

@interface EKCalendarNotificationReference : NSObject {

	SCD_Struct_EK14 _objectID;
	NSDate* _date;
	EKEventStore* _eventStore;
	EKCalendarNotification* _notification;
	int _type;

}

@property (nonatomic,readonly) int type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) EKCalendarNotification * notification; 
-(id)initWithType:(int)arg1 objectID:(SCD_Struct_EK14)arg2 date:(id)arg3 eventStore:(id)arg4 ;
-(id)initWithType:(int)arg1 objectID:(SCD_Struct_EK14)arg2 eventStore:(id)arg3 ;
-(int)_notificationTypeForResourceChange:(id)arg1 notificationType:(int)arg2 ;
-(void)dealloc;
-(id)description;
-(EKCalendarNotification *)notification;
-(int)type;
@end
