/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject, NSMutableDictionary;

@interface TSPDocumentResourceCache : NSObject {

	NSURL* _cacheURL;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _entries;
	long long _maxCacheSizeInBytes;

}

@property (assign,nonatomic) long long maxCacheSizeInBytes;              //@synthesize maxCacheSizeInBytes=_maxCacheSizeInBytes - In the implementation block
+(id)defaultCacheURL;
+(id)sharedCache;
-(char)cacheDocumentResourceDigestString:(id)arg1 extension:(id)arg2 sourceURL:(id)arg3 fileSize:(long long)arg4 wasDownloaded:(char)arg5 ;
-(id)initWithCacheURL:(id)arg1 ;
-(void)reloadEntries;
-(id)entryForDigestString:(id)arg1 ;
-(void)shrinkCacheWithMaxCacheSizeInBytes:(long long)arg1 ;
-(void)enumerateEntriesFromCacheURLWithHandler:(/*^block*/id)arg1 ;
-(id)URLForDocumentResourceDigestString:(id)arg1 ;
-(char)beginDocumentResourceAccessForDigestString:(id)arg1 ;
-(void)endDocumentResourceAccessForDigestString:(id)arg1 ;
-(void)shrinkCache;
-(long long)maxCacheSizeInBytes;
-(void)setMaxCacheSizeInBytes:(long long)arg1 ;
-(id)init;
-(void)clearCache;
@end
