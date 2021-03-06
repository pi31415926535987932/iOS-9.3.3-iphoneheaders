/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIImageView, UIButton;

@interface AXForceTouchSensitivityTestViewController : UIViewController {

	UIImageView* _messageImageView;
	UIButton* _doneButton;

}

@property (nonatomic,retain) UIImageView * messageImageView;              //@synthesize messageImageView=_messageImageView - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                       //@synthesize doneButton=_doneButton - In the implementation block
-(UIImageView *)messageImageView;
-(void)setMessageImageView:(UIImageView *)arg1 ;
-(void)animateDoneButtonSlideIn;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)setDoneButton:(UIButton *)arg1 ;
-(UIButton *)doneButton;
-(void)doneButtonTapped;
@end

