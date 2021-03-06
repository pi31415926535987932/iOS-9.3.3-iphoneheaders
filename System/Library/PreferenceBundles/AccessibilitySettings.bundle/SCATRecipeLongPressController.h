/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/SCATDefaultVsLongPressController.h>

@class AXSwitchRecipe, AXSwitchRecipeMapping;

@interface SCATRecipeLongPressController : SCATDefaultVsLongPressController {

	AXSwitchRecipe* _recipe;
	AXSwitchRecipeMapping* _mapping;

}

@property (nonatomic,retain) AXSwitchRecipe * recipe;                      //@synthesize recipe=_recipe - In the implementation block
@property (nonatomic,retain) AXSwitchRecipeMapping * mapping;              //@synthesize mapping=_mapping - In the implementation block
-(id)actionStringForLongPress:(BOOL)arg1 ;
-(id)controllerForLongPress:(BOOL)arg1 ;
-(void)setRecipe:(AXSwitchRecipe *)arg1 ;
-(AXSwitchRecipe *)recipe;
-(void)dealloc;
-(AXSwitchRecipeMapping *)mapping;
-(void)setMapping:(AXSwitchRecipeMapping *)arg1 ;
@end

