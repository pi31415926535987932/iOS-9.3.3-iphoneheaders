/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSCache;

@interface AEUserPublishing : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	double _timeoutInterval;
	NSCache* _cache;

}

@property (assign,nonatomic) double timeoutInterval;              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,retain) NSCache * cache;                     //@synthesize cache=_cache - In the implementation block
+(id)p_keyForPrefix:(id)arg1 storeId:(id)arg2 ;
+(id)sharedInstance;
-(void)productProfilesForStoreIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)wholeHTMLForStoreId:(id)arg1 dataSource:(id)arg2 ;
-(id)bookInfoHTMLForStoreId:(id)arg1 dataSource:(id)arg2 ;
-(BOOL)p_isConnectedToInternet;
-(id)p_downloadedEmailBodyForStoreId:(id)arg1 dataSource:(id)arg2 ;
-(id)p_generatedEmailBodyForStoreId:(id)arg1 dataSource:(id)arg2 ;
-(id)p_downloadEmailContentForStoreId:(id)arg1 dataSource:(id)arg2 overrideClientVersion:(id)arg3 ;
-(id)p_downloadedStoreUrlForStoreId:(id)arg1 keyProfile:(id)arg2 path:(id)arg3 dataSource:(id)arg4 ;
-(id)p_storeURLForStoreId:(id)arg1 dataSource:(id)arg2 ;
-(id)p_storeShortURLForStoreId:(id)arg1 dataSource:(id)arg2 ;
-(BOOL)p_isDownloadEnabledForStoreId:(id)arg1 dataSource:(id)arg2 ;
-(BOOL)p_isLocalGenerationEnabledForStoreId:(id)arg1 dataSource:(id)arg2 ;
-(id)p_assetAuthorForStoreId:(id)arg1 dataSource:(id)arg2 ;
-(id)p_assetTitleForStoreId:(id)arg1 dataSource:(id)arg2 ;
-(id)p_assetCategoryForStoreId:(id)arg1 dataSource:(id)arg2 ;
-(id)storeURLForStoreId:(id)arg1 dataSource:(id)arg2 ;
-(id)storeShortURLForStoreId:(id)arg1 dataSource:(id)arg2 ;
-(id)p_assetCoverImageForStoreId:(id)arg1 dataSource:(id)arg2 ;
-(id)init;
-(NSCache *)cache;
-(void)setCache:(NSCache *)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
@end

