/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBLinkTable : NSObject
+(int)mapXlLinkTypeToED:(int)arg1 ;
+(int)mapEDLinkTypeToXl:(int)arg1 ;
+(void)readFromState:(id)arg1 ;
+(XlLinkTable*)createXlLinkTableFromLinksCollection:(id)arg1 workbook:(id)arg2 state:(id)arg3 ;
@end
