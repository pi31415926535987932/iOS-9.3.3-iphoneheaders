/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RawCamera-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSData, NSNumber;

@interface RAWLensCorrectionVignetteFilter : CIFilter {

	CIImage* inputImage;
	NSData* inputVignetteTable;
	NSNumber* inputVignetteAmount;
	id inputColorSpace;
	CIImage* vigImg;

}
+(id)customAttributes;
-(id)customAttributes;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)outputImage;
-(BOOL)makeMapImages;
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
@end
