/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ABLEZeroAvoid : NSObject {

	double _decayRate;
	double _minimumLevel;
	double _maximumLevel;

}

@property (readonly) double decayRate;                 //@synthesize decayRate=_decayRate - In the implementation block
@property (readonly) double minimumLevel;              //@synthesize minimumLevel=_minimumLevel - In the implementation block
@property (readonly) double maximumLevel;              //@synthesize maximumLevel=_maximumLevel - In the implementation block
-(id)initWithDecayRatePerEntry:(double)arg1 minimumLevel:(double)arg2 maximumLevel:(double)arg3 ;
-(id)zeroAvoid:(id)arg1 ;
-(double)minimumLevel;
-(double)maximumLevel;
-(double)decayRate;
@end
