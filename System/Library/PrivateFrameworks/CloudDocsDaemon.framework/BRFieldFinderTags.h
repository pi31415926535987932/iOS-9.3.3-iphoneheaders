/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface BRFieldFinderTags : PBCodable <NSCopying> {

	NSMutableArray* _tags;

}

@property (nonatomic,retain) NSMutableArray * tags;              //@synthesize tags=_tags - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)tags;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)tagsCount;
-(void)addTags:(id)arg1 ;
-(void)clearTags;
-(id)tagsAtIndex:(unsigned long long)arg1 ;
-(void)setTags:(NSMutableArray *)arg1 ;
@end

