/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface BLTPBBehaviorOverride : PBCodable <NSCopying> {

	unsigned long long _behaviorOverrideMode;
	unsigned long long _behaviorOverrideType;
	NSMutableArray* _effectiveIntervals;
	SCD_Struct_BL3 _has;

}

@property (assign,nonatomic) BOOL hasBehaviorOverrideType; 
@property (assign,nonatomic) unsigned long long behaviorOverrideType;              //@synthesize behaviorOverrideType=_behaviorOverrideType - In the implementation block
@property (assign,nonatomic) BOOL hasBehaviorOverrideMode; 
@property (assign,nonatomic) unsigned long long behaviorOverrideMode;              //@synthesize behaviorOverrideMode=_behaviorOverrideMode - In the implementation block
@property (nonatomic,retain) NSMutableArray * effectiveIntervals;                  //@synthesize effectiveIntervals=_effectiveIntervals - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)effectiveIntervals;
-(void)setEffectiveIntervals:(NSMutableArray *)arg1 ;
-(unsigned long long)behaviorOverrideType;
-(unsigned long long)behaviorOverrideMode;
-(void)setBehaviorOverrideType:(unsigned long long)arg1 ;
-(void)setBehaviorOverrideMode:(unsigned long long)arg1 ;
-(void)addEffectiveIntervals:(id)arg1 ;
-(unsigned long long)effectiveIntervalsCount;
-(void)clearEffectiveIntervals;
-(id)effectiveIntervalsAtIndex:(unsigned long long)arg1 ;
-(void)setHasBehaviorOverrideType:(BOOL)arg1 ;
-(BOOL)hasBehaviorOverrideType;
-(void)setHasBehaviorOverrideMode:(BOOL)arg1 ;
-(BOOL)hasBehaviorOverrideMode;
@end

