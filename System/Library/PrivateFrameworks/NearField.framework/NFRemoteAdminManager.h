/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/NFRemoteAdminManagerCallbacks.h>

@class NSXPCConnection, NSMutableSet, NSString;

@interface NFRemoteAdminManager : NSObject <NSXPCConnectionDelegate, NFRemoteAdminManagerCallbacks> {

	NSXPCConnection* _connection;
	BOOL _hasEventListener;
	NSMutableSet* _eventListeners;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRemoteAdminManager;
-(void)dealloc;
-(id)init;
-(id)registrationInfo;
-(void)unregisterEventListener:(id)arg1 ;
-(BOOL)setRegistrationInfo:(id)arg1 ;
-(BOOL)queueServerConnection:(id)arg1 ;
-(BOOL)queueServerConnectionForApplets:(id)arg1 ;
-(void)connectToServer:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)registerEventListener:(id)arg1 ;
-(void)remoteAdminCleanupProgress:(double)arg1 ;
-(void)didCloseXPCConnection:(id)arg1 ;
-(void)_checkForConnectionReset;
-(id)nextRequestForServer:(id)arg1 ;
@end

