/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor;


@protocol AKStrokedAnnotationProtocol <NSObject>
@property (assign) double strokeWidth; 
@property (retain) UIColor * strokeColor; 
@property (getter=isDashed) BOOL dashed; 
@property (assign) long long brushStyle; 
@property (assign) BOOL hasShadow; 
@required
-(void)setStrokeColor:(id)arg1;
-(UIColor *)strokeColor;
-(BOOL)hasShadow;
-(void)setHasShadow:(BOOL)arg1;
-(long long)brushStyle;
-(BOOL)isDashed;
-(void)setStrokeWidth:(double)arg1;
-(void)setBrushStyle:(long long)arg1;
-(void)setDashed:(BOOL)arg1;
-(double)strokeWidth;

@end

