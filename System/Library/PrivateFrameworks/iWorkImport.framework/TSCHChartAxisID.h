/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSCHChartAxisID : NSObject <NSCopying> {

	int mType;
	unsigned long long mOrdinal;

}

@property (readonly) int type; 
@property (readonly) unsigned long long ordinal; 
+(id)axisIDWithType:(int)arg1 ordinal:(unsigned long long)arg2 ;
-(BOOL)intersectsAxisID:(id)arg1 ;
-(id)debuggingName;
-(id)initWithType:(int)arg1 ordinal:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)ordinal;
-(void)saveToArchive:(ChartAxisIDArchive*)arg1 ;
-(id)initWithArchive:(const ChartAxisIDArchive*)arg1 ;
@end
