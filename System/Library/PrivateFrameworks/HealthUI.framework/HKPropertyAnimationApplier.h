/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, CADisplayLink;

@interface HKPropertyAnimationApplier : NSObject {

	NSMutableDictionary* _animations;
	CADisplayLink* _displayLink;

}
-(id)init;
-(void)_displayLinkFired:(id)arg1 ;
-(void)cancelAnimationsForProperty:(id)arg1 ;
-(void)applyAnimation:(id)arg1 ;
-(void)_startDisplayLinkIfNecessary;
-(void)_stopDisplayLinkIfNecessary;
-(void)_applyAnimations;
-(void)_cleanupCompletedAnimations;
@end
