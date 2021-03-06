/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSFileLogger.h>

@class NSMutableSet;

@interface BBDefaultLog : BSFileLogger {

	NSMutableSet* _knownCategories;

}
-(void)dealloc;
-(id)init;
-(id)name;
-(int)level;
-(void)_setEnabled:(BOOL)arg1 ;
-(BOOL)_shouldEnableCategory:(id)arg1 ;
-(id)logPath;
-(void)_setLevel:(int)arg1 ;
-(id)logPreferenceName;
-(id)logPreferenceDomain;
-(void)reloadFromDefaults;
-(unsigned long long)logDestinations;
@end

