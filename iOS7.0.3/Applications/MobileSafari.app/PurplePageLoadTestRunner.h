/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/PageLoadTestRunner.h>

@class NSMutableDictionary, NSString;

@interface PurplePageLoadTestRunner : PageLoadTestRunner {

	NSMutableDictionary* _pptResults;
	NSString* _testName;
	BOOL _showLoadTime;
	BOOL _showFirstVisualLayoutTime;
	BOOL _showRenderTime;
	BOOL _showRenderFps;

}

@property (nonatomic,copy) NSString * testName;                           //@synthesize testName=_testName - In the implementation block
@property (assign,nonatomic) BOOL showLoadTime;                           //@synthesize showLoadTime=_showLoadTime - In the implementation block
@property (assign,nonatomic) BOOL showFirstVisualLayoutTime;              //@synthesize showFirstVisualLayoutTime=_showFirstVisualLayoutTime - In the implementation block
@property (assign,nonatomic) BOOL showRenderTime;                         //@synthesize showRenderTime=_showRenderTime - In the implementation block
@property (assign,nonatomic) BOOL showRenderFps;                          //@synthesize showRenderFps=_showRenderFps - In the implementation block
-(id)testName;
-(id)initWithTestName:(id)arg1 ;
-(id)initRenderTestWithName:(id)arg1 showRenderTime:(BOOL)arg2 showFPS:(BOOL)arg3 ;
-(void)startingTestRunner;
-(void)finishedTestRunner;
-(void)collectPPTResults;
-(void)pptResultFor:(id)arg1 measure:(id)arg2 value:(double)arg3 units:(id)arg4 ;
-(void)pptResultFor:(id)arg1 measure:(id)arg2 time:(double)arg3 ;
-(void)setTestName:(id)arg1 ;
-(BOOL)showLoadTime;
-(void)setShowLoadTime:(BOOL)arg1 ;
-(BOOL)showFirstVisualLayoutTime;
-(void)setShowFirstVisualLayoutTime:(BOOL)arg1 ;
-(BOOL)showRenderTime;
-(void)setShowRenderTime:(BOOL)arg1 ;
-(BOOL)showRenderFps;
-(void)setShowRenderFps:(BOOL)arg1 ;
-(void)dealloc;
@end

