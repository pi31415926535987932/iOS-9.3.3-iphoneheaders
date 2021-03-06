/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface EKPersistentParticipant : EKPersistentObject <NSCopying>

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSURL * address; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * comment; 
+(id)defaultPropertiesToLoad;
-(id)init;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UUID;
-(id)owner;
-(NSString *)displayName;
-(void)setAddress:(NSURL *)arg1 ;
-(NSString *)comment;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSURL *)address;
@end

