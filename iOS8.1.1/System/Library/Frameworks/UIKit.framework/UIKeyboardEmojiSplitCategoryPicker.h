/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardEmojiSplit.h>
#import <UIKit/UIKeyboardEmojiCategoryControl.h>

@class UIKeyboardEmojiCategoryController, UIKeyboardEmojiCategory, NSString;

@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit <UIKeyboardEmojiCategoryControl> {

	UIKeyboardEmojiCategoryController* _categoryController;
	BOOL _whiteText;
	UIKeyboardEmojiCategory* _lastUsedCategory;

}

@property (assign) BOOL whiteText;                                  //@synthesize whiteText=_whiteText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)whiteText;
-(void)setRenderConfig:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)setCategory:(id)arg1 ;
-(void)setWhiteText:(BOOL)arg1 ;
-(id)titleForRow:(long long)arg1 ;
-(id)symbolForRow:(long long)arg1 ;
-(void)updateCategorySelectedIndicator:(int)arg1 ;
-(id)categoryForCurrentRow;
@end
