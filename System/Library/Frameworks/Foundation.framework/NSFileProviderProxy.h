/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:17 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileReactorProxy.h>

@interface NSFileProviderProxy : NSFileReactorProxy {

	BOOL _wantsWriteNotifications;

}

@property (assign) BOOL wantsWriteNotifications;              //@synthesize wantsWriteNotifications=_wantsWriteNotifications - In the implementation block
-(void)setItemLocation:(id)arg1 ;
-(void)observePresentationChangeOfKind:(id)arg1 withPresenter:(id)arg2 url:(id)arg3 newURL:(id)arg4 ;
-(void)setWantsWriteNotifications:(BOOL)arg1 ;
-(/*^block*/id)provideItemAtURL:(id)arg1 recursively:(BOOL)arg2 forAccessClaim:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)providePhysicalURLForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)observeEndOfWriteAtLocation:(id)arg1 forAccessClaim:(id)arg2 ;
-(void)forwardUsingMessageSender:(/*^block*/id)arg1 ;
-(void)provideLogicalURLForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)wantsWriteNotifications;
@end
