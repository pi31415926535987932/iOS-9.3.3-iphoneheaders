/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol VKLabelNavFeature
@property (nonatomic,readonly) BOOL isOnRoute; 
@property (nonatomic,readonly) BOOL isAwayFromRoute; 
@property (nonatomic,readonly) PolylineCoordinate routeOffset; 
@property (nonatomic,readonly) BOOL isRamp; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * shieldDisplayGroup; 
@property (nonatomic,readonly) BOOL isStartOfRoadName; 
@property (nonatomic,readonly) BOOL isInGuidance; 
@property (nonatomic,readonly) long long intraRoadPriority; 
@property (nonatomic,readonly) BOOL isGuidanceStepStart; 
@required
-(NSString *)name;
-(BOOL)isRamp;
-(PolylineCoordinate)routeOffset;
-(BOOL)isOnRoute;
-(BOOL)isAwayFromRoute;
-(BOOL)isInGuidance;
-(BOOL)isGuidanceStepStart;
-(long long)intraRoadPriority;
-(BOOL)isStartOfRoadName;
-(NSString *)shieldDisplayGroup;

@end

