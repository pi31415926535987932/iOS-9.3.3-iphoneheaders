/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIDroste : CIFilter {

	CIImage* inputImage;
	CIVector* inputInsetPoint0;
	CIVector* inputInsetPoint1;
	NSNumber* inputStrands;
	NSNumber* inputPeriodicity;
	NSNumber* inputRotation;
	NSNumber* inputZoom;

}
+(id)customAttributes;
-(id)_CIDroste;
-(id)outputImage;
@end
