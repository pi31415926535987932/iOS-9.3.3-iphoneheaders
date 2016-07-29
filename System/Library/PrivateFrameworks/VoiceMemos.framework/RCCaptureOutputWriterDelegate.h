/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RCCaptureOutputWriterDelegate <NSObject>
@required
-(void)captureOutputWriter:(id)arg1 captureSessionDidTerminateWithError:(id)arg2;
-(void)captureOutputWriter:(id)arg1 didStartWritingToOutputFileAtURL:(id)arg2;
-(void)captureOutputWriter:(id)arg1 didPauseWritingToOutputFileAtURL:(id)arg2;
-(void)captureOutputWriter:(id)arg1 didResumeWritingToOutputFileAtURL:(id)arg2;
-(void)captureOutputWriter:(id)arg1 willFinishWritingToOutputFileAtURL:(id)arg2 error:(id)arg3;
-(void)captureOutputWriter:(id)arg1 didFinishWritingToOutputFileAtURL:(id)arg2 error:(id)arg3;
-(void)captureOutputWriter:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2;

@end
