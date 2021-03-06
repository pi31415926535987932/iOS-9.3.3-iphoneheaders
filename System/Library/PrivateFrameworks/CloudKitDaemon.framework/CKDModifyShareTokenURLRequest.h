/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDModifyShareTokenURLRequest : CKDURLRequest {

	/*^block*/id _shareTokenModifiedBlock;
	NSArray* _shareTokenInfos;
	NSMutableDictionary* _shareTokenInfosByRequestID;

}

@property (nonatomic,copy) id shareTokenModifiedBlock;                                      //@synthesize shareTokenModifiedBlock=_shareTokenModifiedBlock - In the implementation block
@property (nonatomic,retain) NSArray * shareTokenInfos;                                     //@synthesize shareTokenInfos=_shareTokenInfos - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareTokenInfosByRequestID;              //@synthesize shareTokenInfosByRequestID=_shareTokenInfosByRequestID - In the implementation block
-(int)operationType;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(NSArray *)shareTokenInfos;
-(NSMutableDictionary *)shareTokenInfosByRequestID;
-(id)shareTokenModifiedBlock;
-(id)initWithShareTokenInfos:(id)arg1 ;
-(void)setShareTokenModifiedBlock:(id)arg1 ;
-(void)setShareTokenInfos:(NSArray *)arg1 ;
-(void)setShareTokenInfosByRequestID:(NSMutableDictionary *)arg1 ;
@end

