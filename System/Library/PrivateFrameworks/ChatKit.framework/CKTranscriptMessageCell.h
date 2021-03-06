/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKTranscriptCell.h>

@class UIButton;

@interface CKTranscriptMessageCell : CKTranscriptCell {

	BOOL _wantsContactImageLayout;
	UIButton* _failureButton;

}

@property (assign,nonatomic) BOOL wantsContactImageLayout;              //@synthesize wantsContactImageLayout=_wantsContactImageLayout - In the implementation block
@property (assign,nonatomic) BOOL failed; 
@property (nonatomic,retain) UIButton * failureButton;                  //@synthesize failureButton=_failureButton - In the implementation block
+(double)failureButtonWidthPlusSpacing;
-(void)dealloc;
-(id)description;
-(id)contactImageView;
-(UIButton *)failureButton;
-(void)setWantsContactImageLayout:(BOOL)arg1 ;
-(BOOL)failed;
-(void)setFailed:(BOOL)arg1 ;
-(BOOL)wantsContactImageLayout;
-(void)layoutSubviewsForContents;
-(void)setFailureButton:(UIButton *)arg1 ;
@end

