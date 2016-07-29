/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DFramebufferCopyPipeline.h>

@interface TSCH3DFramebufferGaussianBlurPipeline : TSCH3DFramebufferCopyPipeline {

	tvec2<float> mTapUnit;

}

@property (assign,nonatomic) tvec2<float> tapUnit; 
+(id)effectsArray;
-(void)setTapUnit:(tvec2<float>)arg1 ;
-(id)initWithProcessor:(id)arg1 session:(id)arg2 ;
-(void)updateShaderEffectsStates;
-(tvec2<float>)tapUnit;
@end
