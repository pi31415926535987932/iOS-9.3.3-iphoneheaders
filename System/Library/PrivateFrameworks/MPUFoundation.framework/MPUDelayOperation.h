/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUOperation.h>

@class NSDate;

@interface MPUDelayOperation : MPUOperation {

	double _interval;
	NSDate* _date;

}
+(id)delayOperationWithInterval:(double)arg1 ;
+(id)delayOperationUntilDate:(id)arg1 ;
-(void)cancel;
-(id)initWithInterval:(double)arg1 date:(id)arg2 ;
-(void)execute;
@end
