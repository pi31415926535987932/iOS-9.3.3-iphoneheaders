/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAAnimationGroup;

@interface CAMTorchPattern : NSObject {

	float _torchLevel;
	double _startTime;
	long long __type;
	CAAnimationGroup* __animationGroup;
	double __lastUpdateTime;

}

@property (nonatomic,readonly) float torchLevel;                                //@synthesize torchLevel=_torchLevel - In the implementation block
@property (assign,nonatomic) double startTime;                                  //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) long long _type;                                 //@synthesize _type=__type - In the implementation block
@property (nonatomic,readonly) CAAnimationGroup * _animationGroup;              //@synthesize _animationGroup=__animationGroup - In the implementation block
@property (nonatomic,readonly) double _lastUpdateTime;                          //@synthesize _lastUpdateTime=__lastUpdateTime - In the implementation block
-(id)init;
-(void)setStartTime:(double)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(long long)_type;
-(double)startTime;
-(void)_updateAnimationGroup;
-(id)_patternAnimationWithBeginTime:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3 ;
-(id)_blinkAnimationWithBeginTime:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3 ;
-(id)_shortPatternAnimationGroup;
-(id)_longPatternAnimationGroup;
-(id)_blinkAnimationGroup;
-(id)_doubleBlinkAnimationGroup;
-(void)updateAtTime:(double)arg1 ;
-(float)torchLevel;
-(CAAnimationGroup *)_animationGroup;
-(double)_lastUpdateTime;
@end

