/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/ptpd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol PhotoLibraryPTPDelegate
@optional
-(void)libraryDidBecomeUnavailable;
-(void)libraryDidBecomeAvailable;

@required
-(void)addedPhotoKeys:(id)arg1 deletedPhotoKeys:(id)arg2 changedPhotoKeys:(id)arg3 changePendingPhotoKeys:(id)arg4;
@end
