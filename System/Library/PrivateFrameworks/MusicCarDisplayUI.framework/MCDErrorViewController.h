/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UILabel, UIButton, NSString;

@interface MCDErrorViewController : UIViewController {

	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIButton* _okButton;
	NSString* _errorTitle;
	NSString* _errorMessage;

}

@property (nonatomic,retain) NSString * errorTitle;                //@synthesize errorTitle=_errorTitle - In the implementation block
@property (nonatomic,retain) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(void)dealloc;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)setErrorTitle:(NSString *)arg1 ;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorTitle;
-(NSString *)errorMessage;
-(void)okButtonTapped:(id)arg1 ;
-(void)updateTitleLabelText;
-(void)updateMessageLabelText;
@end

