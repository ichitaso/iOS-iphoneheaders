/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistantd/assistantd-Structs.h>
#import <assistantd/ADService.h>

@interface ADSystemService : ADService {

	CFDictionaryRef _commandMap;

}
-(void)handleCommand:(id)arg1 forDomain:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)lockRestrictedCommands;
-(id)commandsForDomain:(id)arg1 ;
-(char)implementsCommand:(id)arg1 forDomain:(id)arg2 ;
-(id)_systemDomains;
-(void)dealloc;
-(id)init;
-(id)handle;
-(id)domains;
-(char)isSystemService;
@end

