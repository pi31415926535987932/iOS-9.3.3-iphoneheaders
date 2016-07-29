/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteMediaServices/RMSBonjourServiceProvider.h>

@class NSMutableDictionary, NSArray;

@interface RMSPairingServiceProvider : RMSBonjourServiceProvider {

	NSMutableDictionary* _unmonitoredServices;
	NSArray* _pairedNetworkNames;

}

@property (nonatomic,retain) NSArray * pairedNetworkNames;              //@synthesize pairedNetworkNames=_pairedNetworkNames - In the implementation block
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)dealloc;
-(id)init;
-(id)searchType;
-(NSArray *)pairedNetworkNames;
-(void)setPairedNetworkNames:(NSArray *)arg1 ;
-(long long)serviceDiscoverySource;
-(long long)serviceLegacyFlagsFromTXTDictionary:(id)arg1 ;
@end
