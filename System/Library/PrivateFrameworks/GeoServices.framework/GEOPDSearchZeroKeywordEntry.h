/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPDSearchZeroKeywordEntry : PBCodable <NSCopying> {

	SCD_Struct_GE59* _categoryIndexs;
	unsigned _dayOfWeek;
	unsigned _hourOfDay;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) unsigned dayOfWeek;                                    //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
@property (assign,nonatomic) BOOL hasHourOfDay; 
@property (assign,nonatomic) unsigned hourOfDay;                                    //@synthesize hourOfDay=_hourOfDay - In the implementation block
@property (nonatomic,readonly) unsigned long long categoryIndexsCount; 
@property (nonatomic,readonly) unsigned* categoryIndexs; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)dayOfWeek;
-(BOOL)hasDayOfWeek;
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(void)setDayOfWeek:(unsigned)arg1 ;
-(BOOL)hasHourOfDay;
-(void)setHasHourOfDay:(BOOL)arg1 ;
-(unsigned)hourOfDay;
-(void)setHourOfDay:(unsigned)arg1 ;
-(unsigned long long)categoryIndexsCount;
-(unsigned*)categoryIndexs;
-(void)clearCategoryIndexs;
-(void)addCategoryIndex:(unsigned)arg1 ;
-(unsigned)categoryIndexAtIndex:(unsigned long long)arg1 ;
-(void)setCategoryIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

