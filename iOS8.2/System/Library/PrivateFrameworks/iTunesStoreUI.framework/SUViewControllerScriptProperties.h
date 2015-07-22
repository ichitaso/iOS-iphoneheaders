/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/NSCoding.h>
#import <iTunesStoreUI/NSCopying.h>

@class UIColor, NSDictionary, SUGradient;

@interface SUViewControllerScriptProperties : NSObject <NSCoding, NSCopying> {

	char _alwaysDispatchesScrollEvents;
	UIColor* _backgroundColor;
	NSDictionary* _contextDictionary;
	char _doubleTapEnabled;
	char _embedded;
	char _flashesScrollIndicators;
	char _inputViewObeysDOMFocus;
	int _loadingIndicatorStyle;
	UIColor* _loadingTextColor;
	UIColor* _loadingTextShadowColor;
	SUGradient* _placeholderBackgroundGradient;
	UIEdgeInsets _scrollContentInsets;
	char _scrollingDisabled;
	char _shouldLoadProgressively;
	char _shouldShowFormAccessory;
	char _showsHorizontalScrollIndicator;
	char _showsVerticalScrollIndicator;
	char _showsBackgroundShadow;
	UIColor* _topExtensionColor;
	char _usesBlurredBackground;

}

@property (assign,nonatomic) char alwaysDispatchesScrollEvents;                              //@synthesize alwaysDispatchesScrollEvents=_alwaysDispatchesScrollEvents - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSDictionary * contextDictionary;                                 //@synthesize contextDictionary=_contextDictionary - In the implementation block
@property (assign,nonatomic) char inputViewObeysDOMFocus;                                    //@synthesize inputViewObeysDOMFocus=_inputViewObeysDOMFocus - In the implementation block
@property (assign,getter=isDoubleTapEnabled,nonatomic) char doubleTapEnabled;                //@synthesize doubleTapEnabled=_doubleTapEnabled - In the implementation block
@property (assign,getter=isScrollingDisabled,nonatomic) char scrollingDisabled;              //@synthesize scrollingDisabled=_scrollingDisabled - In the implementation block
@property (assign,getter=isEmbedded,nonatomic) char embedded;                                //@synthesize embedded=_embedded - In the implementation block
@property (assign,nonatomic) int loadingIndicatorStyle;                                      //@synthesize loadingIndicatorStyle=_loadingIndicatorStyle - In the implementation block
@property (nonatomic,retain) UIColor * loadingTextColor;                                     //@synthesize loadingTextColor=_loadingTextColor - In the implementation block
@property (nonatomic,retain) UIColor * loadingTextShadowColor;                               //@synthesize loadingTextShadowColor=_loadingTextShadowColor - In the implementation block
@property (nonatomic,retain) SUGradient * placeholderBackgroundGradient;                     //@synthesize placeholderBackgroundGradient=_placeholderBackgroundGradient - In the implementation block
@property (assign,nonatomic) UIEdgeInsets scrollContentInsets;                               //@synthesize scrollContentInsets=_scrollContentInsets - In the implementation block
@property (assign,nonatomic) char shouldLoadProgressively;                                   //@synthesize shouldLoadProgressively=_shouldLoadProgressively - In the implementation block
@property (assign,nonatomic) char shouldShowFormAccessory;                                   //@synthesize shouldShowFormAccessory=_shouldShowFormAccessory - In the implementation block
@property (assign,nonatomic) char showsBackgroundShadow;                                     //@synthesize showsBackgroundShadow=_showsBackgroundShadow - In the implementation block
@property (assign,nonatomic) char flashesScrollIndicators;                                   //@synthesize flashesScrollIndicators=_flashesScrollIndicators - In the implementation block
@property (assign,nonatomic) char showsHorizontalScrollIndicator;                            //@synthesize showsHorizontalScrollIndicator=_showsHorizontalScrollIndicator - In the implementation block
@property (assign,nonatomic) char showsVerticalScrollIndicator;                              //@synthesize showsVerticalScrollIndicator=_showsVerticalScrollIndicator - In the implementation block
@property (nonatomic,retain) UIColor * topExtensionColor;                                    //@synthesize topExtensionColor=_topExtensionColor - In the implementation block
@property (assign,nonatomic) char usesBlurredBackground;                                     //@synthesize usesBlurredBackground=_usesBlurredBackground - In the implementation block
-(void)dealloc;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setShowsVerticalScrollIndicator:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)showsHorizontalScrollIndicator;
-(void)setShowsHorizontalScrollIndicator:(char)arg1 ;
-(char)showsVerticalScrollIndicator;
-(void)setDoubleTapEnabled:(char)arg1 ;
-(char)isDoubleTapEnabled;
-(char)inputViewObeysDOMFocus;
-(void)setInputViewObeysDOMFocus:(char)arg1 ;
-(void)setAlwaysDispatchesScrollEvents:(char)arg1 ;
-(char)alwaysDispatchesScrollEvents;
-(char)isEmbedded;
-(void)setEmbedded:(char)arg1 ;
-(NSDictionary *)contextDictionary;
-(void)setContextDictionary:(NSDictionary *)arg1 ;
-(UIColor *)loadingTextColor;
-(UIColor *)loadingTextShadowColor;
-(void)setLoadingIndicatorStyle:(int)arg1 ;
-(void)setLoadingTextColor:(UIColor *)arg1 ;
-(void)setLoadingTextShadowColor:(UIColor *)arg1 ;
-(void)setPlaceholderBackgroundGradient:(SUGradient *)arg1 ;
-(SUGradient *)placeholderBackgroundGradient;
-(int)loadingIndicatorStyle;
-(char)usesBlurredBackground;
-(void)setScrollingDisabled:(char)arg1 ;
-(void)setShowsBackgroundShadow:(char)arg1 ;
-(void)setTopExtensionColor:(UIColor *)arg1 ;
-(char)isScrollingDisabled;
-(char)showsBackgroundShadow;
-(UIColor *)topExtensionColor;
-(void)setFlashesScrollIndicators:(char)arg1 ;
-(void)setShouldShowFormAccessory:(char)arg1 ;
-(void)setShouldLoadProgressively:(char)arg1 ;
-(void)setScrollContentInsets:(UIEdgeInsets)arg1 ;
-(char)flashesScrollIndicators;
-(UIEdgeInsets)scrollContentInsets;
-(char)shouldShowFormAccessory;
-(char)shouldLoadProgressively;
-(void)setUsesBlurredBackground:(char)arg1 ;
@end
