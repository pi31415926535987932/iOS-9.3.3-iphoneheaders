/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLTBulletinSendQueueDelegate;
@interface BLTBulletinSendQueue : NSObject {

	id<BLTBulletinSendQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BLTBulletinSendQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)bulletinSendQueue;
-(void)setDelegate:(id<BLTBulletinSendQueueDelegate>)arg1 ;
-(id<BLTBulletinSendQueueDelegate>)delegate;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(/*^block*/id)arg3 ;
-(void)sendNow;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 isTrafficRestricted:(BOOL)arg4 didSend:(/*^block*/id)arg5 ;
-(void)handleFileURL:(id)arg1 ;
-(void)queuePending;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 isTrafficRestricted:(BOOL)arg4 didSend:(/*^block*/id)arg5 didQueue:(/*^block*/id)arg6 ;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(/*^block*/id)arg3 didQueue:(/*^block*/id)arg4 ;
@end

