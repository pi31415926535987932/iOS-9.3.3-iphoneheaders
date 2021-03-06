/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CAMHDRCommand : CAMCaptureCommand <NSCopying, NSCoding> {

	BOOL __shouldCaptureEV0;
	long long __HDRMode;

}

@property (nonatomic,readonly) long long _HDRMode;                  //@synthesize _HDRMode=__HDRMode - In the implementation block
@property (nonatomic,readonly) BOOL _shouldCaptureEV0;              //@synthesize _shouldCaptureEV0=__shouldCaptureEV0 - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithHDRMode:(long long)arg1 ;
-(long long)_HDRMode;
-(BOOL)_shouldCaptureEV0;
-(long long)_captureHDRModeForHDRMode:(long long)arg1 ;
-(id)initWithHDRMode:(long long)arg1 shouldCaptureEV0:(BOOL)arg2 ;
@end

