/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAAceSerializable.h>
#import <SAObjects/SAAceCommand.h>
#import <SAObjects/SAClientBoundCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSArray;

@interface SAAceDeferredObject : SABaseCommand <SAAceSerializable, SAAceCommand, SAClientBoundCommand, SAServerBoundCommand>

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,retain) id<SAAceSerializable> value; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
+(id)aceDeferredObject;
+(id)aceDeferredObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setValue:(id<SAAceSerializable>)arg1 ;
-(id<SAAceSerializable>)value;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSArray *)callbacks;
-(void)setCallbacks:(NSArray *)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)appId;
-(void)setAppId:(NSString *)arg1 ;
@end
