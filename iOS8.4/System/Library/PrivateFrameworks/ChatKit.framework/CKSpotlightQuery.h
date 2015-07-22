/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/SPDaemonQueryDelegate.h>

@protocol OS_dispatch_group;
@class SPDaemonQueryToken, SPSearchResultSection, NSMutableDictionary, NSObject;

@interface CKSpotlightQuery : NSObject <SPDaemonQueryDelegate> {

	SPDaemonQueryToken* _queryToken;
	unsigned long long _resultIndex;
	SPSearchResultSection* _searchResults;
	NSMutableDictionary* _chatGUIDToLatestSearchResult;
	NSObject*<OS_dispatch_group> _searchResultLoadingGroup;
	/*^block*/id _completion;
	BOOL _processing;
	BOOL _cancelled;

}

@property (nonatomic,copy) id completion;              //@synthesize completion=_completion - In the implementation block
-(void)cancel;
-(void)dealloc;
-(void)_cleanup;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(id)initWithSearchText:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_callCompletionIfNecessary;
-(void)_processSearchResults;
-(void)searchDaemonQuery:(id)arg1 addedResults:(id)arg2 ;
-(void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2 ;
-(void)searchDaemonQueryReset:(id)arg1 ;
-(void)searchDaemonQueryCompleted:(id)arg1 ;
@end
