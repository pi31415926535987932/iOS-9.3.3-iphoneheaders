/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBApplication.h>

@interface SBNewsstandApplication : SBApplication {

	unsigned _supportsNewsstandContentBackgroundMode : 1;
	unsigned long long _allowedContentNotificationsPerDay;
	unsigned char _newsstandWakes;

}
-(Class)iconClass;
-(BOOL)supportsBackgroundAppRefresh;
-(void)resumeForContentAvailable;
-(BOOL)shouldThrottleContentNotificationOnDate:(id)arg1 withLastCount:(unsigned long long*)arg2 onDay:(long long*)arg3 ;
-(BOOL)isNewsstandApplication;
-(BOOL)supportsNewsstandContentBackgroundMode;
-(void)activate;
-(id)initWithApplicationInfo:(id)arg1 ;
@end

