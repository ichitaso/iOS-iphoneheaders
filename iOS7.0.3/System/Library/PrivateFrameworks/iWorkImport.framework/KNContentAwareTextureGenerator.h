/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface KNContentAwareTextureGenerator : NSObject
+(void)p_generateLayersForTexture:(id)arg1 tag:(id)arg2 isBackground:(BOOL)arg3 isMagicMove:(BOOL)arg4 addToTextures:(id)arg5 ;
+(void)p_preloadTexturesConcurrentlyWithInfos:(id)arg1 asv:(id)arg2 plugin:(id)arg3 ignoreBuildVisibiility:(BOOL)arg4 ;
+(void)p_addLayersForInfos:(id)arg1 tag:(id)arg2 isBackground:(BOOL)arg3 asv:(id)arg4 plugin:(id)arg5 addToTextures:(id)arg6 ignoreBuildVisibiility:(BOOL)arg7 ;
+(void)p_addBlackBackgroundLayerWithTag:(id)arg1 asv:(id)arg2 plugin:(id)arg3 addToTextures:(id)arg4 ;
+(id)generateTexturesTagsAndAttributesForASV:(id)arg1 plugin:(id)arg2 ;
+(void)addLayersWithTag:(id)arg1 plugin:(id)arg2 baseLayer:(id)arg3 backgroundLayer:(id)arg4 textures:(id)arg5 ;
@end
