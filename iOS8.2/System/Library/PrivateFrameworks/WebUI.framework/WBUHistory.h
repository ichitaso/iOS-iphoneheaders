/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:26 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WBSHistory.h>

@interface WBUHistory : WBSHistory
-(id)init;
-(Class)_historyItemClass;
-(id)_createHistoryStore;
-(void)_removeAllVisitedLinks;
-(void)_addVisitedLinksForItemsIfNeeded:(id)arg1 ;
-(char)historyStoreShouldCheckDatabaseIntegrity:(id)arg1 ;
-(void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1 ;
@end
