/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <SpringBoard/SBIconViewMapDelegate.h>
#import <SpringBoard/SBIconViewDelegate.h>

@protocol SBAppSwitcherIconControllerDelegate;
@class NSMutableArray, NSMutableDictionary, UIScrollView, UIView, SBStopScrollingGestureRecognizer, SBIconViewMap, _UILegibilitySettings, NSArray, NSString;

@interface SBAppSwitcherIconController : UIViewController <UIScrollViewDelegate, SBIconViewMapDelegate, SBIconViewDelegate> {

	NSMutableArray* _appList;
	NSMutableDictionary* _iconViews;
	NSMutableArray* _iconViewCenters;
	BOOL _appListIsValid;
	UIScrollView* _scrollView;
	UIView* _iconContainer;
	double _distanceBetweenCenters;
	double _nominalDistanceBetweenCenters3;
	double _nominalDistanceBetweenCenters5;
	unsigned long long _iconTransitionIndex;
	BOOL _dragMaster;
	BOOL _preventScroll;
	SBStopScrollingGestureRecognizer* _stopScrollingGesture;
	long long _layoutOrientation;
	long long _simplicityOptions;
	CGRect _iconViewDefaultFrame;
	SBIconViewMap* _iconViewMap;
	_UILegibilitySettings* _legibilitySettings;
	id<SBAppSwitcherIconControllerDelegate> _delegate;
	NSArray* _displayItems;

}

@property (assign,nonatomic,__weak) id<SBAppSwitcherIconControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                           //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,copy) NSArray * displayItems;                                                 //@synthesize displayItems=_displayItems - In the implementation block
@property (assign,nonatomic) unsigned long long iconTransitionIndex;                               //@synthesize iconTransitionIndex=_iconTransitionIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)nominalDistanceBetween3IconCentersForSize:(CGSize)arg1 ;
+(double)nominalDistanceBetween5IconCentersForSize:(CGSize)arg1 ;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2 ;
-(void)iconHandleLongPress:(id)arg1 ;
-(void)iconTapped:(id)arg1 ;
-(void)iconTouchBegan:(id)arg1 ;
-(BOOL)iconShouldAllowTap:(id)arg1 ;
-(double)iconLabelWidth;
-(Class)iconViewClassForIcon:(id)arg1 location:(int)arg2 ;
-(int)viewMap:(id)arg1 locationForIcon:(id)arg2 ;
-(id)windowForRecycledViewsInViewMap:(id)arg1 ;
-(void)setDisplayItems:(NSArray *)arg1 ;
-(void)setOffsetToIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setIconTransitionIndex:(unsigned long long)arg1 ;
-(void)reloadInOrientation:(long long)arg1 ;
-(void)switcherWasDismissed:(BOOL)arg1 ;
-(void)cancelScrolling;
-(void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 duration:(double)arg3 updateScrollPosition:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)removeItem:(id)arg1 duration:(double)arg2 updateScrollPosition:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)replaceItemAtIndex:(unsigned long long)arg1 withNewItem:(id)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_iconsReloaded:(id)arg1 ;
-(CGPoint)_centerOfIndex:(unsigned long long)arg1 forDistance:(double)arg2 inOrientation:(long long)arg3 ;
-(double)_halfWidth;
-(double)_distanceBetweenCenters;
-(double)_maxXOffsetForDistance:(double)arg1 ;
-(void)_recalculateBaseIconSpacingValues;
-(void)_handleStopScrollingGesture:(id)arg1 ;
-(void)_cleanupAllIcons;
-(unsigned long long)_centeredIndex;
-(double)_recalculateLayout:(BOOL)arg1 ;
-(void)_updateVisibleIconViewsWithPadding:(BOOL)arg1 ;
-(void)_layoutForDistance:(double)arg1 ;
-(double)_calculateDistanceBetweenCentersBasedOnCenteredIndex:(unsigned long long)arg1 ;
-(void)_cleanupIcon:(id)arg1 ;
-(void)_layoutIconViewInsertingIfNecessaryForDisplayItemAtIndex:(unsigned long long)arg1 ;
-(CGRect)_iconFaultRectForIndex:(unsigned long long)arg1 ;
-(BOOL)_isIndexVisible:(unsigned long long)arg1 withPadding:(BOOL)arg2 ;
-(id)_iconViewForIndex:(unsigned long long)arg1 ;
-(id)_safeDelegate;
-(CGPoint)_adjustedCenter:(CGPoint)arg1 forIconView:(id)arg2 ;
-(double)_calculateDistanceBetweenCentersBasedOnCurrentContentOffset;
-(Class)viewMap:(id)arg1 iconViewClassForIcon:(id)arg2 ;
-(unsigned long long)iconTransitionIndex;
-(void)setDelegate:(id<SBAppSwitcherIconControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<SBAppSwitcherIconControllerDelegate>)delegate;
-(long long)_windowInterfaceOrientation;
-(void)loadView;
-(void)setNormalizedOffset:(double)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(BOOL)isScrolling;
-(NSArray *)displayItems;
-(void)cancelTracking;
@end

