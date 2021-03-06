/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBBaseSoftwareUpdateAlertItem.h>

@class SBSoftwareUpdateInstallOptions, SUDownload, NSString, NSMutableArray, NSTimer, SBSoftwareUpdateInstallOperationLifeCycleHandler, SUAutoInstallOperation;

@interface SBSoftwareUpdateInstallAlertItem : SBBaseSoftwareUpdateAlertItem {

	unsigned long long _alertStyle;
	BOOL _undimScreen;
	BOOL _choseInstallTonight;
	SBSoftwareUpdateInstallOptions* _installOptions;
	SUDownload* _download;
	BOOL _scheduleInstallAlertRepopOnDismiss;
	NSString* _repopReason;
	NSMutableArray* _buttonActionBlocks;
	NSTimer* _countdownTimer;
	unsigned long long _timeLeftUntilInstall;
	SBSoftwareUpdateInstallOperationLifeCycleHandler* _tryTonightOperationWrapper;

}

@property (nonatomic,readonly) unsigned long long style;                                                                                                                                           //@synthesize alertStyle=_alertStyle - In the implementation block
@property (nonatomic,__weak,readonly) SUAutoInstallOperation * tryTonightOperation; 
@property (setter=_setTryTonightOperationWrapper:,getter=_tryTonightOperationWrapper,nonatomic,retain) SBSoftwareUpdateInstallOperationLifeCycleHandler * tryTonightOperationWrapper;              //@synthesize tryTonightOperationWrapper=_tryTonightOperationWrapper - In the implementation block
-(id)initWithDownload:(id)arg1 style:(unsigned long long)arg2 softwareUpdateController:(id)arg3 tryTonightInstallOperation:(id)arg4 installOptions:(id)arg5 ;
-(void)_setTryTonightOperation:(id)arg1 ;
-(SUAutoInstallOperation *)tryTonightOperation;
-(void)_clearCountdownTimer;
-(BOOL)_shouldCountdown;
-(void)_countdownTimerFired;
-(void)_updateBodyTextForCountdown;
-(void)_installUpdateNowFromTimer:(BOOL)arg1 ;
-(void)_addButtonWithTitle:(id)arg1 action:(/*^block*/id)arg2 ;
-(id)_tryTonightOperationWrapper;
-(void)_setTryTonightOperationWrapper:(id)arg1 ;
-(void)_scheduleInstallAlertRepopOnDismissWithReason:(id)arg1 ;
-(id)_stringFromAlertStyle:(unsigned long long)arg1 ;
-(id)_bodyTextToModelSpecificLocalizedKey:(id)arg1 ;
-(id)initWithDownload:(id)arg1 softwareUpdateController:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)willPresentAlertView:(id)arg1 ;
-(unsigned long long)style;
-(BOOL)allowLockScreenDismissal;
-(BOOL)undimsScreen;
-(id)shortLockLabel;
-(void)willDeactivateForReason:(int)arg1 ;
-(void)didDeactivateForReason:(int)arg1 ;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
-(void)performUnlockAction;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(id)lockLabel;
-(BOOL)shouldShowInLockScreen;
@end

