/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IKCSSParser : NSObject
+(id)parseStylesheet:(id)arg1 ;
+(id)parseRulesList:(id)arg1 ;
+(id)consumeRules:(id)arg1 topLevel:(BOOL)arg2 ;
+(id)consumeQualifiedRule:(id)arg1 ;
+(id)consumeAtRule:(id)arg1 ;
+(id)consumeSimpleBlock:(id)arg1 startTokenType:(long long)arg2 ;
+(id)consumeComponentValue:(id)arg1 ;
+(id)consumeDeclarationList:(id)arg1 ;
+(id)consumeFunction:(id)arg1 fromToken:(id)arg2 ;
+(id)consumeDeclaration:(id)arg1 ;
+(id)parse:(id)arg1 ;
@end

