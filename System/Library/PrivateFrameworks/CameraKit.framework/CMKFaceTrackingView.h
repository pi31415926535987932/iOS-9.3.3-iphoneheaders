/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKFocusView.h>

@interface CMKFaceTrackingView : CMKFocusView {

	BOOL _isInFrame;

}

@property (assign,nonatomic) BOOL isInFrame;              //@synthesize isInFrame=_isInFrame - In the implementation block
-(id)init;
-(void)fadeOut;
-(void)fadeIn;
-(double)fadeOutDuration;
-(void)_loadImagesWithColor:(id)arg1 imageSize:(CGSize*)arg2 ;
-(id)_createContentsAnimation;
-(id)_createBoundsAnimation;
-(void)setIsInFrame:(BOOL)arg1 ;
-(BOOL)isInFrame;
-(void)animateToFrame:(CGRect)arg1 ;
@end
