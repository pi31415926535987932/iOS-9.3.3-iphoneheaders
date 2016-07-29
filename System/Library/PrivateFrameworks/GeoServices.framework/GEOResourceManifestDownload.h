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

@class GEODownloadMetadata, GEOResources;

@interface GEOResourceManifestDownload : PBCodable <NSCopying> {

	GEODownloadMetadata* _metadata;
	GEOResources* _resources;

}

@property (nonatomic,readonly) BOOL hasResources; 
@property (nonatomic,retain) GEOResources * resources;                    //@synthesize resources=_resources - In the implementation block
@property (nonatomic,retain) GEODownloadMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(id)initWithResourceManifestData:(id)arg1 ;
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
-(GEODownloadMetadata *)metadata;
-(void)setMetadata:(GEODownloadMetadata *)arg1 ;
-(GEOResources *)resources;
-(BOOL)hasResources;
-(void)setResources:(GEOResources *)arg1 ;
@end
