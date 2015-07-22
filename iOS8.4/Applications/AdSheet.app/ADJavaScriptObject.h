/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ADJSODelegate;
@class ADSAdImpressionController, NSMutableArray, NSMutableDictionary, NSLock, JSValue;

@interface ADJavaScriptObject : NSObject {

	id<ADJSODelegate> _delegate;
	ADSAdImpressionController* _impressionController;
	NSMutableArray* _downloads;
	NSMutableDictionary* _retainedJSValues;
	NSLock* _retainedJSValuesLock;

}

@property (assign,nonatomic,__weak) id<ADJSODelegate> delegate; 
@property (nonatomic,readonly) ADSAdImpressionController * impressionController; 
@property (nonatomic,retain) NSMutableArray * downloads;                                      //@synthesize downloads=_downloads - In the implementation block
@property (nonatomic,retain) JSValue * listener; 
@property (nonatomic,readonly) NSMutableDictionary * retainedJSValues;                        //@synthesize retainedJSValues=_retainedJSValues - In the implementation block
@property (nonatomic,readonly) NSLock * retainedJSValuesLock;                                 //@synthesize retainedJSValuesLock=_retainedJSValuesLock - In the implementation block
+(void)initializeInContext:(id)arg1 ;
+(void)setJSException:(id)arg1 ;
+(void)initialize;
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(id)initWithDelegate:(id)arg1 impressionController:(id)arg2 ;
-(ADSAdImpressionController *)impressionController;
-(void)adWillDismiss;
-(void)setJSValue:(id)arg1 forKey:(id)arg2 ;
-(id)JSValueForKey:(id)arg1 ;
-(void)fireTestProbe:(id)arg1 withOptions:(id)arg2 ;
-(NSLock *)retainedJSValuesLock;
-(NSMutableDictionary *)retainedJSValues;
-(NSMutableArray *)downloads;
-(void)dealloc;
-(void)setDelegate:(id<ADJSODelegate>)arg1 ;
-(id)init;
-(id<ADJSODelegate>)delegate;
-(JSValue *)listener;
-(void)setListener:(JSValue *)arg1 ;
-(void)setDownloads:(NSMutableArray *)arg1 ;
@end
