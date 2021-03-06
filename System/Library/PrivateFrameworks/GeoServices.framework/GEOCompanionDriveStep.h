/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOCompanionManeuverStep.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEONameInfo, NSMutableArray, NSString;

@interface GEOCompanionDriveStep : PBCodable <GEOCompanionManeuverStep, NSCopying> {

	SCD_Struct_GE68* _junctionElements;
	unsigned long long _junctionElementsCount;
	unsigned long long _junctionElementsSpace;
	int _drivingSide;
	GEONameInfo* _exitNumber;
	int _junctionType;
	NSMutableArray* _maneuverNames;
	int _maneuverType;
	NSString* _shield;
	int _shieldType;
	NSMutableArray* _signposts;
	BOOL _toFreeway;
	SCD_Struct_GE93 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasManeuverType; 
@property (assign,nonatomic) int maneuverType; 
@property (nonatomic,retain) NSMutableArray * maneuverNames; 
@property (nonatomic,retain) NSMutableArray * signposts; 
@property (assign,nonatomic) BOOL hasJunctionType; 
@property (assign,nonatomic) int junctionType; 
@property (nonatomic,readonly) unsigned long long junctionElementsCount; 
@property (nonatomic,readonly) SCD_Struct_GE68* junctionElements; 
@property (nonatomic,readonly) int transportType; 
@property (assign,nonatomic) int maneuverType;                                        //@synthesize maneuverType=_maneuverType - In the implementation block
@property (nonatomic,retain) NSMutableArray * maneuverNames;                          //@synthesize maneuverNames=_maneuverNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * signposts;                              //@synthesize signposts=_signposts - In the implementation block
@property (assign,nonatomic) BOOL hasToFreeway; 
@property (assign,nonatomic) BOOL toFreeway;                                          //@synthesize toFreeway=_toFreeway - In the implementation block
@property (nonatomic,readonly) BOOL hasExitNumber; 
@property (nonatomic,retain) GEONameInfo * exitNumber;                                //@synthesize exitNumber=_exitNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasShield; 
@property (nonatomic,retain) NSString * shield;                                       //@synthesize shield=_shield - In the implementation block
@property (assign,nonatomic) BOOL hasShieldType; 
@property (assign,nonatomic) int shieldType;                                          //@synthesize shieldType=_shieldType - In the implementation block
@property (assign,nonatomic) int junctionType;                                        //@synthesize junctionType=_junctionType - In the implementation block
@property (assign,nonatomic) BOOL hasDrivingSide; 
@property (assign,nonatomic) int drivingSide;                                         //@synthesize drivingSide=_drivingSide - In the implementation block
-(int)transportType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)drivingSide;
-(NSString *)shield;
-(void)setShield:(NSString *)arg1 ;
-(BOOL)hasShield;
-(void)setDrivingSide:(int)arg1 ;
-(void)setHasDrivingSide:(BOOL)arg1 ;
-(BOOL)hasDrivingSide;
-(NSMutableArray *)maneuverNames;
-(unsigned long long)junctionElementsCount;
-(BOOL)hasJunctionType;
-(void)setSignposts:(NSMutableArray *)arg1 ;
-(id)maneuverNameAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)signposts;
-(unsigned long long)maneuverNamesCount;
-(void)setHasJunctionType:(BOOL)arg1 ;
-(void)clearSignposts;
-(SCD_Struct_GE68)junctionElementAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasManeuverType;
-(void)setJunctionType:(int)arg1 ;
-(GEONameInfo *)exitNumber;
-(int)junctionType;
-(void)setManeuverNames:(NSMutableArray *)arg1 ;
-(void)setExitNumber:(GEONameInfo *)arg1 ;
-(void)setHasManeuverType:(BOOL)arg1 ;
-(unsigned long long)signpostsCount;
-(void)setManeuverType:(int)arg1 ;
-(id)signpostAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasExitNumber;
-(void)setJunctionElements:(SCD_Struct_GE68*)arg1 count:(unsigned long long)arg2 ;
-(int)maneuverType;
-(void)setToFreeway:(BOOL)arg1 ;
-(void)addSignpost:(id)arg1 ;
-(BOOL)toFreeway;
-(void)setHasToFreeway:(BOOL)arg1 ;
-(void)clearManeuverNames;
-(void)clearJunctionElements;
-(void)addManeuverName:(id)arg1 ;
-(BOOL)hasToFreeway;
-(SCD_Struct_GE68*)junctionElements;
-(void)addJunctionElement:(SCD_Struct_GE68)arg1 ;
-(BOOL)hasShieldType;
-(void)setHasShieldType:(BOOL)arg1 ;
-(int)shieldType;
-(void)setShieldType:(int)arg1 ;
@end

