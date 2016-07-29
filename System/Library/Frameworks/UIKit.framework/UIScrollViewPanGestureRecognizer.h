/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPanGestureRecognizer.h>

@class UIScrollView;

@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer {

	UIScrollView* _scrollView;
	SEL _scrollViewAction;
	CGPoint _reconsideredLockingLocation;
	unsigned _lastLockingAxis : 2;
	unsigned _lockingAxis : 2;
	unsigned _hasChildScrollView : 1;
	unsigned _hasParentScrollView : 1;
	unsigned _caughtDeceleratingScrollView : 1;
	unsigned _directionalLockEnabled : 1;
	unsigned _transfersTrackingFromParentScrollView : 1;
	double _translationScaleFactor;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                                      //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,getter=isDirectionalLockEnabled,nonatomic) BOOL directionalLockEnabled; 
@property (getter=_caughtDeceleratingScrollView,nonatomic,readonly) BOOL caughtDeceleratingScrollView; 
@property (assign,nonatomic) double translationScaleFactor;                                                         //@synthesize translationScaleFactor=_translationScaleFactor - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(CGPoint)translationInView:(id)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(double)_hysteresis;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setDirectionalLockEnabled:(BOOL)arg1 ;
-(BOOL)isDirectionalLockEnabled;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)_caughtDeceleratingScrollView;
-(void)_scrollViewDidEndZooming;
-(CGPoint)_adjustSceneReferenceLocation:(CGPoint)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)_resetGestureRecognizer;
-(BOOL)delaysTouchesBegan;
-(void)_centroidMovedTo:(CGPoint)arg1 atTime:(double)arg2 ;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg1 ;
-(void)setTranslationScaleFactor:(double)arg1 ;
-(BOOL)_canTransferTrackingFromParentPagingScrollView;
-(double)translationScaleFactor;
-(BOOL)_shouldTransferTrackingFromParentScrollViewForCurrentOffset;
-(BOOL)_shouldContinueToWaitToTransferTrackingFromParentScrollView;
@end
