/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKCSSMediaQueryList;

@interface IKCSSMediaQuery : NSObject {

	BOOL _evaluated;
	BOOL _evaluationResult;
	IKCSSMediaQueryList* _queryList;

}

@property (readonly) BOOL evaluated;                                         //@synthesize evaluated=_evaluated - In the implementation block
@property (readonly) BOOL evaluationResult;                                  //@synthesize evaluationResult=_evaluationResult - In the implementation block
@property (nonatomic,readonly) IKCSSMediaQueryList * queryList;              //@synthesize queryList=_queryList - In the implementation block
+(id)buildMediaQueryList:(id)arg1 offset:(unsigned long long)arg2 consumed:(unsigned long long*)arg3 ;
+(id)buildMediaQuery:(id)arg1 offset:(unsigned long long)arg2 consumed:(unsigned long long*)arg3 ;
+(id)buildMediaQueryExpression:(id)arg1 ;
+(id)mediaQueryFromTokenList:(id)arg1 ;
-(id)description;
-(id)initWithQueryList:(id)arg1 ;
-(void)setNeedsReEvaluation;
-(BOOL)evaluated;
-(BOOL)evaluationResult;
-(IKCSSMediaQueryList *)queryList;
-(BOOL)evaluate;
@end
