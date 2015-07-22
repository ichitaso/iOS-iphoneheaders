/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIView, NSArray, CADisplayLink;

@interface SBAnimationStepper : NSObject {

	id m_delegate;
	UIView* m_view;
	NSArray* m_animatingSubviews;
	double m_duration;
	float m_percentage;
	CADisplayLink* m_displayLink;
	double m_finishBackwardTimestamp;
	double m_finishBackwardDuration;
	float m_finishBackwardPercentage;

}

@property (assign,nonatomic) id delegate; 
@property (nonatomic,retain) UIView * view; 
@property (nonatomic,copy) NSArray * animatingSubviews; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) float percentage; 
-(void)stepAnimationsInView:(id)arg1 animatingSubviews:(id)arg2 duration:(double)arg3 ;
-(void)finishBackwardToStart;
-(void)finishForwardToEnd;
-(void)didFinishBackwardToStart;
-(void)setAnimatingSubviews:(NSArray *)arg1 ;
-(void)updateFinishBackwardToStart:(id)arg1 ;
-(NSArray *)animatingSubviews;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(UIView *)view;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(void)setPercentage:(float)arg1 ;
-(float)percentage;
@end
