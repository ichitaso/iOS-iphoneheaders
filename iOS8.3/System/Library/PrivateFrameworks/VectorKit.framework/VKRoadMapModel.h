/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:59:57 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKVectorMapModel.h>
#import <VectorKit/VKStyleManagerObserver.h>

@class NSString, VKStyleManager;

@interface VKRoadMapModel : VKVectorMapModel <VKStyleManagerObserver> {

	unique_ptr<vk::RoadManager, std::__1::default_delete<vk::RoadManager> >* _roadManager;
	unique_ptr<vk::PatternedManager, std::__1::default_delete<vk::PatternedManager> >* _patternedRibbonManager;
	unsigned long long _mapLayerPosition;

}

@property (assign,nonatomic) unsigned long long mapLayerPosition;              //@synthesize mapLayerPosition=_mapLayerPosition - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) VKStyleManager * styleManager; 
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning:(char)arg1 ;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)setMapLayerPosition:(unsigned long long)arg1 ;
-(void)stylesheetDidChange;
-(unsigned long long)mapLayerPosition;
-(unsigned char)commandBufferId;
@end
