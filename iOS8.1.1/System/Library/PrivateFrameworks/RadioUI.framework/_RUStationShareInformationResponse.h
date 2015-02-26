/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class RadioShareInformation, NSError;

@interface _RUStationShareInformationResponse : NSObject {

	RadioShareInformation* _shareInformation;
	NSError* _error;

}

@property (nonatomic,readonly) RadioShareInformation * shareInformation;              //@synthesize shareInformation=_shareInformation - In the implementation block
@property (nonatomic,readonly) NSError * error;                                       //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(RadioShareInformation *)shareInformation;
-(id)initWithShareInformation:(id)arg1 error:(id)arg2 ;
@end
