/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/THModelNode.h>

@class NSMutableArray, NSString, NSURL, NSArray;

@interface THModelContainerNode : THModelNode {

	NSMutableArray* mChildren;
	NSString* mPublicationContext;
	NSURL* mApplePubURL;

}

@property (nonatomic,readonly) NSArray * childNodes; 
@property (nonatomic,retain) NSMutableArray * children; 
-(unsigned)pageCountForPresentationType:(id)arg1 ;
-(id)contentNodeForRelativePageIndex:(unsigned)arg1 forPresentationType:(id)arg2 ;
-(id)applePubRelativePath;
-(id)nodeAfterNode:(id)arg1 ;
-(id)nodeBeforeNode:(id)arg1 ;
-(id)initWithTitle:(id)arg1 includeInTOC:(char)arg2 context:(id)arg3 ;
-(id)pageAtRelativeIndex:(unsigned)arg1 forPresentationType:(id)arg2 ;
-(void)addMappingFromGUIDToNodeToDictionary:(id)arg1 ;
-(char)enumerateSubtreeUsingBlock:(/*^block*/id)arg1 ;
-(void)insertNode:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeNodeAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfNode:(id)arg1 ;
-(id)contentNodeAfterContentNode:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)description;
-(NSArray *)childNodes;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(id)nodeAtIndex:(unsigned)arg1 ;
-(void)addNode:(id)arg1 ;
-(unsigned)removeNode:(id)arg1 ;
-(NSMutableArray *)children;
@end
