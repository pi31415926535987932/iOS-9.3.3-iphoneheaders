/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UITableViewCellDeleteConfirmationGestureRecognizer;

@interface UITableViewCellDeleteConfirmationControl_Legacy : UIControl {

	BOOL _visible;
	UITableViewCellDeleteConfirmationGestureRecognizer* _deleteConfirmationGesture;

}

@property (assign,getter=isVisible,nonatomic) BOOL visible; 
+(CGSize)defaultSizeForTitle:(id)arg1 ;
-(void)_confirmationAnimationDidEnd;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)defaultSize;
-(void)layoutSubviews;
-(id)initWithTitle:(id)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)touchUpInside:(id)arg1 ;
-(void)touchUpOutside:(id)arg1 ;
-(void)cancelDeleteConfirmationWithGesture:(id)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
