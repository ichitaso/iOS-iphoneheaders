/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CBService.h>

@class NSNumber, CBUUID, NSArray;

@interface CBMutableService : CBService {

	NSNumber* _ID;

}

@property (nonatomic,retain) CBUUID * UUID; 
@property (assign,nonatomic) char isPrimary; 
@property (retain) NSArray * includedServices; 
@property (retain) NSArray * characteristics; 
@property (retain) NSNumber * ID;                           //@synthesize ID=_ID - In the implementation block
-(NSNumber *)ID;
-(void)handlePowerNotOn;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setCharacteristics:(NSArray *)arg1 ;
-(void)setID:(NSNumber *)arg1 ;
-(id)initWithType:(id)arg1 primary:(char)arg2 ;
@end
