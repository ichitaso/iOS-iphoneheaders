/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <SiriUI/SiriUIReviewsViewController.h>
#import <Movies/SiriUIReviewsViewControllerDelegate.h>

@class SAMovieV2ReviewListSnippet, NSString;

@interface SiriMoviesReviewsViewController : SiriUIReviewsViewController <SiriUIReviewsViewControllerDelegate> {

	SAMovieV2ReviewListSnippet* _snippet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMovieReviewListSnippet:(id)arg1 ;
-(double)_minCellWidth;
@end
