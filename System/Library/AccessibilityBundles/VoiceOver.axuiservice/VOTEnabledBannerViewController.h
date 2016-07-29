/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class VOTEnabledBannerView;

@interface VOTEnabledBannerViewController : UIViewController {

	VOTEnabledBannerView* _bannerView;

}

@property (nonatomic,retain) VOTEnabledBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
-(void)hideAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)showAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadView;
-(void)setBannerView:(VOTEnabledBannerView *)arg1 ;
-(VOTEnabledBannerView *)bannerView;
@end
