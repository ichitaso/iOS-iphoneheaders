/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSData, NSURL, NSString;

@interface SAUIURLData : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSData * data; 
@property (nonatomic,copy) NSURL * uri; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)uRLData;
+(id)uRLDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSURL *)uri;
-(id)encodedClassName;
-(void)setUri:(NSURL *)arg1 ;
@end
