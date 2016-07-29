/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHAreaElementBuilder.h>

@interface TSCHStackedAreaElementBuilder : TSCHAreaElementBuilder
-(SCD_Struct_TS500*)p_centerPointsForSeries:(id)arg1 forGroupIndexes:(NSRange)arg2 xAxis:(id)arg3 yAxis:(id)arg4 plotAreaFrame:(CGRect)arg5 ;
-(SCD_Struct_TS499*)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(CGRect)arg2 valueStart:(long long)arg3 valueEnd:(long long)arg4 outCount:(unsigned long long*)arg5 ;
-(BOOL)p_addBottomStroke:(SCD_Struct_TS501*)arg1 toPath:(CGPathRef)arg2 seriesIndex:(unsigned long long)arg3 valuesStart:(unsigned long long)arg4 valuesEnd:(unsigned long long)arg5 withPointsArray:(SCD_Struct_TS499*)arg6 withCount:(unsigned long long)arg7 ;
@end
