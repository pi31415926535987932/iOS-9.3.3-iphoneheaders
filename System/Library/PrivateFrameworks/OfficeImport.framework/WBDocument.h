/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBDocument : NSObject
+(void)setTimeStamp:(WrdDocumentProperties*)arg1 ;
+(void)readProperties:(id)arg1 document:(id)arg2 ;
+(void)setupZIndices:(id)arg1 document:(id)arg2 escherType:(int)arg3 ;
+(void)readSectionsFrom:(id)arg1 document:(id)arg2 ;
+(void)readTextBoxesFrom:(id)arg1 ;
+(void)readNoteSeparatorFrom:(id)arg1 type:(int)arg2 separator:(id)arg3 ;
+(id)readFrom:(id)arg1 ;
-(id)init;
-(id)applicationName;
@end
