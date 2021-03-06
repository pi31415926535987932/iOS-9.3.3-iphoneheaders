/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/CompanionCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CCCameraConnectionProtocol
@required
-(void)takePhotoWithCountdown:(unsigned long long)arg1;
-(oneway void)xpc_setCameraMode:(int)arg1 interruptCapture:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(oneway void)xpc_beginVideo;
-(oneway void)xpc_endVideo;
-(oneway void)xpc_setPreviewEndpoint:(id)arg1;
-(oneway void)xpc_setFocusPoint:(id)arg1;
-(oneway void)xpc_fetchCurrentOrientationAndMirroring:(/*^block*/id)arg1;
-(oneway void)xpc_cancelCountdown;

@end

