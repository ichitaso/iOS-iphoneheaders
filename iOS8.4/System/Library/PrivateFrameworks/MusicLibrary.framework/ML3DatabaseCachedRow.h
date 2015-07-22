/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3DatabaseRow.h>

@class NSArray;

@interface ML3DatabaseCachedRow : ML3DatabaseRow {

	NSArray* _arrayRepresentation;

}
-(id)initWithArray:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)columnCount;
-(long long)int64ForColumnIndex:(unsigned long long)arg1 ;
-(id)numberForColumnIndex:(unsigned long long)arg1 ;
-(id)stringForColumnIndex:(unsigned long long)arg1 ;
-(int)intForColumnIndex:(unsigned long long)arg1 ;
-(id)dataForColumnIndex:(unsigned long long)arg1 ;
-(double)doubleForColumnIndex:(unsigned long long)arg1 ;
-(void)getBlobBytes:(const void*)arg1 outLength:(int*)arg2 forColumnIndex:(unsigned long long)arg3 ;
-(id)valueForColumnIndex:(unsigned long long)arg1 ;
-(id)stringForColumnName:(id)arg1 ;
-(id)initWithParentResult:(id)arg1 ;
-(id)arrayRepresentation;
-(const char*)cStringForColumnIndex:(unsigned long long)arg1 ;
-(id)valueForColumnName:(id)arg1 ;
-(id)dataForColumnName:(id)arg1 ;
-(double)doubleForColumnName:(id)arg1 ;
-(int)intForColumnName:(id)arg1 ;
-(long long)int64ForColumnName:(id)arg1 ;
-(const char*)cStringForColumnName:(id)arg1 ;
-(id)numberForColumnName:(id)arg1 ;
-(void)getBlobBytes:(const void*)arg1 outLength:(int*)arg2 forColumnName:(id)arg3 ;
-(id)_numberOrZeroForColumnIndex:(unsigned long long)arg1 ;
@end
