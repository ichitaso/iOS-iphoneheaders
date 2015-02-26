/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/DownloadError.h>
#import <itunesstored/NSCopying.h>

@class NSError;

@interface DownloadGenericError : DownloadError <NSCopying> {

	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(BOOL)canCoalesceWithError:(id)arg1 ;
-(void)performActionForResponseFlags:(unsigned long long)arg1 ;
-(BOOL)_isInstallError:(id)arg1 ;
-(id)_notificationTitle;
-(id)_notificationBody;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSError *)error;
-(id)initWithError:(id)arg1 ;
-(id)copyUserNotification;
@end
