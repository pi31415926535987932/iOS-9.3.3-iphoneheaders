/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, NSDictionary;

@interface UIDropShadowView : UIView {

	UIView* _backgroundImage;
	NSDictionary* _preservedLayerValues;
	double _cornerRadius;
	UIView* _contentView;

}

@property (assign,nonatomic) double cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic,__weak) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(double)cornerRadius;
-(void)willBeginRotationWithOriginalBounds:(CGRect)arg1 newBounds:(CGRect)arg2 ;
-(void)didFinishRotation;
-(void)updateShadowPath;
@end

