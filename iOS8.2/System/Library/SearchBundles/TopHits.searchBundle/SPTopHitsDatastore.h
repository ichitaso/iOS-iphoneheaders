/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/SearchBundles/TopHits.searchBundle/TopHits
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TopHits/TopHits-Structs.h>
#import <TopHits/SPSearchDatastore.h>

@class NSString;

@interface SPTopHitsDatastore : NSObject <SPSearchDatastore>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)searchDomains;
-(id)init;
-(id)resultForIdentifier:(id)arg1 domain:(unsigned)arg2 ;
-(id)displayIdentifierForDomain:(unsigned)arg1 ;
-(void)performQuery:(id)arg1 withResultsPipe:(id)arg2 ;
@end
