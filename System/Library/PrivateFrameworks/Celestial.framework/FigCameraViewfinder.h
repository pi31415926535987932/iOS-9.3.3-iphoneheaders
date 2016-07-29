/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FigCameraViewfinderSession, FigDelegateStorage;

@interface FigCameraViewfinder : NSObject {

	FigCameraViewfinderSession* _delegateActiveViewfinderSession;
	FigDelegateStorage* _delegateStorage;

}

@property (readonly) id<FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate> delegate; 
@property (readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,retain) FigCameraViewfinderSession * delegateActiveViewfinderSession;                      //@synthesize delegateActiveViewfinderSession=_delegateActiveViewfinderSession - In the implementation block
+(id)cameraViewfinder;
-(void)dealloc;
-(id)init;
-(id<FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate>)delegate;
-(void)stop;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)startWithOptions:(id)arg1 ;
-(FigCameraViewfinderSession *)delegateActiveViewfinderSession;
-(void)setDelegateActiveViewfinderSession:(FigCameraViewfinderSession *)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
@end
