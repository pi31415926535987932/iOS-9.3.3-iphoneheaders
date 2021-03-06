/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDTransitAttribution : PBCodable <NSCopying> {

	NSMutableArray* _providerNames;

}

@property (nonatomic,retain) NSMutableArray * providerNames;              //@synthesize providerNames=_providerNames - In the implementation block
+(id)transitAttributionForPlaceData:(id)arg1 ;
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
-(id)providerNameAtIndex:(unsigned long long)arg1 ;
-(void)addProviderName:(id)arg1 ;
-(void)setProviderNames:(NSMutableArray *)arg1 ;
-(void)clearProviderNames;
-(unsigned long long)providerNamesCount;
-(NSMutableArray *)providerNames;
@end

