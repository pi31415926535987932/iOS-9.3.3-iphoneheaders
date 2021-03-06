/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Microblog.siriUIBundle/Microblog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Microblog/Microblog-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UITextView, ACMicroblogLocationView;

@interface ACMicroblogSnippetView : UIView {

	NSString* _text;
	UITextView* _textView;
	ACMicroblogLocationView* _locationView;

}

@property (nonatomic,copy) NSString * text;                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UITextView * textView;                               //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) ACMicroblogLocationView * locationView;              //@synthesize locationView=_locationView - In the implementation block
-(void)setLocationView:(ACMicroblogLocationView *)arg1 ;
-(ACMicroblogLocationView *)locationView;
-(id)initWithType:(int)arg1 frame:(CGRect)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(BOOL)canResignFirstResponder;
-(UITextView *)textView;
-(void)updateStatus:(int)arg1 ;
@end

