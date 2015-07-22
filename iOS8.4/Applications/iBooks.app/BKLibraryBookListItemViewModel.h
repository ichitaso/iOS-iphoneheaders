/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BKBookInfo, NSDictionary;

@interface BKLibraryBookListItemViewModel : NSObject {

	BKBookInfo* _bookInfo;
	NSDictionary* _priceDictionary;

}

@property (nonatomic,retain) BKBookInfo * bookInfo;                       //@synthesize bookInfo=_bookInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * priceDictionary;              //@synthesize priceDictionary=_priceDictionary - In the implementation block
-(BKBookInfo *)bookInfo;
-(NSDictionary *)priceDictionary;
-(void)setPriceDictionary:(NSDictionary *)arg1 ;
-(id)initWithBook:(id)arg1 ;
-(void)setBookInfo:(BKBookInfo *)arg1 ;
-(id)priceString;
@end
