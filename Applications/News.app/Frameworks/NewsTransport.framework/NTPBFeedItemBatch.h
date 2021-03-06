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

@class NSData, NSMutableArray;

@interface NTPBFeedItemBatch : PBCodable <NSCopying> {

	NSData* _bottomCursor;
	NSMutableArray* _feedItems;
	NSData* _topCursor;

}

@property (nonatomic,retain) NSMutableArray * feedItems;              //@synthesize feedItems=_feedItems - In the implementation block
@property (nonatomic,readonly) BOOL hasTopCursor; 
@property (nonatomic,retain) NSData * topCursor;                      //@synthesize topCursor=_topCursor - In the implementation block
@property (nonatomic,readonly) BOOL hasBottomCursor; 
@property (nonatomic,retain) NSData * bottomCursor;                   //@synthesize bottomCursor=_bottomCursor - In the implementation block
-(void)setFeedItems:(NSMutableArray *)arg1 ;
-(void)setTopCursor:(NSData *)arg1 ;
-(void)setBottomCursor:(NSData *)arg1 ;
-(void)addFeedItems:(id)arg1 ;
-(void)clearFeedItems;
-(unsigned long long)feedItemsCount;
-(id)feedItemsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTopCursor;
-(BOOL)hasBottomCursor;
-(NSMutableArray *)feedItems;
-(NSData *)topCursor;
-(NSData *)bottomCursor;
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

