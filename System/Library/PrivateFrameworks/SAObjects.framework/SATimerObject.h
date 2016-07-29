/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSNumber;

@interface SATimerObject : SADomainObject

@property (nonatomic,copy) NSString * state; 
@property (nonatomic,copy) NSNumber * timerValue; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSNumber *)timerValue;
-(void)setTimerValue:(NSNumber *)arg1 ;
-(id)encodedClassName;
@end
