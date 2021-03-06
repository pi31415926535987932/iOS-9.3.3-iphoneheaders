/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <libobjc.A.dylib/PASerializable.h>

@class NSString;

@interface PASampleTaskDataPrivateData : NSObject <PASerializable> {

	int _suspend_count;
	int _task_size;
	int _faults;
	int _pageins;
	int _cow_faults;
	unsigned _ss_flags;
	unsigned _latency_qos;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int suspendCount;                               //@synthesize suspend_count=_suspend_count - In the implementation block
@property (readonly) int taskSizeInPages;                            //@synthesize task_size=_task_size - In the implementation block
@property (readonly) int numberOfPageFaults;                         //@synthesize faults=_faults - In the implementation block
@property (readonly) int numberOfPageIns;                            //@synthesize pageins=_pageins - In the implementation block
@property (readonly) int numberOfCopyOnWritePageFaults;              //@synthesize cow_faults=_cow_faults - In the implementation block
@property (readonly) unsigned latencyQos;                            //@synthesize latency_qos=_latency_qos - In the implementation block
@property (readonly) unsigned ss_flags;                              //@synthesize ss_flags=_ss_flags - In the implementation block
@property (readonly) BOOL isTaskResourceFlagged; 
@property (readonly) BOOL isTerminatedSnapshot; 
@property (readonly) BOOL isPidSuspended; 
@property (readonly) BOOL isFrozen; 
@property (readonly) BOOL isDarwinBG; 
@property (readonly) BOOL isDarwinExtBG; 
@property (readonly) BOOL isVisible; 
@property (readonly) BOOL isNonVisible; 
@property (readonly) BOOL isForeground; 
@property (readonly) BOOL isBoosted; 
@property (readonly) BOOL isSuppressed; 
@property (readonly) BOOL isTimerThrottled; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(int)suspendCount;
-(BOOL)isFrozen;
-(BOOL)isVisible;
-(BOOL)isForeground;
-(BOOL)isDarwinBG;
-(BOOL)isSuppressed;
-(unsigned)ss_flags;
-(BOOL)isTerminatedSnapshot;
-(int)taskSizeInPages;
-(int)numberOfPageIns;
-(BOOL)isBoosted;
-(BOOL)isTaskResourceFlagged;
-(BOOL)isPidSuspended;
-(BOOL)isDarwinExtBG;
-(BOOL)isNonVisible;
-(BOOL)isTimerThrottled;
-(BOOL)correspondsToTaskSnapshot:(const task_snapshot*)arg1 ;
-(id)initWithTaskSnapshot:(const task_snapshot*)arg1 ;
-(int)numberOfPageFaults;
-(int)numberOfCopyOnWritePageFaults;
-(unsigned)latencyQos;
@end

