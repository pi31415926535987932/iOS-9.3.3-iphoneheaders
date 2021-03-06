/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPlannedDestination, GEORouteHypothesis, NSString;

@interface GEORouteHypothesizer : NSObject {

	GEOPlannedDestination* _plannedDestination;
	unsigned long long _state;
	GEORouteHypothesis* _currentHypothesis;
	/*^block*/id _updateHandler;
	NSString* _activityIdentifier;

}

@property (nonatomic,readonly) GEOPlannedDestination * plannedDestination;              //@synthesize plannedDestination=_plannedDestination - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) GEORouteHypothesis * currentHypothesis;                  //@synthesize currentHypothesis=_currentHypothesis - In the implementation block
@property (nonatomic,readonly) double willBeginHypothesizingInterval; 
@property (nonatomic,readonly) double willEndHypothesizingInterval; 
+(id)hypothesizerForPlannedDestination:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(GEORouteHypothesis *)currentHypothesis;
-(void)startHypothesizingWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)stopHypothesizing;
-(void)delayStarting;
-(double)willBeginHypothesizingInterval;
-(double)willEndHypothesizingInterval;
-(BOOL)_wontHypothesizeAgain;
-(GEOPlannedDestination *)plannedDestination;
-(void)didPostUINotification:(unsigned long long)arg1 ;
-(id)initWithPlannedDestination:(id)arg1 ;
@end

