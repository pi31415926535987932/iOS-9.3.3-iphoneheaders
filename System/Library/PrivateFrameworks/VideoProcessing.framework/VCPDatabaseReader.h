/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSObject;

@interface VCPDatabaseReader : NSObject {

	NSObject*<OS_dispatch_queue> _sqlSerialQueue;
	sqlite3Ref _database;

}
-(void)dealloc;
-(id)init;
-(void)closeDatabase;
-(int)openDatabase;
-(int)queryHeaderForAsset:(id)arg1 analysis:(id*)arg2 assetId:(long long*)arg3 ;
-(int)executeDatabaseBlock:(/*^block*/id)arg1 ;
-(int)queryResultsForAssetId:(long long)arg1 analysis:(id)arg2 ;
-(id)queryFeatureVectorResultForAsset:(id)arg1 ;
-(BOOL)isAssetBlacklisted:(id)arg1 blacklistDate:(id*)arg2 ;
-(id)queryAnalysisForAsset:(id)arg1 ;
-(id)queryAssetsAnalyzedSince:(id)arg1 ;
@end

