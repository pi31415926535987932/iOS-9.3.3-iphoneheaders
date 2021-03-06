/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUINavigationBarSectionController.h>
#import <libobjc.A.dylib/SKUIMenuPopoverDelegate.h>

@class UIControl, SKUINavigationBarMenusView, NSArray, SKUIMenuPopoverController, NSString;

@interface SKUINavigationBarMenusController : SKUINavigationBarSectionController <SKUIMenuPopoverDelegate> {

	UIControl* _focusedMenuButton;
	SKUINavigationBarMenusView* _menusView;
	NSArray* _menuViewElements;
	SKUIMenuPopoverController* _popoverController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)view;
-(void)willAppearInNavigationBar;
-(void)_menuButtonAction:(id)arg1 ;
-(void)menuPopoverDidCancel:(id)arg1 ;
-(void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2 ;
-(void)menuPopover:(id)arg1 willRepositionToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(id)initWithMenuViewElements:(id)arg1 ;
-(void)reloadSectionViews;
-(void)_destroyPopover;
-(id)_menuViewElementForView:(id)arg1 ;
@end

