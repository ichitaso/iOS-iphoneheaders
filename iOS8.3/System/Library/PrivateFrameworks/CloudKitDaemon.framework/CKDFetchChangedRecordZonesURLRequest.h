/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:18 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSMutableArray, NSData, CKRecordZoneID, NSArray;

@interface CKDFetchChangedRecordZonesURLRequest : CKDURLRequest {

	NSMutableArray* _changedZoneIDs;
	NSMutableArray* _deletedZoneIDs;
	unsigned _resultsLimit;
	NSData* _serverChangeTokenData;
	int _status;
	CKRecordZoneID* _recordZoneID;
	NSData* _previousServerChangeTokenData;

}

@property (assign,nonatomic) unsigned resultsLimit;                               //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,retain) NSData * serverChangeTokenData;                      //@synthesize serverChangeTokenData=_serverChangeTokenData - In the implementation block
@property (nonatomic,readonly) NSArray * changedZoneIDs;                          //@synthesize changedZoneIDs=_changedZoneIDs - In the implementation block
@property (nonatomic,readonly) NSArray * deletedZoneIDs;                          //@synthesize deletedZoneIDs=_deletedZoneIDs - In the implementation block
@property (assign,nonatomic) int status;                                          //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * recordZoneID;                       //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (nonatomic,retain) NSData * previousServerChangeTokenData;              //@synthesize previousServerChangeTokenData=_previousServerChangeTokenData - In the implementation block
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setResultsLimit:(unsigned)arg1 ;
-(unsigned)resultsLimit;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(NSData *)serverChangeTokenData;
-(NSArray *)changedZoneIDs;
-(NSArray *)deletedZoneIDs;
-(id)initWithPreviousServerChangeTokenData:(id)arg1 ;
-(NSData *)previousServerChangeTokenData;
-(void)setServerChangeTokenData:(NSData *)arg1 ;
-(CKRecordZoneID *)recordZoneID;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(void)setPreviousServerChangeTokenData:(NSData *)arg1 ;
-(int)operationType;
@end
