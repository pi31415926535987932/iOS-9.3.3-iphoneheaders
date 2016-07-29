/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMWhiteBalanceCommand : CAMCaptureCommand {

	BOOL __matchExposureMode;
	long long __whiteBalanceMode;

}

@property (nonatomic,readonly) BOOL _matchExposureMode;                  //@synthesize _matchExposureMode=__matchExposureMode - In the implementation block
@property (nonatomic,readonly) long long _whiteBalanceMode;              //@synthesize _whiteBalanceMode=__whiteBalanceMode - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithWhiteBalanceMode:(long long)arg1 ;
-(id)initWithMatchExposureMode;
-(long long)_whiteBalanceMode;
-(BOOL)_matchExposureMode;
-(id)_descriptionForWhiteBalanceMode:(long long)arg1 ;
@end
