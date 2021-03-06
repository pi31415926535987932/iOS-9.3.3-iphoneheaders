/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, BBBulletin, NSMutableSet;

@interface BBObserverGatewayEnumerator : NSObject {

	BOOL _cancelled;
	NSArray* _gateways;
	BBBulletin* _bulletin;
	unsigned long long _feeds;
	double _gatewayTimeout;
	NSMutableSet* _gatewaysPlayedLightsAndSirens;

}

@property (nonatomic,copy) NSArray * gateways;                                        //@synthesize gateways=_gateways - In the implementation block
@property (nonatomic,retain) BBBulletin * bulletin;                                   //@synthesize bulletin=_bulletin - In the implementation block
@property (assign,nonatomic) unsigned long long feeds;                                //@synthesize feeds=_feeds - In the implementation block
@property (assign,nonatomic) double gatewayTimeout;                                   //@synthesize gatewayTimeout=_gatewayTimeout - In the implementation block
@property (nonatomic,copy) NSMutableSet * gatewaysPlayedLightsAndSirens;              //@synthesize gatewaysPlayedLightsAndSirens=_gatewaysPlayedLightsAndSirens - In the implementation block
-(void)cancel;
-(void)dealloc;
-(id)init;
-(unsigned long long)feeds;
-(void)setFeeds:(unsigned long long)arg1 ;
-(void)setGateways:(NSArray *)arg1 ;
-(void)setGatewayTimeout:(double)arg1 ;
-(void)enumerateWithCompletion:(/*^block*/id)arg1 ;
-(void)attemptNextGatewayInEnumerator:(id)arg1 playLightsAndSirens:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendToDefaultGatewayToPlayLightsAndSirens:(BOOL)arg1 ;
-(id)defaultGateway;
-(NSArray *)gateways;
-(double)gatewayTimeout;
-(NSMutableSet *)gatewaysPlayedLightsAndSirens;
-(void)setGatewaysPlayedLightsAndSirens:(NSMutableSet *)arg1 ;
-(BBBulletin *)bulletin;
-(void)setBulletin:(BBBulletin *)arg1 ;
@end

