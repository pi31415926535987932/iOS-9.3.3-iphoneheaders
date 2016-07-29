/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface NTPBPersonalizationLocalData : PBCodable <NSCopying> {

	NSMutableArray* _closedChangeGroups;
	NSMutableArray* _openChangeGroupDeltas;
	NSData* _remoteRecordData;

}

@property (nonatomic,retain) NSMutableArray * openChangeGroupDeltas;              //@synthesize openChangeGroupDeltas=_openChangeGroupDeltas - In the implementation block
@property (nonatomic,retain) NSMutableArray * closedChangeGroups;                 //@synthesize closedChangeGroups=_closedChangeGroups - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteRecordData; 
@property (nonatomic,retain) NSData * remoteRecordData;                           //@synthesize remoteRecordData=_remoteRecordData - In the implementation block
-(void)setOpenChangeGroupDeltas:(NSMutableArray *)arg1 ;
-(void)setClosedChangeGroups:(NSMutableArray *)arg1 ;
-(void)setRemoteRecordData:(NSData *)arg1 ;
-(void)addOpenChangeGroupDeltas:(id)arg1 ;
-(void)addClosedChangeGroups:(id)arg1 ;
-(void)clearOpenChangeGroupDeltas;
-(unsigned long long)openChangeGroupDeltasCount;
-(id)openChangeGroupDeltasAtIndex:(unsigned long long)arg1 ;
-(void)clearClosedChangeGroups;
-(unsigned long long)closedChangeGroupsCount;
-(id)closedChangeGroupsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRemoteRecordData;
-(NSMutableArray *)openChangeGroupDeltas;
-(NSMutableArray *)closedChangeGroups;
-(NSData *)remoteRecordData;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
@end
