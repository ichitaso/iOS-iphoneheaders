/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray, GEOLocation, GEOPlaceSearchRequest;

@interface GEOWaypoint : PBCodable <NSCopying> {

	NSMutableArray* _entryPoints;
	GEOLocation* _location;
	GEOPlaceSearchRequest* _placeSearchRequest;

}

@property (nonatomic,readonly) BOOL hasPlaceSearchRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * placeSearchRequest;              //@synthesize placeSearchRequest=_placeSearchRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location;                                  //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSMutableArray * entryPoints;                            //@synthesize entryPoints=_entryPoints - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOLocation *)location;
-(id)dictionaryRepresentation;
-(void)setPlaceSearchRequest:(GEOPlaceSearchRequest *)arg1 ;
-(BOOL)hasPlaceSearchRequest;
-(GEOPlaceSearchRequest *)placeSearchRequest;
-(unsigned long long)entryPointsCount;
-(NSMutableArray *)entryPoints;
-(void)setEntryPoints:(NSMutableArray *)arg1 ;
-(void)addEntryPoint:(id)arg1 ;
-(void)clearEntryPoints;
-(id)entryPointAtIndex:(unsigned long long)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLocation;
@end
