/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:21:24 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebHistoryPrivate, NSArray;

@interface WebHistory : NSObject {

	WebHistoryPrivate* _historyPrivate;

}

@property (nonatomic,copy,readonly) NSArray * orderedLastVisitedDays; 
@property (assign,nonatomic) int historyItemLimit; 
@property (assign,nonatomic) int historyAgeInDaysLimit; 
+(id)optionalSharedHistory;
+(void)setOptionalSharedHistory:(id)arg1 ;
+(void)_setVisitedLinkTrackingEnabled:(char)arg1 ;
+(void)_removeAllVisitedLinks;
-(void)removeItems:(id)arg1 ;
-(void)removeAllItems;
-(id)_data;
-(void)dealloc;
-(id)init;
-(void)addItems:(id)arg1 ;
-(id)allItems;
-(char)containsURL:(id)arg1 ;
-(void)finalize;
-(void)_addVisitedLinksToPageGroup:(PageGroup*)arg1 ;
-(void)_visitedURL:(id)arg1 withTitle:(id)arg2 method:(id)arg3 wasFailure:(char)arg4 ;
-(id)_itemForURLString:(id)arg1 ;
-(void)_sendNotification:(id)arg1 entries:(id)arg2 ;
-(int)historyAgeInDaysLimit;
-(int)historyItemLimit;
-(NSArray *)orderedLastVisitedDays;
-(id)orderedItemsLastVisitedOnDay:(id)arg1 ;
-(void)setHistoryAgeInDaysLimit:(int)arg1 ;
-(void)setHistoryItemLimit:(int)arg1 ;
-(char)saveToURL:(id)arg1 error:(id*)arg2 ;
-(void)timeZoneChanged:(id)arg1 ;
-(char)loadFromURL:(id)arg1 error:(id*)arg2 ;
-(id)itemForURL:(id)arg1 ;
@end

