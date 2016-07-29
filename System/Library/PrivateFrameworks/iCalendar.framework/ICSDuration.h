/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface ICSDuration : NSObject <NSCoding> {

	double _duration;

}
+(id)durationFromICSString:(id)arg1 ;
+(id)durationFromRFC2445UTF8String:(const char*)arg1 ;
+(id)generateDurationFromICSString:(id)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)timeInterval;
-(long long)days;
-(long long)hours;
-(long long)weeks;
-(long long)minutes;
-(long long)seconds;
-(id)initWithWeeks:(long long)arg1 days:(long long)arg2 hours:(long long)arg3 minutes:(long long)arg4 seconds:(long long)arg5 ;
-(id)ICSStringWithOptions:(unsigned long long)arg1 ;
-(BOOL)isNegative;
@end
