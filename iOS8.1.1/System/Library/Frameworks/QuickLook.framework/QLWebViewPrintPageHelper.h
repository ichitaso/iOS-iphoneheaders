/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLRemotePrintPageHelper.h>

@class UIWebBrowserView, NSURLRequest, NSString, QLPreviewConverter;

@interface QLWebViewPrintPageHelper : NSObject <QLRemotePrintPageHelper> {

	UIWebBrowserView* _browserView;
	NSURLRequest* _request;
	NSString* _documentType;
	QLPreviewConverter* _previewConverter;
	CGSize _printableSize;

}

@property (retain) QLPreviewConverter * previewConverter;              //@synthesize previewConverter=_previewConverter - In the implementation block
@property (assign,nonatomic) CGSize printableSize;                     //@synthesize printableSize=_printableSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)printPageRendererWithBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3 ;
+(BOOL)_isXPathType:(id)arg1 ;
-(QLPreviewConverter *)previewConverter;
-(void)setPreviewConverter:(QLPreviewConverter *)arg1 ;
-(id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3 ;
-(id)pdfDataForPageAtIndex:(long long)arg1 printingDone:(BOOL*)arg2 ;
-(CGSize)printableSize;
-(void)setPrintableSize:(CGSize)arg1 ;
-(void)_waitForPreview;
-(void)dealloc;
-(long long)numberOfPages;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
@end

