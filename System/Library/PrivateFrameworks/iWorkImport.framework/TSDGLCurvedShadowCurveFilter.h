/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface TSDGLCurvedShadowCurveFilter : CIFilter {

	CIImage* inputImage;
	CIVector* inputSampleExtent;
	NSNumber* inputCurveAmount;
	NSNumber* inputPadding;

}
+(id)curveKernel;
@end

