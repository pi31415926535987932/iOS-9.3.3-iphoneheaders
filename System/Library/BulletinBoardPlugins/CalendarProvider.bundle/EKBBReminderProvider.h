/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/BulletinBoardPlugins/CalendarProvider.bundle/CalendarProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarProvider/EKBBDataProvider.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, _EKNotificationMonitor, NSDateFormatter, SBSApplicationService;

@interface EKBBReminderProvider : EKBBDataProvider {

	NSMutableDictionary* _closedBulletins;
	NSMutableDictionary* _reminderListNotifications;
	BOOL _needsReload;
	NSObject*<OS_dispatch_queue> _loaderQueue;
	NSObject*<OS_dispatch_queue> _closedQueue;
	NSObject*<OS_dispatch_queue> _badgeCountQueue;
	NSObject*<OS_dispatch_queue> _invitesQueue;
	_EKNotificationMonitor* _notificationMonitor;
	NSDateFormatter* _snoozeOptionDateFormatter;
	NSDateFormatter* _dueDateLabelDateFormatter;
	SBSApplicationService* _sbApplicationShortcutService;

}

@property (retain) SBSApplicationService * sbApplicationShortcutService;              //@synthesize sbApplicationShortcutService=_sbApplicationShortcutService - In the implementation block
-(id)expirationDateForAlertInfo:(id)arg1 ;
-(void)_notificationsChanged:(id)arg1 ;
-(id)defaultURLForAlertInfo:(id)arg1 ;
-(id)messageStringForAlert:(id)arg1 ;
-(id)viewButtonTitleForAlertInfo:(id)arg1 ;
-(id)modalSubtitleForAlertInfo:(id)arg1 ;
-(double)_defaultSnoozeTime;
-(id)modalTitleForAlertInfo:(id)arg1 ;
-(void)_reloadInvitesIfNeeded;
-(BOOL)supportsTravelAdvice;
-(id)actionButtonColorForAlertInfo:(id)arg1 ;
-(id)actionButtonTitleForAlertInfo:(id)arg1 ;
-(void)bulletinClosed:(id)arg1 ;
-(void)_updateBadgeCount:(id)arg1 ;
-(void)alarmsDidFire:(id)arg1 ;
-(id)emptyModalTitle;
-(id)_bulletinRequestForReminder:(id)arg1 ;
-(id)entityScheme;
-(id)modalMessageForAlertInfo:(id)arg1 ;
-(BOOL)allowsLocationAlerts;
-(BOOL)_loadNotifications;
-(id)_reminderListNotifications;
-(void)_notificationCountChanged:(id)arg1 ;
-(void)_addNotification:(id)arg1 replace:(BOOL)arg2 ;
-(SBSApplicationService *)sbApplicationShortcutService;
-(void)clearAllAlerts;
-(void)_unalertedNotificationsReceived:(id)arg1 ;
-(id)_bulletinRequestWithCalendarNotification:(id)arg1 ;
-(id)supplementaryActionsForAlertInfo:(id)arg1 bulletin:(id)arg2 ;
-(id)supplementaryActionsForCompactLayoutForAlertInfo:(id)arg1 bulletin:(id)arg2 ;
-(id)_springBoardRemindersShortcutItemsFromEventStore:(id)arg1 ;
-(void)_updateBulletinRequest:(id)arg1 forReminder:(id)arg2 ;
-(BOOL)_shouldIncludeBulletin:(id)arg1 sinceDate:(id)arg2 addedIDs:(id)arg3 ;
-(id)_formattedPhoneNumberFromPhoneNumber:(id)arg1 ;
-(id)_phoneNumberTypeStringFromPhoneNumber:(id)arg1 ;
-(id)_sortedListOfCalendarsFromEventStore:(id)arg1 ;
-(void)_handleDeclineAndRemindMessageWithUserInfo:(id)arg1 ;
-(BOOL)shouldCompleteReminderWhenCustomActionExecuted:(id)arg1 ;
-(id)_markAsCompletedActionWithAlertInfo:(id)arg1 ;
-(id)snoozeActionForAlertInfo:(id)arg1 timeSpan:(int)arg2 ;
-(id)customActionSupplementaryActionForAlertInfo:(id)arg1 bulletin:(id)arg2 ;
-(id)_createNewBulletinRequestFromNotification:(id)arg1 ;
-(void)setUpLayoutDataForPluginWithBulletin:(id)arg1 alertInfo:(id)arg2 ;
-(void)setSbApplicationShortcutService:(SBSApplicationService *)arg1 ;
-(id)_remindMeWhenILeaveActionWithAlertInfo:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)sortDescriptors;
-(id)sectionIdentifier;
-(unsigned long long)allowedEntityTypes;
-(void)_reloadIfNeeded;
-(void)_reload;
-(void)databaseChanged:(id)arg1 ;
-(void)firstUnlock;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)sectionParameters;
-(void)dataProviderDidLoad;
-(void)receiveMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(id)universalSectionIdentifier;
-(id)defaultSectionInfo;
@end
