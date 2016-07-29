/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Phone.siriUIBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>

@class NSTimer, SiriPhoneEmergencyCallView, SAPhoneCallEmergencySnippet;

@interface SiriPhoneEmergencyCallController : SiriUISnippetViewController {

	long long _seconds;
	NSTimer* _countdownTimer;
	BOOL _alreadySentFinishEmergencyCallNotification;

}

@property (nonatomic,retain) SiriPhoneEmergencyCallView * view; 
@property (nonatomic,retain) SAPhoneCallEmergencySnippet * snippet; 
-(void)_updateCountdown:(id)arg1 ;
-(void)_setCountdownString;
-(void)sendWillLeaveEmergencyCallNotificationIfNecessary;
-(void)dealloc;
-(void)loadView;
-(void)setCancelled:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setSnippet:(SAPhoneCallEmergencySnippet *)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)willCancel;
-(void)willConfirm;
-(void)setConfirmed:(BOOL)arg1 ;
@end
