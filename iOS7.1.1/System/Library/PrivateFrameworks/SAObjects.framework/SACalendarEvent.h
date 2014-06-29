/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSURL, NSDate, NSNumber, NSString;

@interface SACalendarEvent : SADomainObject

@property (nonatomic,copy) NSArray * alerts; 
@property (assign,nonatomic) bool allDay; 
@property (nonatomic,copy) NSArray * attendees; 
@property (nonatomic,copy) NSURL * calendarId; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,retain) NSNumber * includeRecurrences; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSArray * participants; 
@property (nonatomic,retain) NSNumber * readOnly; 
@property (nonatomic,copy) NSArray * recurrences; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * title; 
+(id)event;
+(id)eventWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setAllDay:(bool)arg1 ;
-(id)attendees;
-(id)notes;
-(void)setNotes:(id)arg1 ;
-(void)setAttendees:(id)arg1 ;
-(bool)allDay;
-(id)groupIdentifier;
-(void)setParticipants:(id)arg1 ;
-(id)participants;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)location;
-(id)readOnly;
-(id)startDate;
-(id)endDate;
-(void)setStartDate:(id)arg1 ;
-(void)setEndDate:(id)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)alerts;
-(void)setAlerts:(id)arg1 ;
-(id)calendarId;
-(void)setCalendarId:(id)arg1 ;
-(id)includeRecurrences;
-(void)setIncludeRecurrences:(id)arg1 ;
-(id)recurrences;
-(void)setRecurrences:(id)arg1 ;
-(id)timeZoneId;
-(void)setTimeZoneId:(id)arg1 ;
-(void)setLocation:(id)arg1 ;
-(void)setReadOnly:(id)arg1 ;
@end
