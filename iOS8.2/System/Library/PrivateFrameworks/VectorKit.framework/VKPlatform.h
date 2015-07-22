/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface VKPlatform : NSObject {

	unsigned _memSize;
	int _numCPUs;
	char _proceduralRoadAlpha;
	char _useCheapTrafficShader;
	char _shouldUseTrafficAlphaHack;
	char _supportsBuildingStrokes;
	char _supports3DBuildingStrokes;

}

@property (nonatomic,readonly) char roadsWithSimpleLineMeshesAvailable; 
@property (nonatomic,readonly) char shouldUseTrafficAlphaHack;                       //@synthesize shouldUseTrafficAlphaHack=_shouldUseTrafficAlphaHack - In the implementation block
@property (nonatomic,readonly) unsigned tileMaximumLimit; 
@property (nonatomic,readonly) unsigned tilePrefetchNumberOfScreens; 
@property (nonatomic,readonly) char supportsHiResRTT; 
@property (nonatomic,readonly) char isPad; 
@property (nonatomic,readonly) char shouldDrawWhenReady; 
@property (nonatomic,readonly) char shouldStyleLabelsInParallel; 
@property (nonatomic,readonly) char shouldPregenerateLabelGlyphs; 
@property (nonatomic,readonly) char canMakeSharingThumbnails; 
@property (nonatomic,readonly) float mainScreenScale; 
@property (nonatomic,readonly) float mainScreenPPI; 
@property (nonatomic,readonly) float maxContentScaleForRendering; 
@property (nonatomic,readonly) char supportsBuildingShadows; 
@property (nonatomic,readonly) char supportsBuildingStrokes;                         //@synthesize supportsBuildingStrokes=_supportsBuildingStrokes - In the implementation block
@property (nonatomic,readonly) char supports3DBuildingStrokes;                       //@synthesize supports3DBuildingStrokes=_supports3DBuildingStrokes - In the implementation block
@property (nonatomic,readonly) char supportsHiResBuildings; 
@property (nonatomic,readonly) char supports3DBuildings; 
@property (nonatomic,readonly) char proceduralRoadAlpha;                             //@synthesize proceduralRoadAlpha=_proceduralRoadAlpha - In the implementation block
@property (nonatomic,readonly) char useCheapTrafficShader;                           //@synthesize useCheapTrafficShader=_useCheapTrafficShader - In the implementation block
@property (nonatomic,readonly) unsigned memorySize;                                  //@synthesize memSize=_memSize - In the implementation block
@property (nonatomic,readonly) unsigned tileDecodeQueueWidth; 
@property (nonatomic,readonly) double routeLineSimplificationEpsilon; 
+(id)sharedPlatform;
-(void)dealloc;
-(id)init;
-(float)mainScreenScale;
-(float)mainScreenPPI;
-(char)supportsHiResRTT;
-(char)isPad;
-(char)supportsBuildingStrokes;
-(char)supports3DBuildingStrokes;
-(char)supportsBuildingShadows;
-(char)supports3DBuildings;
-(unsigned)tileDecodeQueueWidth;
-(char)shouldPregenerateLabelGlyphs;
-(void)_determineHardware;
-(unsigned)_calculateMemSize;
-(char)roadsWithSimpleLineMeshesAvailable;
-(unsigned)tileReserveLimit:(char)arg1 ;
-(unsigned)tileMaximumLimit;
-(unsigned)tilePrefetchNumberOfScreens;
-(char)canMakeSharingThumbnails;
-(char)shouldDrawWhenReady;
-(float)maxContentScaleForRendering;
-(char)supportsHiResBuildings;
-(char)shouldStyleLabelsInParallel;
-(double)routeLineSimplificationEpsilon;
-(unsigned)memorySize;
-(char)proceduralRoadAlpha;
-(char)useCheapTrafficShader;
-(char)shouldUseTrafficAlphaHack;
@end
