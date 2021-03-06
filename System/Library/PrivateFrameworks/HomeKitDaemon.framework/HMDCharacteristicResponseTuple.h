/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMDCharacteristic, NSError;

@interface HMDCharacteristicResponseTuple : NSObject {

	HMDCharacteristic* _characteristic;
	NSError* _error;

}

@property (nonatomic,readonly) HMDCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) NSError * error;                                 //@synthesize error=_error - In the implementation block
+(id)tupleWithCharacteristic:(id)arg1 error:(id)arg2 ;
-(id)description;
-(NSError *)error;
-(HMDCharacteristic *)characteristic;
@end

