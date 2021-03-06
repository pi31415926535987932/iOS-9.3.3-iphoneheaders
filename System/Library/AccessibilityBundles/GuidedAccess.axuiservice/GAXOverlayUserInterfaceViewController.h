/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/GAXViewController.h>
#import <GuidedAccess/GAXOverlayUserInterfaceViewDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegatePrivate.h>

@protocol GAXOverlayUserInterfaceViewControllerDelegate;
@class NSMutableArray, NSString;

@interface GAXOverlayUserInterfaceViewController : GAXViewController <GAXOverlayUserInterfaceViewDelegate, UIPopoverControllerDelegate, UIPopoverControllerDelegatePrivate> {

	BOOL _hasOverlayUserInterface;
	id<GAXOverlayUserInterfaceViewControllerDelegate> _delegate;
	NSMutableArray* _presentedPopoverControllers;

}

@property (assign,nonatomic) id<GAXOverlayUserInterfaceViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hasOverlayUserInterface;                                            //@synthesize hasOverlayUserInterface=_hasOverlayUserInterface - In the implementation block
@property (nonatomic,retain) NSMutableArray * presentedPopoverControllers;                            //@synthesize presentedPopoverControllers=_presentedPopoverControllers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willPresentPopoverController:(id)arg1 ;
-(void)willPresentModalViewController;
-(void)releaseOutlets;
-(NSMutableArray *)presentedPopoverControllers;
-(void)setPresentedPopoverControllers:(NSMutableArray *)arg1 ;
-(void)_checkPresenceOfOverlayUserInterface;
-(BOOL)hasOverlayUserInterface;
-(BOOL)_hasOverlayUserInterface;
-(void)setHasOverlayUserInterface:(BOOL)arg1 ;
-(void)didDismissPopoverController:(id)arg1 ;
-(BOOL)isModalContentBeingPresentedInOverlayUserInterfaceView:(id)arg1 ;
-(void)setDelegate:(id<GAXOverlayUserInterfaceViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<GAXOverlayUserInterfaceViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)didDismissModalViewController;
@end

