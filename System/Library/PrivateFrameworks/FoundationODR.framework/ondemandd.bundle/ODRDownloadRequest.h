/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSProgress, NSURL, NSString, ODRTagsRequest, NSDictionary;

@interface ODRDownloadRequest : NSObject {

	NSProgress* _progress;
	/*^block*/id _completionBlock;
	/*^block*/id _refreshHandler;
	BOOL _refreshRequested;
	BOOL _streamableZip;
	BOOL _isPaused;
	BOOL _isDiscretionary;
	BOOL _verifyCodeSignature;
	BOOL _verifyContent;
	BOOL _useCachingServer;
	NSURL* _downloadURL;
	NSString* _destinationPath;
	double _priority;
	ODRTagsRequest* _tagsRequest;
	long long _downloadIdentifier;
	NSString* _uuid;
	long long _size;
	double _assetOriginationTimestamp;
	NSString* _applicationBundleID;
	NSDictionary* _hashingData;
	double _previousOriginationTimestamp;

}

@property (readonly) NSURL * downloadURL;                            //@synthesize downloadURL=_downloadURL - In the implementation block
@property (readonly) NSString * destinationPath;                     //@synthesize destinationPath=_destinationPath - In the implementation block
@property (readonly) BOOL streamableZip;                             //@synthesize streamableZip=_streamableZip - In the implementation block
@property (assign,nonatomic) double priority;                        //@synthesize priority=_priority - In the implementation block
@property (readonly) NSProgress * progress;                          //@synthesize progress=_progress - In the implementation block
@property (retain) ODRTagsRequest * tagsRequest;                     //@synthesize tagsRequest=_tagsRequest - In the implementation block
@property (assign) BOOL isPaused;                                    //@synthesize isPaused=_isPaused - In the implementation block
@property (assign) BOOL isDiscretionary;                             //@synthesize isDiscretionary=_isDiscretionary - In the implementation block
@property (readonly) BOOL verifyCodeSignature;                       //@synthesize verifyCodeSignature=_verifyCodeSignature - In the implementation block
@property (assign) BOOL verifyContent;                               //@synthesize verifyContent=_verifyContent - In the implementation block
@property (readonly) BOOL useCachingServer;                          //@synthesize useCachingServer=_useCachingServer - In the implementation block
@property (readonly) BOOL hasRefreshHandler; 
@property (readonly) long long downloadIdentifier;                   //@synthesize downloadIdentifier=_downloadIdentifier - In the implementation block
@property (readonly) NSString * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (readonly) long long size;                                 //@synthesize size=_size - In the implementation block
@property (readonly) double assetOriginationTimestamp;               //@synthesize assetOriginationTimestamp=_assetOriginationTimestamp - In the implementation block
@property (readonly) NSString * applicationBundleID;                 //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (retain) NSDictionary * hashingData;                       //@synthesize hashingData=_hashingData - In the implementation block
@property (assign) double previousOriginationTimestamp;              //@synthesize previousOriginationTimestamp=_previousOriginationTimestamp - In the implementation block
+(id)requestWithUUID:(id)arg1 ;
+(void)initialize;
-(id)_initWithURL:(id)arg1 destinationPath:(id)arg2 priority:(double)arg3 streamableZip:(BOOL)arg4 size:(long long)arg5 verifyCodeSignature:(BOOL)arg6 useCachingServer:(BOOL)arg7 originationTimestamp:(double)arg8 applicationBundleID:(id)arg9 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 refreshHandler:(/*^block*/id)arg2 ;
-(id)initWithURL:(id)arg1 destinationPath:(id)arg2 priority:(double)arg3 streamableZip:(BOOL)arg4 size:(long long)arg5 verifyCodeSignature:(BOOL)arg6 useCachingServer:(BOOL)arg7 originationTimestamp:(double)arg8 applicationBundleID:(id)arg9 ;
-(void)didComplete;
-(id)initWithURL:(id)arg1 destinationPath:(id)arg2 priority:(double)arg3 streamableZip:(BOOL)arg4 ;
-(BOOL)hasRefreshHandler;
-(void)resubmitWithSourceURL:(id)arg1 ;
-(double)progressForBytesRead:(long long)arg1 ;
-(void)reportEnhancedParentProgressWithSecondsRemaining:(double)arg1 bytesDownloaded:(unsigned long long)arg2 ;
-(BOOL)streamableZip;
-(ODRTagsRequest *)tagsRequest;
-(void)setTagsRequest:(ODRTagsRequest *)arg1 ;
-(BOOL)verifyCodeSignature;
-(BOOL)verifyContent;
-(void)setVerifyContent:(BOOL)arg1 ;
-(BOOL)useCachingServer;
-(double)assetOriginationTimestamp;
-(NSDictionary *)hashingData;
-(void)setHashingData:(NSDictionary *)arg1 ;
-(double)previousOriginationTimestamp;
-(void)setPreviousOriginationTimestamp:(double)arg1 ;
-(BOOL)isDiscretionary;
-(void)cancel;
-(long long)size;
-(id)description;
-(double)priority;
-(void)setPriority:(double)arg1 ;
-(NSProgress *)progress;
-(NSString *)uuid;
-(void)prefetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setIsDiscretionary:(BOOL)arg1 ;
-(long long)downloadIdentifier;
-(void)setIsPaused:(BOOL)arg1 ;
-(BOOL)refresh;
-(BOOL)isPaused;
-(void)didFailWithError:(id)arg1 ;
-(NSString *)destinationPath;
-(NSString *)applicationBundleID;
-(NSURL *)downloadURL;
@end
