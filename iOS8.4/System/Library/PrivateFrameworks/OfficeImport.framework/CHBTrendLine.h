/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHBTrendLine : NSObject
+(int)edTrendLineTypeFrom:(int)arg1 order:(int)arg2 ;
+(id)readTrendlineGraphicProperties:(const XlChartSeriesFormat*)arg1 forStyleIndex:(unsigned long long)arg2 state:(id)arg3 ;
+(int)xlTrendLineRegressionTypeFrom:(int)arg1 ;
+(void)readFrom:(XlChartTrendLine*)arg1 toSeries:(id)arg2 state:(id)arg3 ;
@end
