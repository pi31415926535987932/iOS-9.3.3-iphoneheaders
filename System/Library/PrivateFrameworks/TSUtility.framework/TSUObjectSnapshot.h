/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TSUObjectSnapshot : NSObject {

	unsigned long long mEntryCount;
	void* mSnapshot;
	NSArray* mCompared;

}
-(void)dealloc;
-(id)init;
-(void)p_clear;
-(void)calibrate:(id)arg1 ;
-(void)compare;
@end

