/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABContactCell.h>

@class NSMutableArray, NSArray;

@interface MKPlaceInfoViewAmenitiesCell : ABContactCell {

	NSMutableArray* _labels;
	NSMutableArray* _values;
	NSArray* _keyValues;
	NSMutableArray* _labelConstraints;

}

@property (nonatomic,retain) NSArray * keyValues;                            //@synthesize keyValues=_keyValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * labelConstraints;              //@synthesize labelConstraints=_labelConstraints - In the implementation block
+(double)intrinsicContentHeight;
+(id)reuseIdentifier;
-(void)contentSizeDidChange;
-(void)refreshContent;
-(NSMutableArray *)labelConstraints;
-(void)setLabelConstraints:(NSMutableArray *)arg1 ;
-(NSArray *)keyValues;
-(id)attributeLabelWithString:(id)arg1 ;
-(id)attributeValueWithString:(id)arg1 ;
-(void)addConstraintsForKeyLabel:(id)arg1 andMatchingValueLabel:(id)arg2 ;
-(void)addWidthAndSideSpacingConstraintsForLabels:(id)arg1 ;
-(void)setKeyValues:(NSArray *)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutMarginsDidChange;
-(void)tintColorDidChange;
@end
