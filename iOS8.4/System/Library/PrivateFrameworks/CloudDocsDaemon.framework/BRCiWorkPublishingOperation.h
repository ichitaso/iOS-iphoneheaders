/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <CloudDocsDaemon/BRCOperationSubclass.h>

@class BRCItemID, NSArray, NSNumber, BRCServerZone, NSString;

@interface BRCiWorkPublishingOperation : _BRCOperation <BRCOperationSubclass> {

	BRCItemID* _itemID;
	NSArray* _recordIDs;
	BOOL _forPublish;
	BOOL _readonly;
	NSNumber* _sharingInfo;
	BRCServerZone* _serverZone;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithDocumentItem:(id)arg1 forPublish:(BOOL)arg2 readonly:(BOOL)arg3 ;
-(void)_updateItemAfterShareCompleted;
@end
