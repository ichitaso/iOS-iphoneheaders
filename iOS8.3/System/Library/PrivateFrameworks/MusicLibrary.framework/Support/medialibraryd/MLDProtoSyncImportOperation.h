/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:44:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <medialibraryd/medialibraryd-Structs.h>
#import <medialibraryd/MLDImportOperation.h>

@class ML3DatabaseConnection, NSMutableArray;

@interface MLDProtoSyncImportOperation : MLDImportOperation {

	unsigned _totalSyncPackageCount;
	unsigned _syncPackageNum;
	char _syncSessionStarted;
	int _syncType;
	ML3DatabaseConnection* _connection;
	NSMutableArray* _playlistOperations;
	unordered_map<long long, long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, long long> > >* _trackSyncIdToItemPidMap;

}
-(unsigned)importSource;
-(char)_performImportWithTransaction:(id)arg1 ;
-(char)_processSyncPackage:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(char)_processPlaylistOperation:(id)arg1 ;
-(char)_processSyncHeader:(id)arg1 ;
-(char)_processSyncError:(id)arg1 ;
-(char)_processSyncOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(char)_processMediaItemOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(char)_processUpdatePlaylistOperation:(id)arg1 ;
-(char)_processDeletePlaylistOperation:(id)arg1 ;
-(void)main;
@end
