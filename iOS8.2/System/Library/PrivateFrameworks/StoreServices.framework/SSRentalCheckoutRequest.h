/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <StoreServices/SSXPCCoding.h>

@class NSNumber, NSArray, NSString;

@interface SSRentalCheckoutRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountIdentifier;
	long long _downloadIdentifier;
	NSNumber* _rentalKeyIdentifier;
	NSArray* _sinfs;
	char _shouldValidateRentalInfo;

}

@property (readonly) NSArray * sinfs; 
@property (readonly) NSNumber * accountIdentifier; 
@property (readonly) NSNumber * rentalKeyIdentifier; 
@property (readonly) long long downloadIdentifier; 
@property (assign,nonatomic) char shouldValidateRentalInfo;              //@synthesize shouldValidateRentalInfo=_shouldValidateRentalInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)downloadIdentifier;
-(id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startWithConnectionResponseBlock:(/*^block*/id)arg1 ;
-(NSArray *)sinfs;
-(id)initWithDownloadIdentifier:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSNumber *)accountIdentifier;
-(id)initWithSinfs:(id)arg1 ;
-(NSNumber *)rentalKeyIdentifier;
-(char)shouldValidateRentalInfo;
-(void)setShouldValidateRentalInfo:(char)arg1 ;
@end
