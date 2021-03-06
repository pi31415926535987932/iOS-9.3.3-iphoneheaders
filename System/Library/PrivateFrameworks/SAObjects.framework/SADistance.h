/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SADistance : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * unit; 
@property (nonatomic,copy) NSNumber * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)distance;
+(id)distanceWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)sirimovies_compare:(id)arg1 ;
-(id)sirimovies_distanceAsString;
-(id)sirimovies_metersValue;
-(id)sirimovies_abbreviatedUnit;
-(id)afui_metersValue;
-(id)afui_abbreviatedUnit;
-(long long)afui_compare:(id)arg1 ;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)unit;
-(void)setUnit:(NSString *)arg1 ;
@end

