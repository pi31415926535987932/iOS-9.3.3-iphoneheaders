/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRTelevisionClientConnection.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, MRPasscodeCredentials, MRDeviceInfo, MRDContentItemClient, MRCoreUtilsPairingSessionPeer, NSArray;

@interface MRDTelevisionServerClientConnection : MRTelevisionClientConnection {

	NSMutableArray* _virtualTouchDevices;
	NSMutableArray* _registeredVirtualVoiceInputDevices;
	NSObject*<OS_dispatch_queue> _serialQueue;
	MRPasscodeCredentials* _credentials;
	MRDeviceInfo* _deviceInfo;
	MRDContentItemClient* _contentItemClient;
	MRCoreUtilsPairingSessionPeer* _sessionPeer;

}

@property (nonatomic,retain) MRPasscodeCredentials * credentials;                         //@synthesize credentials=_credentials - In the implementation block
@property (nonatomic,copy) MRDeviceInfo * deviceInfo;                                     //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,readonly) NSArray * virtualTouchDevices; 
@property (nonatomic,readonly) NSArray * registeredVirtualVoiceInputDevices; 
@property (nonatomic,readonly) MRDContentItemClient * contentItemClient;                  //@synthesize contentItemClient=_contentItemClient - In the implementation block
@property (nonatomic,readonly) MRCoreUtilsPairingSessionPeer * sessionPeer;               //@synthesize sessionPeer=_sessionPeer - In the implementation block
-(void)unregisterAllVirtualVoiceInputDevices;
-(NSArray *)virtualTouchDevices;
-(NSArray *)registeredVirtualVoiceInputDevices;
-(void)addVirtualTouchDevice:(id)arg1 ;
-(id)virtualTouchDeviceWithID:(unsigned long long)arg1 ;
-(void)removeAllVirtualTouchDevices;
-(void)addRegisteredVirtualVoiceInputDevice:(unsigned)arg1 ;
-(void)setCredentials:(MRPasscodeCredentials *)arg1 ;
-(MRDContentItemClient *)contentItemClient;
-(MRCoreUtilsPairingSessionPeer *)sessionPeer;
-(void)dealloc;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3 ;
-(void)setDeviceInfo:(MRDeviceInfo *)arg1 ;
-(MRDeviceInfo *)deviceInfo;
-(MRPasscodeCredentials *)credentials;
@end

