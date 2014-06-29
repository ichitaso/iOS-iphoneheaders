/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, Stock;

@interface StockMetadataGridView : UIView {

	NSArray* _nameArray;
	NSMutableArray* _valueArray;
	Stock* _stock;
	BOOL _metadataUpdated;

}

@property (assign,nonatomic) BOOL metadataUpdated;              //@synthesize metadataUpdated=_metadataUpdated - In the implementation block
-(void)updateValueStringsForStock:(id)arg1 reducedFractionDigits:(BOOL)arg2 ;
-(void)_drawColumnOfStrings:(id)arg1 atPoint:(CGPoint)arg2 forWidth:(float)arg3 lineHeight:(float)arg4 lineSpacing:(float)arg5 font:(id)arg6 alignment:(int)arg7 ;
-(void)displayMetadataForStock:(id)arg1 ;
-(BOOL)metadataUpdated;
-(void)setMetadataUpdated:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
-(void).cxx_destruct;
@end
