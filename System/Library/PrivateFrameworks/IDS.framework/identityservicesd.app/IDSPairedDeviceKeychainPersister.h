/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/IDSPairedDevicePersister.h>

@class IDSPairedDeviceKeychainSchema, NSString;

@interface IDSPairedDeviceKeychainPersister : NSObject <IDSPairedDevicePersister> {

	IDSPairedDeviceKeychainSchema* _keychainSchema;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_pairedDevicesFromPropertyDictionaries:(id)arg1 ;
-(BOOL)_saveToKeychainWithDictionary:(id)arg1 ;
-(BOOL)_removeFromKeychain;
-(id)loadPairedDevices;
-(BOOL)savePairedDevices:(id)arg1 ;
-(id)init;
@end

