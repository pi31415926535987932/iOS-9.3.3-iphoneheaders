/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriResponse.h>

@class NSArray;

@interface AFUpdateAlarmResponse : AFSiriResponse {

	NSArray* _alarmIdentifiers;

}

@property (nonatomic,copy) NSArray * alarmIdentifiers;              //@synthesize alarmIdentifiers=_alarmIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAlarmIdentifiers:(NSArray *)arg1 ;
-(void)setAlarmIdentifier:(id)arg1 ;
-(NSArray *)alarmIdentifiers;
@end

