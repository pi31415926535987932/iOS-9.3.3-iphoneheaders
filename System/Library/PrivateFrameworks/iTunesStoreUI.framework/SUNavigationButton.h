/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UINavigationButton.h>

@class UIView;

@interface SUNavigationButton : UINavigationButton {

	UIView* _accessoryView;
	UIEdgeInsets _accessoryViewInsets;

}

@property (nonatomic,retain) UIView * accessoryView;                        //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets accessoryViewInsets;              //@synthesize accessoryViewInsets=_accessoryViewInsets - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(CGRect)_accessoryViewRectForContentRect:(CGRect)arg1 ;
-(void)setAccessoryViewInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)accessoryViewInsets;
@end
