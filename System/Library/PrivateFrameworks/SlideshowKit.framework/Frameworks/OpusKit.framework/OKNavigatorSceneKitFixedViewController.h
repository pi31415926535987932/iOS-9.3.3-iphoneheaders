/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKNavigatorSceneKitViewController.h>

@class OKPageSceneViewController, OKPageViewController;

@interface OKNavigatorSceneKitFixedViewController : OKNavigatorSceneKitViewController {

	OKPageSceneViewController* _pageViewController;

}

@property (nonatomic,retain) OKPageViewController * pageViewController;              //@synthesize pageViewController=_pageViewController - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)commonInit;
-(void)setPageViewController:(OKPageViewController *)arg1 ;
-(OKPageViewController *)pageViewController;
-(void)navigateToPageWithName:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)updatePageViewController;
@end

