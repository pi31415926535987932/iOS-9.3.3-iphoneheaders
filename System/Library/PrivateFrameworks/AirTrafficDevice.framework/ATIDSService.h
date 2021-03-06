/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATMessageLinkListener.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/ATSocketDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, IDSService, ATIDSConnectionInfo, NSMutableArray, NSString;

@interface ATIDSService : ATMessageLinkListener <IDSServiceDelegate, ATSocketDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	IDSService* _service;
	ATIDSConnectionInfo* _connectionInfo;
	NSMutableArray* _listeners;
	BOOL _running;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)openSocketPriorityFromATPendingChangePriority:(int)arg1 ;
-(void)stop;
-(BOOL)start;
-(id)initWithServiceName:(id)arg1 ;
-(void)_connect;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)_cancelPendingConnectionRequests;
-(void)_scheduleConnectWithPriority:(long long)arg1 ;
-(id)_messageTypeToString:(int)arg1 ;
-(void)_scheduleReconnect;
-(void)setPreferWifi:(BOOL)arg1 ;
-(void)_sendWakeup;
-(void)socket:(id)arg1 hasDataAvailable:(const char*)arg2 length:(long long)arg3 ;
-(void)socketDidClose:(id)arg1 ;
-(BOOL)hasPairedDevice;
-(id)deviceForId:(id)arg1 ;
-(void)requestConnectionToPairedDeviceWithPriority:(long long)arg1 ;
-(id)pairedDevice;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
@end

