/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OITSUNoCopyDictionary, NSMutableArray;

@interface OITSULRUCache : NSObject {

	OITSUNoCopyDictionary* mData;
	NSMutableArray* mOrderedKeys;
	unsigned long long mMax;
	id mCallbackTarget;
	SEL mCallback;

}

@property (nonatomic,readonly) unsigned long long maxSize; 
-(id)allKeys;
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(unsigned long long)maxSize;
-(id)allValues;
-(void)p_removeOldestObject;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)clearEvictionCallbackTarget;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end
