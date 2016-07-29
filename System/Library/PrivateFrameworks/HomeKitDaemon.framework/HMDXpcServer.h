/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMMessageDispatcher.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/HMMessageReceiver.h>
#import <libobjc.A.dylib/HMDApplicationMonitorDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class HMDApplicationRegistry, NSObject, NSUUID, NSXPCListener, NSMutableSet, HMDApplicationMonitor, HMDIDSMessageDispatcher, HMMessageDispatcher, HMDBackgroundAppMessageFilter, NSString;

@interface HMDXpcServer : HMMessageDispatcher <NSXPCListenerDelegate, HMMessageReceiver, HMDApplicationMonitorDelegate> {

	HMDApplicationRegistry* _appRegistry;
	NSObject*<OS_dispatch_queue> _xpcWorkQueue;
	NSUUID* _uuid;
	NSXPCListener* _xpcListener;
	NSMutableSet* _xpcClients;
	HMDApplicationMonitor* _appMonitor;
	NSObject*<OS_dispatch_group> _activeMessageTracker;
	HMDIDSMessageDispatcher* _recvDispatcher;
	HMMessageDispatcher* _notificationRelayDispatcher;
	HMDBackgroundAppMessageFilter* _backgroundAppMsgFilter;

}

@property (nonatomic,retain) HMDApplicationRegistry * appRegistry;                                //@synthesize appRegistry=_appRegistry - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> xpcWorkQueue;                           //@synthesize xpcWorkQueue=_xpcWorkQueue - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                       //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSXPCListener * xpcListener;                                         //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,retain) NSMutableSet * xpcClients;                                           //@synthesize xpcClients=_xpcClients - In the implementation block
@property (assign,nonatomic,__weak) HMDApplicationMonitor * appMonitor;                           //@synthesize appMonitor=_appMonitor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> activeMessageTracker;                   //@synthesize activeMessageTracker=_activeMessageTracker - In the implementation block
@property (nonatomic,retain) HMDIDSMessageDispatcher * recvDispatcher;                            //@synthesize recvDispatcher=_recvDispatcher - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * notificationRelayDispatcher;                   //@synthesize notificationRelayDispatcher=_notificationRelayDispatcher - In the implementation block
@property (nonatomic,retain) HMDBackgroundAppMessageFilter * backgroundAppMsgFilter;              //@synthesize backgroundAppMsgFilter=_backgroundAppMsgFilter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(void)reset;
-(BOOL)stop;
-(BOOL)start;
-(NSUUID *)uuid;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)endPoint;
-(NSXPCListener *)xpcListener;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(void)deregisterReceiver:(id)arg1 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 ;
-(void)_registerForMessages;
-(void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(/*^block*/id)arg3 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setNotificationRelayDispatcher:(HMMessageDispatcher *)arg1 ;
-(HMMessageDispatcher *)notificationRelayDispatcher;
-(id)initWithQueue:(id)arg1 receiveDispatcher:(id)arg2 notificationRelayDispatcher:(id)arg3 messageFilterChain:(id)arg4 registerAsMachService:(BOOL)arg5 ;
-(HMDApplicationRegistry *)appRegistry;
-(void)sendMessage:(id)arg1 target:(id)arg2 completionQueue:(id)arg3 deliveryCompletionHandler:(/*^block*/id)arg4 ;
-(void)dispatchMessage:(id)arg1 target:(id)arg2 ;
-(HMDApplicationMonitor *)appMonitor;
-(NSMutableSet *)xpcClients;
-(NSObject*<OS_dispatch_queue>)xpcWorkQueue;
-(NSObject*<OS_dispatch_group>)activeMessageTracker;
-(HMDIDSMessageDispatcher *)recvDispatcher;
-(HMDBackgroundAppMessageFilter *)backgroundAppMsgFilter;
-(void)_sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(/*^block*/id)arg3 withDeliveryCompletion:(/*^block*/id)arg4 ;
-(void)deregisterForMessage:(id)arg1 receiver:(id)arg2 ;
-(void)_handleSuspendXPCConnectionRequest:(id)arg1 ;
-(void)_handleResumeXPCConnectionRequest:(id)arg1 ;
-(void)applicationMonitorDidChangeActiveHomeKitAppStatus:(BOOL)arg1 ;
-(void)applicationMonitorDidChangeAppState:(id)arg1 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)setAppRegistry:(HMDApplicationRegistry *)arg1 ;
-(void)setXpcWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setXpcClients:(NSMutableSet *)arg1 ;
-(void)setAppMonitor:(HMDApplicationMonitor *)arg1 ;
-(void)setActiveMessageTracker:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setRecvDispatcher:(HMDIDSMessageDispatcher *)arg1 ;
-(void)setBackgroundAppMsgFilter:(HMDBackgroundAppMessageFilter *)arg1 ;
@end
