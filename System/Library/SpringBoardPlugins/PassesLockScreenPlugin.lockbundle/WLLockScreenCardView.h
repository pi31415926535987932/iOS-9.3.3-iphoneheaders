/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/PassesLockScreenPlugin.lockbundle/PassesLockScreenPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/WLCardViewDelegate.h>

@protocol WLLockScreenCardViewDelegate;
@class PKPassView, PKPass, NSString;

@interface WLLockScreenCardView : UIView <WLCardViewDelegate> {

	PKPassView* _passView;
	id<WLLockScreenCardViewDelegate> _delegate;
	PKPass* _pass;
	unsigned long long _index;

}

@property (assign,nonatomic) id<WLLockScreenCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKPass * pass;                                          //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) PKPassView * passView; 
@property (assign,nonatomic) unsigned long long index;                               //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) BOOL showingFront; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<WLLockScreenCardViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<WLLockScreenCardViewDelegate>)delegate;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setDiff:(id)arg1 ;
-(PKPass *)pass;
-(PKPassView *)passView;
-(void)setPass:(PKPass *)arg1 ;
-(BOOL)showingFront;
-(void)passView:(id)arg1 flipButtonPressedForPass:(id)arg2 ;
-(void)passView:(id)arg1 resizeButtonPressedForPass:(id)arg2 ;
@end
