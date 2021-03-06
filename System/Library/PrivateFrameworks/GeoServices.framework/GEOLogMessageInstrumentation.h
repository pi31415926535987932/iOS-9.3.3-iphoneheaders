/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableArray, NSMutableDictionary, NSObject, NSString;

@interface GEOLogMessageInstrumentation : NSObject {

	NSMutableArray* _registeredEventNames;
	NSMutableDictionary* _msgCountForRegisteredEvents;
	NSObject*<OS_dispatch_queue> _instrumenationQueue;
	NSObject*<OS_dispatch_source> _logMessageInstrumentationFlushTimer;
	BOOL _exitWhenAllInstrumentationLogsFlushed;
	unsigned long long _logMessageNothingToFlushCounter;
	NSString* _msgCountUserDefaultsKey;

}
+(id)defaultInstrumentation;
+(id)createDefaultInstrumentation;
-(void)dealloc;
-(id)init;
-(void)captureLogMsgCountForEventName:(id)arg1 logMsgCount:(long long)arg2 fromLogFrameworkAdaptor:(BOOL)arg3 ;
-(void)waitForEmptyInstrumentationQueue:(/*^block*/id)arg1 ;
-(void)captureLogMessageCollectionRequest:(id)arg1 forEventName:(id)arg2 fromLogFrameworkAdaptor:(BOOL)arg3 ;
-(void)disableLogMsgInstrumentation;
-(void)captureLogMessage:(id)arg1 forEventName:(id)arg2 fromLogFrameworkAdaptor:(BOOL)arg3 ;
-(void)_registerEventName:(id)arg1 ;
-(void)enableLogMsgInstrumentation;
@end

