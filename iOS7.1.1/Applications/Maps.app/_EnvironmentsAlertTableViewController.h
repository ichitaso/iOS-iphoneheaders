/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, NSString;

@interface _EnvironmentsAlertTableViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate> {

	NSArray* _environments;
	NSString* _selectedEnvironmentName;

}

@property (nonatomic,readonly) NSString * selectedEnvironmentName;              //@synthesize selectedEnvironmentName=_selectedEnvironmentName - In the implementation block
-(id)initWithStyle:(int)arg1 environments:(id)arg2 ;
-(id)selectedEnvironmentName;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void).cxx_destruct;
@end
