/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRCameraReaderDelegate <NSObject>
@optional
-(void)cameraReaderDidDisplayMessage:(id)arg1;
-(void)cameraReaderDidFindTarget:(id)arg1;
-(void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
-(void)cameraReaderDidFindTarget:(id)arg1 withCorners:(id)arg2;
-(void)cameraReader:(id)arg1 didRecognizedNewObjects:(id)arg2;

@required
-(void)cameraReaderDidCancel:(id)arg1;
-(void)cameraReaderDidEnd:(id)arg1;
-(void)cameraReader:(id)arg1 didFailWithError:(id)arg2;

@end

