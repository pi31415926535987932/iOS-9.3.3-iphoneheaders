/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MarkupUI/MarkupUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, _UIBackdropView, NSTimer;

@interface MUPDFPageLabelView : UIView {

	UILabel* _label;
	_UIBackdropView* _backdropView;
	NSTimer* _timer;
	unsigned long long currentPageIndex;

}

@property (getter=isTimerInstalled,nonatomic,readonly) BOOL timerInstalled; 
@property (assign,nonatomic) unsigned long long currentPageIndex; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setText:(id)arg1 ;
-(void)sizeToFit;
-(void)fadeOut;
-(void)clearTimer;
-(BOOL)isTimerInstalled;
-(unsigned long long)currentPageIndex;
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
-(void)showNowInSuperView:(id)arg1 atOrigin:(CGPoint)arg2 withText:(id)arg3 animated:(BOOL)arg4 ;
-(double)_fadeOutDuration;
-(void)_makeRoundedCorners;
-(double)_fadeOutDelay;
@end

