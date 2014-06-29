/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <TextInput_zh/TIKeyboardInputManagerChineseMecabra.h>

@interface TIKeyboardInputManagerTraditionalZhuyin : TIKeyboardInputManagerChineseMecabra {

	bool _isDynamic;

}
+(void)removeDynamicDictionaryForInputMode:(id)arg1 ;
-(id)keyboardBehaviors;
-(unsigned long long)initialSelectedIndex;
-(bool)acceptInputString:(id)arg1 ;
-(id)keyEventMap;
-(id)inputsToReject;
-(bool)shouldSearchCompletionForSubstrings;
-(id)composedTextForSelectedCandidate:(id)arg1 remainingInput:(id)arg2 ;
-(id)phoneticSortingMethod;
-(int)inputMethodType;
-(bool)shouldInsertFirstToneMark;
-(TIInputManagerZephyr*)initImplementation;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)syncToLayoutState:(id)arg1 ;
-(void)didAcceptCandidate:(id)arg1 ;
@end
