/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:17 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSMutableArray, NSMapTable;

@interface VMUVMRegionIdentifier : NSObject {

	NSMutableArray* _regions;
	NSMapTable* _mallocZoneStatisticsMap;
	BOOL _hasFractionalPageSizes;

}
-(void)dealloc;
-(id)init;
-(id)initWithTask:(unsigned)arg1 ;
-(id)regions;
-(id)initWithTask:(unsigned)arg1 pid:(int)arg2 options:(unsigned long long)arg3 ;
-(id)descriptionForRange:(VMURange)arg1 options:(unsigned long long)arg2 ;
-(id)descriptionForRegionTotalsWithOptions:(unsigned long long)arg1 memorySizeDivisor:(unsigned)arg2 ;
-(id)descriptionForMallocZoneTotalsWithOptions:(unsigned long long)arg1 memorySizeDivisor:(unsigned)arg2 ;
-(id)initWithGraph:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)hasFractionalPageSizes;
-(id)descriptionForRange:(VMURange)arg1 ;
-(id)descriptionForRegionTotalsWithOptions:(unsigned long long)arg1 ;
-(id)initWithTask:(unsigned)arg1 options:(unsigned long long)arg2 ;
@end

