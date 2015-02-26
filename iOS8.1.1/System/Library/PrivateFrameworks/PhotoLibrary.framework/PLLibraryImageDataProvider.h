/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLImageCache, PLImageLoadingQueue, NSMutableDictionary;

@interface PLLibraryImageDataProvider : NSObject {

	PLImageCache* _imageCache;
	PLImageLoadingQueue* _imageLoadingQueue;
	NSMutableDictionary* _imageSources;

}
-(void)dealloc;
-(id)init;
-(id)_imageSourceForFormat:(int)arg1 ;
-(id)loadImageSynchronously:(BOOL)arg1 forAsset:(id)arg2 format:(int)arg3 priority:(int)arg4 completion:(/*^block*/id)arg5 ;
-(void)cancelLoadForAsset:(id)arg1 ;
-(void)cancelLoadForAsset:(id)arg1 format:(int)arg2 ;
-(void)invalidateCachedImagesForAsset:(id)arg1 ;
-(void)invalidateCachedImagesForAsset:(id)arg1 format:(int)arg2 ;
-(void)pauseLoading;
-(void)resumeLoading;
@end
