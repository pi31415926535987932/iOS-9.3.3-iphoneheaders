/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class StoreKitClientIdentity;

@interface ClaimStoreKitClientOperation : ISOperation {

	StoreKitClientIdentity* _clientIdentity;

}

@property (copy,readonly) StoreKitClientIdentity * clientIdentity; 
-(void)run;
-(StoreKitClientIdentity *)clientIdentity;
-(id)initWithClientIdentity:(id)arg1 ;
@end

