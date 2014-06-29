/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Microblog.siriUIBundle/Microblog
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Microblog/Microblog-Structs.h>
#import <Microblog/ACTwitterSnippetViewController.h>

@class SAMicroblogMicroblogSearchResultPost, ACTweetDetailContentView, ACTweetDetailStatsView, NSMutableArray;

@interface ACTweetDetailViewController : ACTwitterSnippetViewController {

	SAMicroblogMicroblogSearchResultPost* _tweet;
	ACTweetDetailContentView* _contentView;
	ACTweetDetailStatsView* _statsView;
	NSMutableArray* _imageCellViewArray;

}
-(bool)_showsStats;
-(long long)_sectionForCollectionViewIndex:(unsigned long long)arg1 ;
-(long long)_sectionForCollectionViewIndexPath:(id)arg1 ;
-(id)_imageViewAtIndexPath:(id)arg1 ;
-(bool)_seeMoreItemIsAtIndexPath:(id)arg1 ;
-(id)initWithSearchResultsSnippet:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void).cxx_destruct;
-(void)configureReusableHeaderView:(id)arg1 ;
-(Class)headerViewClass;
@end
