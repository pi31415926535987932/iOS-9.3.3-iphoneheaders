/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface HDUserDefault : NSObject <NSSecureCoding> {

	NSString* _key;
	NSDictionary* _value;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSString * key;                    //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSDictionary * value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSString * bundleID;               //@synthesize bundleID=_bundleID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)key;
-(NSDictionary *)value;
-(void)setValue:(NSDictionary *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
@end
