/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface AccountPSOutgoingController : PSListController {

	PSSpecifier* _newOutgoingAccountSpecifier;

}
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(id)_getStatusForServer:(id)arg1 ;
-(id)specifierForDeliveryAccount:(id)arg1 isPrimary:(BOOL)arg2 isCarrierAccount:(BOOL)arg3 ;
-(void)reloadOutgoingAccounts;
-(void)finishedAccountSetup;
-(void)canceledAccountSetup;
@end
