/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKStyleList, IKViewElementStyle;

@interface IKViewElementStyleComposer : NSObject {

	BOOL _requiresMediaQueryEvaluation;
	IKViewElementStyleComposer* _defaultStyleComposer;
	IKViewElementStyleComposer* _parentStyleComposer;
	IKStyleList* _styleList;
	IKViewElementStyle* _elementStyleOverrides;
	IKViewElementStyle* _composedSansDefaultStyle;
	IKViewElementStyle* _composedStyle;

}

@property (nonatomic,retain,readonly) IKViewElementStyleComposer * defaultStyleComposer;              //@synthesize defaultStyleComposer=_defaultStyleComposer - In the implementation block
@property (nonatomic,retain,readonly) IKViewElementStyleComposer * parentStyleComposer;               //@synthesize parentStyleComposer=_parentStyleComposer - In the implementation block
@property (nonatomic,retain,readonly) IKStyleList * styleList;                                        //@synthesize styleList=_styleList - In the implementation block
@property (nonatomic,retain,readonly) IKViewElementStyle * elementStyleOverrides;                     //@synthesize elementStyleOverrides=_elementStyleOverrides - In the implementation block
@property (nonatomic,readonly) BOOL requiresMediaQueryEvaluation;                                     //@synthesize requiresMediaQueryEvaluation=_requiresMediaQueryEvaluation - In the implementation block
@property (nonatomic,retain) IKViewElementStyle * composedSansDefaultStyle;                           //@synthesize composedSansDefaultStyle=_composedSansDefaultStyle - In the implementation block
@property (nonatomic,retain) IKViewElementStyle * composedStyle;                                      //@synthesize composedStyle=_composedStyle - In the implementation block
+(id)styleComposerWithDefaultStyleComposer:(id)arg1 parentStyleComposer:(id)arg2 styleList:(id)arg3 elementStyleOverrides:(id)arg4 ;
-(BOOL)requiresMediaQueryEvaluation;
-(id)composedStyleWithMediaQueryEvaluator:(id)arg1 ;
-(id)initWithDefaultStyleComposer:(id)arg1 parentStyleComposer:(id)arg2 styleList:(id)arg3 elementStyleOverrides:(id)arg4 ;
-(void)_composeWithMediaQueryEvaluator:(id)arg1 ;
-(IKViewElementStyle *)composedStyle;
-(void)setComposedSansDefaultStyle:(IKViewElementStyle *)arg1 ;
-(void)setComposedStyle:(IKViewElementStyle *)arg1 ;
-(IKStyleList *)styleList;
-(IKViewElementStyleComposer *)defaultStyleComposer;
-(void)setNeedsRecomposition;
-(IKViewElementStyle *)composedSansDefaultStyle;
-(IKViewElementStyleComposer *)parentStyleComposer;
-(id)composedSansDefaultStyleWithMediaQueryEvaluator:(id)arg1 ;
-(IKViewElementStyle *)elementStyleOverrides;
@end
