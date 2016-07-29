/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSIMLockEntryAlertView.h>

@class NSString;

@interface SBSIMLockPUKEntryAlertView : SBSIMLockEntryAlertView {

	int _state;
	NSString* _enteredPUKCode;
	NSString* _newPIN;

}
-(void)setupSuccess;
-(void)setupFailureState;
-(id)_pukAttemptsRemainingLabel;
-(void)_attemptPUKUnlock;
-(void)_unlock;
-(id)label;
-(id)titleText;
@end
