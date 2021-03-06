/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCECellValue.h>

@interface TSCENumberCellValue : TSCECellValue {

	TSCENumberValue* mNumberValue;

}
-(void)encodeToArchive:(NumberCellValueArchive*)arg1 ;
-(BOOL)isEqualToCellValue:(id)arg1 ;
-(id)initWithArchive:(const NumberCellValueArchive*)arg1 locale:(id)arg2 ;
-(id)initWithNumberValue:(TSCENumberValue*)arg1 locale:(id)arg2 ;
-(id)initWithDouble:(double)arg1 locale:(id)arg2 ;
-(void)dealloc;
-(id)displayString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSCENumberValue*)numberValue;
-(SCD_Struct_TS61)formatStruct;
@end

