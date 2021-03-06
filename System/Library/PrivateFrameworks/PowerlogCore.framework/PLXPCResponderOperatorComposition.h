/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, PLOperator, NSObject;

@interface PLXPCResponderOperatorComposition : NSObject {

	NSDictionary* _registration;
	/*^block*/id _operatorBlock;
	PLOperator* _operator;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (readonly) NSDictionary * registration;                       //@synthesize registration=_registration - In the implementation block
@property (nonatomic,copy) id operatorBlock;                            //@synthesize operatorBlock=_operatorBlock - In the implementation block
@property (__weak) PLOperator * operator;                               //@synthesize operator=_operator - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
-(id)description;
-(id)operatorBlock;
-(void)setOperatorBlock:(id)arg1 ;
-(NSDictionary *)registration;
-(id)initWithOperator:(id)arg1 withRegistration:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(PLOperator *)operator;
-(void)setOperator:(PLOperator *)arg1 ;
-(id)initWithWorkQueue:(id)arg1 withRegistration:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)respondToRequestForClientID:(short)arg1 withProcessName:(id)arg2 withKey:(id)arg3 withPayload:(id)arg4 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
@end

