/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class CKServerChangeToken;

@interface CKDFetchNotificationChangesOperation : CKDOperation {

	BOOL _wantsChanges;
	BOOL _moreComing;
	/*^block*/id _notificationChangedBlock;
	CKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;
	CKServerChangeToken* _resultServerChangeToken;

}

@property (nonatomic,copy) id notificationChangedBlock;                                    //@synthesize notificationChangedBlock=_notificationChangedBlock - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                              //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) BOOL wantsChanges;                                            //@synthesize wantsChanges=_wantsChanges - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * resultServerChangeToken;                //@synthesize resultServerChangeToken=_resultServerChangeToken - In the implementation block
@property (assign,nonatomic) BOOL moreComing;                                              //@synthesize moreComing=_moreComing - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setNotificationChangedBlock:(id)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
-(unsigned long long)resultsLimit;
-(void)setWantsChanges:(BOOL)arg1 ;
-(BOOL)wantsChanges;
-(CKServerChangeToken *)previousServerChangeToken;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(id)notificationChangedBlock;
-(void)setResultServerChangeToken:(CKServerChangeToken *)arg1 ;
-(BOOL)moreComing;
-(void)setMoreComing:(BOOL)arg1 ;
-(void)_handleFetchChangesRequestFinished:(id)arg1 ;
-(CKServerChangeToken *)resultServerChangeToken;
@end

