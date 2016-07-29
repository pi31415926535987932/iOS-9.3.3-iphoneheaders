/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class NSObject, NSMutableDictionary, NSOperationQueue;

@interface ISCrossfadeChef : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSMutableDictionary* _operationsByRequestID;
	long long __requestCounter;
	NSOperationQueue* __operationQueue;

}

@property (assign,setter=_setRequestCounter:,nonatomic) long long _requestCounter;                       //@synthesize _requestCounter=__requestCounter - In the implementation block
@property (setter=_setOperationQueue:,nonatomic,retain) NSOperationQueue * _operationQueue;              //@synthesize _operationQueue=__operationQueue - In the implementation block
+(id)defaultChef;
-(id)init;
-(NSOperationQueue *)_operationQueue;
-(long long)_requestCounter;
-(void)_setRequestCounter:(long long)arg1 ;
-(void)_removeOperationForRequestID:(long long)arg1 ;
-(long long)requestCrossfadeItemForVideoAsset:(id)arg1 sourceStartTime:(double)arg2 stillPhoto:(CGImageRef)arg3 photoEXIFOrientation:(int)arg4 crossfadeDuration:(double)arg5 numberOfFrames:(unsigned long long)arg6 targetSize:(CGSize)arg7 resultHandler:(/*^block*/id)arg8 ;
-(void)cancelRequestWithID:(long long)arg1 ;
-(void)_setOperationQueue:(id)arg1 ;
@end
