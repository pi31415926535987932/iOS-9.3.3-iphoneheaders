/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface SPProxyObject : NSObject {

	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(id)proxyObjectWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(void)forwardInvocation:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setDictionary:(NSDictionary *)arg1 ;
@end
