/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/EKPredicate.h>
#import <libobjc.A.dylib/EKDefaultPropertiesLoading.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSTimeZone;

@interface CADEventPredicate : EKPredicate <EKDefaultPropertiesLoading, NSSecureCoding>

@property (nonatomic,readonly) NSString * eventUUID; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) BOOL shouldLoadDefaultProperties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 ;
+(id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(BOOL)arg5 ;
+(id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5 ;
+(id)predicateWithStartDate:(id)arg1 title:(id)arg2 calendars:(id)arg3 ;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(id)predicateFormat;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSTimeZone *)timeZone;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(BOOL)arg5 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5 ;
-(id)initWithStartDate:(id)arg1 title:(id)arg2 calendars:(id)arg3 ;
-(id)defaultPropertiesToLoad;
-(NSString *)eventUUID;
-(BOOL)shouldLoadDefaultProperties;
@end

