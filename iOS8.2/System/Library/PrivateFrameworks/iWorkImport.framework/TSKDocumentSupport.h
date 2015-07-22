/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKCommandHistoryDelegate.h>

@class TSPLazyReference, TSPObject, NSString, TSKCommandHistory, TSKCommandSelectionBehaviorHistory;

@interface TSKDocumentSupport : TSPObject <TSKCommandHistoryDelegate> {

	TSPLazyReference* _commandHistoryReference;
	TSPLazyReference* _commandSelectionBehaviorHistoryReference;
	TSPObject* _webState;
	unsigned _cachedUndoCount;
	unsigned _cachedRedoCount;
	NSString* _cachedUndoActionString;
	NSString* _cachedRedoActionString;

}

@property (nonatomic,retain) TSPObject * webState;                                                                //@synthesize webState=_webState - In the implementation block
@property (nonatomic,readonly) char hasCommands; 
@property (nonatomic,readonly) unsigned cachedUndoCount;                                                          //@synthesize cachedUndoCount=_cachedUndoCount - In the implementation block
@property (nonatomic,readonly) unsigned cachedRedoCount;                                                          //@synthesize cachedRedoCount=_cachedRedoCount - In the implementation block
@property (nonatomic,readonly) NSString * cachedUndoActionString;                                                 //@synthesize cachedUndoActionString=_cachedUndoActionString - In the implementation block
@property (nonatomic,readonly) NSString * cachedRedoActionString;                                                 //@synthesize cachedRedoActionString=_cachedRedoActionString - In the implementation block
@property (nonatomic,readonly) char isDocumentEditedSinceLastSave; 
@property (nonatomic,readonly) TSKCommandHistory * commandHistory; 
@property (nonatomic,readonly) TSKCommandSelectionBehaviorHistory * commandSelectionBehaviorHistory; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)documentWasSaved;
-(void)clearCommandHistory;
-(char)isDocumentEditedSinceLastSave;
-(TSKCommandHistory *)commandHistory;
-(TSKCommandSelectionBehaviorHistory *)commandSelectionBehaviorHistory;
-(NSString *)cachedUndoActionString;
-(NSString *)cachedRedoActionString;
-(unsigned)cachedUndoCount;
-(unsigned)cachedRedoCount;
-(void)commandHistoryChanged:(id)arg1 ;
-(char)hasCommands;
-(TSPObject *)webState;
-(void)setWebState:(TSPObject *)arg1 ;
-(id)newCommandHistoryReference;
-(id)newCommandSelectionBehaviorHistoryReference;
-(void)didLoadCommandHistory:(id)arg1 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
@end
