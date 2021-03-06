/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol UIViewControllerContextTransitioningEx <UIViewControllerContextTransitioning>
@property (setter=_setContainerViews:,nonatomic,retain) NSArray * _containerViews; 
@property (assign,setter=_setPercentOffset:,nonatomic) double _percentOffset; 
@property (assign,setter=_setAllowUserInteraction:,getter=_allowUserInteraction,nonatomic) BOOL _allowUserInteraction; 
@required
-(BOOL)_allowUserInteraction;
-(void)__runAlongsideAnimations;
-(void)_setAllowUserInteraction:(BOOL)arg1;
-(NSArray *)_containerViews;
-(double)_percentOffset;
-(void)_interactivityDidChange:(BOOL)arg1;
-(void)_setContainerViews:(id)arg1;
-(void)_setPercentOffset:(double)arg1;

@end

