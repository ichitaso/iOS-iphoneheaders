/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIColor, UISegmentedControl;

@interface _RemindersPriorityPickerCell : UITableViewCell {

	UIColor* _color;
	UISegmentedControl* _priorityPicker;

}

@property (nonatomic,retain) UIColor * color;                                    //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) UISegmentedControl * priorityPicker;              //@synthesize priorityPicker=_priorityPicker - In the implementation block
@property (assign,nonatomic) int priority; 
-(id)priorityPicker;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(int)priority;
-(void).cxx_destruct;
-(void)setPriority:(int)arg1 ;
@end
