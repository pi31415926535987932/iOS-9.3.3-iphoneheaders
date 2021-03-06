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

@interface NTPBLocalNotificationReceived : PBCodable <NSCopying> {

	int _localNotificationNumberReceived;
	SCD_Struct_NT7 _has;

}

@property (assign,nonatomic) BOOL hasLocalNotificationNumberReceived; 
@property (assign,nonatomic) int localNotificationNumberReceived;                  //@synthesize localNotificationNumberReceived=_localNotificationNumberReceived - In the implementation block
-(void)setLocalNotificationNumberReceived:(int)arg1 ;
-(void)setHasLocalNotificationNumberReceived:(BOOL)arg1 ;
-(BOOL)hasLocalNotificationNumberReceived;
-(int)localNotificationNumberReceived;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
@end

