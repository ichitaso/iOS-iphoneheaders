/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:31 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, NSString, SALocalSearchRating, NSArray, NSNumber;

@interface SALocalSearchReviewList : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * providerId; 
@property (nonatomic,copy) NSString * providerId2; 
@property (nonatomic,retain) SALocalSearchRating * rating; 
@property (nonatomic,copy) NSArray * selectReviews; 
@property (nonatomic,copy) NSNumber * totalReviewCount; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reviewListWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)reviewList;
-(id)groupIdentifier;
-(void)setRating:(SALocalSearchRating *)arg1 ;
-(SALocalSearchRating *)rating;
-(void)setProviderId:(NSURL *)arg1 ;
-(NSURL *)providerId;
-(id)encodedClassName;
-(NSString *)providerId2;
-(void)setProviderId2:(NSString *)arg1 ;
-(NSArray *)selectReviews;
-(void)setSelectReviews:(NSArray *)arg1 ;
-(NSNumber *)totalReviewCount;
-(void)setTotalReviewCount:(NSNumber *)arg1 ;
@end
