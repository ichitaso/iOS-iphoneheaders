/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol SKUISearchFieldDelegate;
@class NSString, SKUIClientContext, SKUICompletionList, SSVLoadURLOperation, NSOperationQueue, SKUISearchDisplayController, UIViewController, UISearchBar;

@interface SKUISearchFieldController : NSObject <UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate> {

	NSString* _baseHintsURLString;
	SKUIClientContext* _clientContext;
	SKUICompletionList* _completionList;
	<SKUISearchFieldDelegate>* _delegate;
	SSVLoadURLOperation* _loadOperation;
	NSOperationQueue* _operationQueue;
	SKUISearchDisplayController* _searchDisplayController;
	long long _numberOfSearchResults;

}

@property (nonatomic,readonly) UIViewController * contentsController; 
@property (nonatomic,retain) SKUIClientContext * clientContext;                        //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) <SKUISearchFieldDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UISearchBar * searchBar; 
@property (assign,nonatomic) long long numberOfSearchResults;                          //@synthesize numberOfSearchResults=_numberOfSearchResults - In the implementation block
-(void)setSearchTerm:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(id)searchBar;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(void).cxx_destruct;
-(void)_reloadData;
-(id)clientContext;
-(void)_setResponse:(id)arg1 error:(id)arg2 ;
-(void)setNumberOfSearchResults:(long long)arg1 ;
-(void)_loadResultsForSearchTerm:(id)arg1 withMetricsEvent:(id)arg2 ;
-(void)_loadResultsForURL:(id)arg1 withMetricsEvent:(id)arg2 ;
-(id)contentsController;
-(bool)searchBarShouldBeginTouches:(id)arg1 ;
-(long long)numberOfSearchResults;
-(id)initWithContentsController:(id)arg1 ;
-(void)setClientContext:(id)arg1 ;
@end

