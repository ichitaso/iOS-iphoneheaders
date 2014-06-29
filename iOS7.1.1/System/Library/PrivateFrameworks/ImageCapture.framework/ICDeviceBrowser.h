/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface ICDeviceBrowser : NSObject {

	id _privateData;

}

@property (assign) <ICDeviceBrowserDelegate> * delegate; 
@property (getter=isBrowsing,readonly) bool browsing; 
@property (readonly) NSArray * devices; 
-(bool)isBrowsing;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(int)start;
-(void)stop;
-(id)devices;
-(id)internalDevices;
-(void)finalize;
@end
