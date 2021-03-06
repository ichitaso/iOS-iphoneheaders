/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/Support/softwarebehaviorservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSXPCConnection;

@interface SBManagerServerClient : NSObject {

	int _pid;
	NSString* _identifier;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int pid;                                         //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) id<SBManagerClientInterface> proxy; 
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(NSString *)identifier;
-(NSXPCConnection *)connection;
-(id<SBManagerClientInterface>)proxy;
-(int)pid;
-(id)initWithConnection:(id)arg1 ;
@end

