/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:24 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface FBPreferences : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _enabledLogNames;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)reload;
-(BOOL)isLogEnabled:(id)arg1 ;
-(void)_queue_reload;
-(id)_extractEnabledLoggersFromPreferenceDomain:(id)arg1 ;
-(id)enabledLogNames;
@end

