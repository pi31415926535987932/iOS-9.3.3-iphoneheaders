/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PowerlogCore/PowerlogCore-Structs.h>
@class NSString;

@interface PLEntryKey : NSObject {

	BOOL _isDynamic;
	NSString* _entryKey;
	PLEntryKey* _baseEntryKey;
	NSString* _operatorName;
	Class _operatorClass;
	NSString* _entryType;
	NSString* _entryName;
	NSString* _wildCardName;
	PLTimeIntervalRange _timeIntervalRange;

}

@property (retain,readonly) NSString * entryKey;                                 //@synthesize entryKey=_entryKey - In the implementation block
@property (__weak) PLEntryKey * baseEntryKey;                                    //@synthesize baseEntryKey=_baseEntryKey - In the implementation block
@property (retain,readonly) NSString * operatorName;                             //@synthesize operatorName=_operatorName - In the implementation block
@property (retain,readonly) Class operatorClass;                                 //@synthesize operatorClass=_operatorClass - In the implementation block
@property (retain,readonly) NSString * entryType;                                //@synthesize entryType=_entryType - In the implementation block
@property (retain,readonly) NSString * entryName;                                //@synthesize entryName=_entryName - In the implementation block
@property (nonatomic,copy) NSString * wildCardName;                              //@synthesize wildCardName=_wildCardName - In the implementation block
@property (assign,nonatomic) BOOL isDynamic;                                     //@synthesize isDynamic=_isDynamic - In the implementation block
@property (assign,nonatomic) PLTimeIntervalRange timeIntervalRange;              //@synthesize timeIntervalRange=_timeIntervalRange - In the implementation block
+(void)setupEntryObjectsForOperatorClass:(Class)arg1 ;
+(id)PLEntryKeyForEntryKey:(id)arg1 ;
+(Class)operatorClassForEntryKey:(id)arg1 ;
+(id)dynamicEntryKeyForEntryKey:(id)arg1 ;
+(id)entryKeysForOperator:(id)arg1 ;
+(id)entryKeysForOperatorClass:(Class)arg1 ;
+(void)addPLEntryKey:(id)arg1 ;
+(id)PLEntryAggregateKeysForOperatorName:(id)arg1 ;
+(id)PLEntryKeyForOperatorName:(id)arg1 withType:(id)arg2 withName:(id)arg3 withWildCardName:(id)arg4 isDynamic:(BOOL)arg5 ;
+(id)entryKeyForOperatorName:(id)arg1 withType:(id)arg2 withName:(id)arg3 withWildCardName:(id)arg4 isDynamic:(BOOL)arg5 ;
+(id)entryKeyForOperatorName:(id)arg1 withType:(id)arg2 withName:(id)arg3 isDynamic:(BOOL)arg4 ;
+(id)PLEntryKeysForEntryType:(id)arg1 ;
+(id)PLEntryAggregateKeysForOperator:(id)arg1 ;
+(id)PLEntryAggregateKeysForOperatorClass:(Class)arg1 ;
+(id)PLEntryKeyForOperatorName:(id)arg1 withType:(id)arg2 withName:(id)arg3 ;
+(id)entryKeyForOperatorName:(id)arg1 withType:(id)arg2 withName:(id)arg3 withWildCardName:(id)arg4 ;
+(id)timeintervalRangeEntryKeyForEntryKey:(id)arg1 withTimeIntervalRange:(PLTimeIntervalRange)arg2 ;
+(id)operatorNameForEntryKey:(id)arg1 ;
+(id)wildCardForEntryKey:(id)arg1 ;
+(id)baseEntryKeyForEntryKey:(id)arg1 ;
+(PLTimeIntervalRange)timeIntervalRangeForEntryKey:(id)arg1 ;
+(id)entryKeyForOperatorName:(id)arg1 withType:(id)arg2 withName:(id)arg3 ;
+(id)entryKeysForOperatorName:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(BOOL)isDynamic;
-(NSString *)operatorName;
-(NSString *)entryType;
-(Class)operatorClass;
-(NSString *)entryName;
-(PLEntryKey *)baseEntryKey;
-(NSString *)wildCardName;
-(PLTimeIntervalRange)timeIntervalRange;
-(id)initWithOperatorName:(id)arg1 withEntryType:(id)arg2 withEntryName:(id)arg3 ;
-(id)copyWithIsDynamic:(BOOL)arg1 ;
-(id)copyWithWildCardName:(id)arg1 ;
-(id)copyWithTimeIntervalRange:(PLTimeIntervalRange)arg1 ;
-(void)setWildCardName:(NSString *)arg1 ;
-(void)setBaseEntryKey:(PLEntryKey *)arg1 ;
-(void)setIsDynamic:(BOOL)arg1 ;
-(void)setTimeIntervalRange:(PLTimeIntervalRange)arg1 ;
-(NSString *)entryKey;
@end

