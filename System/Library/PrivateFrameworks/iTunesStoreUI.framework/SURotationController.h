/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class SUViewController;

@interface SURotationController : NSObject {

	SUViewController* _viewController;

}

@property (assign,nonatomic) SUViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setViewController:(SUViewController *)arg1 ;
-(SUViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
-(void)finishRotationFromInterfaceOrientation:(long long)arg1 ;
-(void)animateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)prepareToRotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)orientationAffectsViewFrame;
-(CGRect)viewFrameForInterfaceOrientation:(long long)arg1 ;
@end
