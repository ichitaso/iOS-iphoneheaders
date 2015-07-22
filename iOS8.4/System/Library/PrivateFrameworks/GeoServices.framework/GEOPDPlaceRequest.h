/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <GeoServices/NSCopying.h>

@class GEOPDAnalyticMetadata, GEOPDClientMetadata, NSMutableArray, GEOPDPlaceRequestParameters;

@interface GEOPDPlaceRequest : PBRequest <NSCopying> {

	GEOPDAnalyticMetadata* _analyticMetadata;
	GEOPDClientMetadata* _clientMetadata;
	NSMutableArray* _displayLocales;
	GEOPDPlaceRequestParameters* _placeRequestParameters;
	int _requestType;
	NSMutableArray* _requestedComponents;
	NSMutableArray* _spokenLocales;
	BOOL _suppressResultsRequiringAttribution;
	SCD_Struct_GE6 _has;

}

@property (nonatomic,readonly) BOOL hasAnalyticMetadata; 
@property (nonatomic,retain) GEOPDAnalyticMetadata * analyticMetadata;                          //@synthesize analyticMetadata=_analyticMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) GEOPDClientMetadata * clientMetadata;                              //@synthesize clientMetadata=_clientMetadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * displayLocales;                                   //@synthesize displayLocales=_displayLocales - In the implementation block
@property (nonatomic,retain) NSMutableArray * spokenLocales;                                    //@synthesize spokenLocales=_spokenLocales - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestedComponents;                              //@synthesize requestedComponents=_requestedComponents - In the implementation block
@property (assign,nonatomic) BOOL hasSuppressResultsRequiringAttribution; 
@property (assign,nonatomic) BOOL suppressResultsRequiringAttribution;                          //@synthesize suppressResultsRequiringAttribution=_suppressResultsRequiringAttribution - In the implementation block
@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType;                                                   //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceRequestParameters; 
@property (nonatomic,retain) GEOPDPlaceRequestParameters * placeRequestParameters;              //@synthesize placeRequestParameters=_placeRequestParameters - In the implementation block
-(id)initWithMUIDs:(id)arg1 resultProviderID:(int)arg2 includeETA:(BOOL)arg3 traits:(id)arg4 ;
-(id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2 ;
-(BOOL)isForwardGeocoderRequest;
-(id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithReverseGeocodeCoordinate:(SCD_Struct_GE15)arg1 includeEntryPoints:(BOOL)arg2 includeETA:(BOOL)arg3 traits:(id)arg4 ;
-(id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5 traits:(id)arg6 ;
-(id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 maxResults:(unsigned)arg5 suppressResultsRequiringAttribution:(BOOL)arg6 includeETA:(BOOL)arg7 traits:(id)arg8 ;
-(id)initWithCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2 ;
-(id)initWithCoordinateHint:(SCD_Struct_GE15)arg1 addressHint:(id)arg2 placeNameHint:(id)arg3 traits:(id)arg4 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE15)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 maxResults:(unsigned)arg5 traits:(id)arg6 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE15)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)initWithAutocompleteFragment:(id)arg1 type:(int)arg2 traits:(id)arg3 ;
-(id)initWithTraits:(id)arg1 count:(unsigned)arg2 includeETA:(BOOL)arg3 includeEntryPoints:(BOOL)arg4 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setHasRequestType:(BOOL)arg1 ;
-(BOOL)hasRequestType;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(void)setDisplayLocales:(NSMutableArray *)arg1 ;
-(void)setSpokenLocales:(NSMutableArray *)arg1 ;
-(void)setRequestedComponents:(NSMutableArray *)arg1 ;
-(void)setPlaceRequestParameters:(GEOPDPlaceRequestParameters *)arg1 ;
-(void)addDisplayLocale:(id)arg1 ;
-(void)addSpokenLocale:(id)arg1 ;
-(void)addRequestedComponent:(id)arg1 ;
-(unsigned long long)displayLocalesCount;
-(void)clearDisplayLocales;
-(id)displayLocaleAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)spokenLocalesCount;
-(void)clearSpokenLocales;
-(id)spokenLocaleAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)requestedComponentsCount;
-(void)clearRequestedComponents;
-(id)requestedComponentAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAnalyticMetadata;
-(BOOL)hasClientMetadata;
-(void)setSuppressResultsRequiringAttribution:(BOOL)arg1 ;
-(void)setHasSuppressResultsRequiringAttribution:(BOOL)arg1 ;
-(BOOL)hasSuppressResultsRequiringAttribution;
-(BOOL)hasPlaceRequestParameters;
-(GEOPDAnalyticMetadata *)analyticMetadata;
-(GEOPDClientMetadata *)clientMetadata;
-(NSMutableArray *)displayLocales;
-(NSMutableArray *)spokenLocales;
-(NSMutableArray *)requestedComponents;
-(BOOL)suppressResultsRequiringAttribution;
-(GEOPDPlaceRequestParameters *)placeRequestParameters;
-(void)setRequestType:(int)arg1 ;
-(int)requestType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
