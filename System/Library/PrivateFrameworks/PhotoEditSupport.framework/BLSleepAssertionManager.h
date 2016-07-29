/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface BLSleepAssertionManager : NSObject {

	NSObject*<OS_dispatch_semaphore> m_assertionSemaphore;
	long long m_assertionCount;
	BOOL m_waiting;
	int m_assertionLock;
	long long m_idleCount;
	int m_idleLock;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)hidden;
-(void)takeSleepAssertion;
-(void)releaseSleepAssertion;
-(void)waitForOutstandingSleepAssertions;
-(void)takeIdleAssertion;
-(void)releaseIdleAssertion;
@end
