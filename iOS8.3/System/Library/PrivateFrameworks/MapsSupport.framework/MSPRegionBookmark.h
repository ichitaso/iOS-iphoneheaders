/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:22:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MapsSupport/NSCopying.h>

@class PBUnknownFields, GEOMapRegion, NSString;

@interface MSPRegionBookmark : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOMapRegion* _region;
	NSString* _title;

}

@property (nonatomic,readonly) char hasRegion; 
@property (nonatomic,retain) GEOMapRegion * region;                          //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) char hasTitle; 
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRegion:(GEOMapRegion *)arg1 ;
-(GEOMapRegion *)region;
-(char)hasTitle;
-(PBUnknownFields *)unknownFields;
-(char)hasRegion;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
