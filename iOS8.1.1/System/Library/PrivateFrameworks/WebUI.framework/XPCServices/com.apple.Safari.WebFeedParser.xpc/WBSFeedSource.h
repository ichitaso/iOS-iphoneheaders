/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:57 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/XPCServices/com.apple.Safari.WebFeedParser.xpc/com.apple.Safari.WebFeedParser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSURL, NSArray, NSString;

@interface WBSFeedSource : NSObject {

	BOOL _subscribedWhenSyncWasOff;
	NSURL* _sourceURL;
	NSURL* _feedURL;
	NSArray* _siteIconURLs;
	long long _state;
	NSString* _title;

}

@property (nonatomic,readonly) NSURL * sourceURL;                        //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) NSURL * feedURL;                          //@synthesize feedURL=_feedURL - In the implementation block
@property (nonatomic,readonly) NSArray * siteIconURLs;                   //@synthesize siteIconURLs=_siteIconURLs - In the implementation block
@property (nonatomic,readonly) long long state;                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (assign,nonatomic) BOOL subscribedWhenSyncWasOff;              //@synthesize subscribedWhenSyncWasOff=_subscribedWhenSyncWasOff - In the implementation block
-(NSURL *)sourceURL;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)state;
-(NSString *)title;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(NSURL *)feedURL;
-(id)initFromDictionaryRepresentation:(id)arg1 ;
-(BOOL)subscribedWhenSyncWasOff;
-(void)setSubscribedWhenSyncWasOff:(BOOL)arg1 ;
-(id)dictionaryRepresentationForSyncing;
-(id)initWithFeedURL:(id)arg1 sourceURL:(id)arg2 siteIconURLs:(id)arg3 title:(id)arg4 state:(long long)arg5 ;
-(BOOL)isEqualIgnoringTitle:(id)arg1 ;
-(NSArray *)siteIconURLs;
@end
