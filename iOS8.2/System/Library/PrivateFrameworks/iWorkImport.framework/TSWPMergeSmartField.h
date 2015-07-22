/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPPlaceholderSmartField.h>

@class NSString;

@interface TSWPMergeSmartField : TSWPPlaceholderSmartField {

	NSString* _property;
	NSString* _label;
	NSString* _key;
	int _category;
	char _requiresFollowingWhitespace;
	NSString* _whitespace;
	NSString* _guid;
	NSString* _tableField;

}

@property (nonatomic,copy) NSString * property;                             //@synthesize property=_property - In the implementation block
@property (nonatomic,copy) NSString * label;                                //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * key;                                  //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) int category;                                  //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) char requiresFollowingWhitespace;              //@synthesize requiresFollowingWhitespace=_requiresFollowingWhitespace - In the implementation block
@property (nonatomic,copy) NSString * whitespace;                           //@synthesize whitespace=_whitespace - In the implementation block
@property (nonatomic,copy) NSString * guid;                                 //@synthesize guid=_guid - In the implementation block
@property (nonatomic,copy) NSString * tableField;                           //@synthesize tableField=_tableField - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(int)smartFieldKind;
-(char)allowsPasteAsSmartField;
-(const PlaceholderSmartFieldArchive*)placeholderSmartFieldArchiveFromUnarchiver:(id)arg1 ;
-(id)scriptTag;
-(void)setRequiresFollowingWhitespace:(char)arg1 ;
-(void)setWhitespace:(NSString *)arg1 ;
-(void)setTableField:(NSString *)arg1 ;
-(char)requiresFollowingWhitespace;
-(NSString *)whitespace;
-(NSString *)tableField;
-(void)dealloc;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(int)category;
-(void)setCategory:(int)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)property;
-(void)setProperty:(NSString *)arg1 ;
-(NSString *)guid;
@end
