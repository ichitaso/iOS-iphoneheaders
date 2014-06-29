/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DAMailboxRequest.h>

@interface DAMailboxGetUpdatesRequest : DAMailboxRequest {

	int _maxSize;
	int _bodyFormat;

}
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)maxSize;
-(int)bodyFormat;
-(id)initRequestForBodyFormat:(int)arg1 withBodySizeLimit:(int)arg2 ;
@end
