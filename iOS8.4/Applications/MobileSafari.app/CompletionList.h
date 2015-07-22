/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/CompletionProviderDelegate.h>
#import <MobileSafari/UniversalSearchCompletionProviderDelegate.h>

@protocol CompletionListDelegate, WBSCompletionListItem;
@class WBSCompletionQuery, NSArray, URLCompletionProvider, SearchSuggestionProvider, ReadingListCompletionProvider, FindOnPageCompletionProvider, UniversalSearchCompletionProvider, QuickWebsiteSearchCompletionProvider, NSDate, NSTimer, CompletionListGroup, NSString, WBSBookmarkAndHistoryCompletionMatch, WBSParsecSearchSession, WBSParsecSearchResult;

@interface CompletionList : NSObject <CompletionProviderDelegate, UniversalSearchCompletionProviderDelegate> {

	WBSCompletionQuery* _query;
	unsigned _inputTypeOfStringToComplete;
	NSArray* _groups;
	URLCompletionProvider* _URLCompletionProvider;
	SearchSuggestionProvider* _suggestionProvider;
	ReadingListCompletionProvider* _readingListProvider;
	FindOnPageCompletionProvider* _findOnPageProvider;
	UniversalSearchCompletionProvider* _universalSearchProvider;
	QuickWebsiteSearchCompletionProvider* _quickWebsiteSearchProvider;
	NSDate* _nextAllowedUpdateTime;
	NSDate* _showPartialCompletionsTime;
	NSDate* _universalSearchRenderTimeoutTime;
	NSDate* _universalSearchOtherRenderTimeoutTime;
	int _universalSearchRenderTimeout;
	int _universalSearchOtherRenderTimeout;
	char _shouldShowUniversalSearchResultsOnSubsequentPass;
	NSTimer* _updateTimer;
	CompletionListGroup* _findOnPageGroup;
	NSString* _stringMatchedByTopHit;
	NSString* _matchingStringInTopHit;
	WBSBookmarkAndHistoryCompletionMatch* _topHit;
	char _shouldIncludeSearchSuggestions;
	char _networkIsReachable;
	WBSParsecSearchSession* _parsecSearchSession;
	id<CompletionListDelegate> _delegate;
	unsigned _maximumCompletionsPerGroup;
	WBSParsecSearchResult* _hiddenParsecResult;
	id<WBSCompletionListItem> _completionListItemHidingParsecResult;

}

@property (nonatomic,retain) WBSParsecSearchSession * parsecSearchSession;                                  //@synthesize parsecSearchSession=_parsecSearchSession - In the implementation block
@property (assign,nonatomic,__weak) id<CompletionListDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char shouldIncludeSearchSuggestions;                                           //@synthesize shouldIncludeSearchSuggestions=_shouldIncludeSearchSuggestions - In the implementation block
@property (nonatomic,readonly) char hasCompletions; 
@property (assign,nonatomic) unsigned maximumCompletionsPerGroup;                                           //@synthesize maximumCompletionsPerGroup=_maximumCompletionsPerGroup - In the implementation block
@property (assign,nonatomic) char networkIsReachable;                                                       //@synthesize networkIsReachable=_networkIsReachable - In the implementation block
@property (nonatomic,readonly) unsigned findOnPageGroupIndex; 
@property (nonatomic,readonly) WBSParsecSearchResult * hiddenParsecResult;                                  //@synthesize hiddenParsecResult=_hiddenParsecResult - In the implementation block
@property (nonatomic,readonly) id<WBSCompletionListItem> completionListItemHidingParsecResult;              //@synthesize completionListItemHidingParsecResult=_completionListItemHidingParsecResult - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)networkIsReachable;
-(void)stopCompleting;
-(void)universalSearchCompletionProvider:(id)arg1 didFinishQuery:(id)arg2 ;
-(void)completionProvider:(id)arg1 didFinishCompletingString:(id)arg2 ;
-(void)completionProviderDidFail:(id)arg1 ;
-(void)_invalidateUpdateTimer;
-(id)_groupWithTitle:(id)arg1 completions:(id)arg2 maximumCompletions:(unsigned)arg3 ;
-(id)_groupWithTitle:(id)arg1 completions:(id)arg2 ;
-(id)_groupsOnUnreachableNetworkForString:(id)arg1 ;
-(char)_shouldFetchSearchSuggestions;
-(id)_recentSearchesForString:(id)arg1 ;
-(void)_removeSearchURLsFromCompletions:(id)arg1 ;
-(char)_urlString:(id)arg1 isProbablyContainedIn:(id)arg2 ;
-(id)_completionsByMergingRecentSearches:(id)arg1 withSuggestions:(id)arg2 andLiteralSearch:(id)arg3 ;
-(id)_titleForFindOnPageHeaderWithMatchCount:(unsigned)arg1 ;
-(id)_groupsForQuery:(id)arg1 allowPartialCompletions:(char)arg2 findOnPageGroup:(id*)arg3 topHit:(id*)arg4 topHitReady:(char*)arg5 ;
-(void)_scheduleUpdateOnOrBeforeDate:(id)arg1 withCurrentDate:(id)arg2 ;
-(void)_updateProviders;
-(char)_topHitMatchesString:(id)arg1 ;
-(id)initWithParsecSearchSession:(id)arg1 ;
-(void)_removeCompletionsWithAddressInSet:(id)arg1 fromArray:(id)arg2 andTruncateTo:(unsigned)arg3 ;
-(id)topHitForString:(id)arg1 ;
-(char)isTopHitReadyForString:(id)arg1 ;
-(id)titleForGroupAtIndex:(unsigned)arg1 ;
-(id)completionsForGroupAtIndex:(unsigned)arg1 ;
-(id)headerViewReuseIdentifierForGroupAtIndex:(unsigned)arg1 ;
-(id)headerViewForGroupAtIndex:(unsigned)arg1 ;
-(void)configureHeaderView:(id)arg1 forGroupAtIndex:(unsigned)arg2 ;
-(char)hasCompletions;
-(void)setMaximumCompletionsPerGroup:(unsigned)arg1 ;
-(void)setNetworkIsReachable:(char)arg1 ;
-(void)setShouldIncludeSearchSuggestions:(char)arg1 ;
-(void)clearCachedSearches;
-(unsigned)findOnPageGroupIndex;
-(char)shouldIncludeSearchSuggestions;
-(unsigned)maximumCompletionsPerGroup;
-(id<WBSCompletionListItem>)completionListItemHidingParsecResult;
-(void)dealloc;
-(void)setDelegate:(id<CompletionListDelegate>)arg1 ;
-(id<CompletionListDelegate>)delegate;
-(void)_update;
-(void)setQuery:(id)arg1 ;
-(void)_updateTimerFired:(id)arg1 ;
-(void)_setNeedsUpdate;
-(unsigned)numberOfGroups;
-(WBSParsecSearchSession *)parsecSearchSession;
-(void)setParsecSearchSession:(WBSParsecSearchSession *)arg1 ;
-(WBSParsecSearchResult *)hiddenParsecResult;
@end
