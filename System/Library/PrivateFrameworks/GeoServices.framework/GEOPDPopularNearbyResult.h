/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOPDPopularNearbyResult : PBCodable <NSCopying> {

	SCD_Struct_GE230* _litePlaceResults;
	unsigned long long _litePlaceResultsCount;
	unsigned long long _litePlaceResultsSpace;
	NSString* _sectionHeader;

}

@property (nonatomic,readonly) BOOL hasSectionHeader; 
@property (nonatomic,retain) NSString * sectionHeader;                                //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (nonatomic,readonly) unsigned long long litePlaceResultsCount; 
@property (nonatomic,readonly) SCD_Struct_GE230* litePlaceResults; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSectionHeader:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)sectionHeader;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setLitePlaceResults:(SCD_Struct_GE230*)arg1 count:(unsigned long long)arg2 ;
-(void)clearLitePlaceResults;
-(SCD_Struct_GE230)litePlaceResultAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)litePlaceResultsCount;
-(BOOL)hasSectionHeader;
-(void)addLitePlaceResult:(SCD_Struct_GE230)arg1 ;
-(SCD_Struct_GE230*)litePlaceResults;
@end
