/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <InCallService/TPDialerKeypadDelegate.h>

@class TPDialerNumberPad, NSString;

@interface PHInCallKeypadViewController : UIViewController <TPDialerKeypadDelegate> {

	TPDialerNumberPad* _keypad;
	NSString* _inCallDialedString;

}

@property (retain) TPDialerNumberPad * keypad;                           //@synthesize keypad=_keypad - In the implementation block
@property (nonatomic,retain) NSString * inCallDialedString;              //@synthesize inCallDialedString=_inCallDialedString - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TPDialerNumberPad *)keypad;
-(void)setKeypad:(TPDialerNumberPad *)arg1 ;
-(NSString *)inCallDialedString;
-(void)setInCallDialedString:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)phonePad:(id)arg1 appendString:(id)arg2 ;
-(void)phonePad:(id)arg1 keyDown:(char)arg2 ;
-(void)phonePad:(id)arg1 keyUp:(char)arg2 ;
-(void)phonePadWillBeginSounds:(id)arg1 ;
-(void)phonePadDidEndSounds:(id)arg1 ;
-(void)phonePad:(id)arg1 replaceLastDigitWithString:(id)arg2 ;
-(void)phonePadDeleteLastDigit:(id)arg1 ;
-(void)phonePad:(id)arg1 dialerCharacterButtonWasHeld:(unsigned)arg2 ;
@end

