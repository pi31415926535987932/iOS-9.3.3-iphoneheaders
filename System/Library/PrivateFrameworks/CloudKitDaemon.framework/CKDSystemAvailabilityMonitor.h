/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface CKDSystemAvailabilityMonitor : NSObject {

	unsigned long long _availabilityState;
	NSMutableSet* _watchers;
	NSObject*<OS_dispatch_queue> _availabilityQueue;

}

@property (readonly) BOOL systemIsAvailable; 
@property (assign) unsigned long long availabilityState;                                  //@synthesize availabilityState=_availabilityState - In the implementation block
@property (nonatomic,retain) NSMutableSet * watchers;                                     //@synthesize watchers=_watchers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> availabilityQueue;              //@synthesize availabilityQueue=_availabilityQueue - In the implementation block
+(id)sharedMonitor;
-(void)dealloc;
-(id)init;
-(id)_init;
-(unsigned long long)availabilityState;
-(void)registerWatcher:(id)arg1 ;
-(void)unregisterWatcher:(id)arg1 ;
-(BOOL)_systemMayNowBeReady;
-(NSObject*<OS_dispatch_queue>)availabilityQueue;
-(NSMutableSet *)watchers;
-(void)setAvailabilityState:(unsigned long long)arg1 ;
-(void)_notifyWatchersOfStateChange;
-(BOOL)systemIsAvailable;
-(void)setWatchers:(NSMutableSet *)arg1 ;
-(void)setAvailabilityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

