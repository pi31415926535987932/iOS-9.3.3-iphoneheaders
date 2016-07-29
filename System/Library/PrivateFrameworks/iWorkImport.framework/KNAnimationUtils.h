/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface KNAnimationUtils : NSObject
+(BOOL)isFPSLoggingEnabled;
+(BOOL)isSOATSAnimationTestingEnabled;
+(BOOL)isFPSLoggingTimerDisabled;
+(BOOL)isMotionBlurCapableWithAnimationContext:(id)arg1 ;
+(void)setRandomSeedWithNumber:(id)arg1 ;
+(BOOL)isFPSGraphEnabled;
+(BOOL)isCustomEffectTimingCurveEditingEnabled;
+(BOOL)isRandomNumberSeedInspectionEnabled;
+(unsigned long long)directionFromCustomAttributesDeliveryOption:(unsigned long long)arg1 ;
+(id)timingsArrayWithDirection:(unsigned long long)arg1 duration:(double)arg2 count:(unsigned long long)arg3 chunkDuration:(double)arg4 randomness:(double)arg5 ;
+(id)customAttributesArrayWithTextDeliveryOptions:(id)arg1 ;
+(id)customAttributesArrayWithDeliveryOptions:(id)arg1 ;
+(BOOL)isAnimationEditorMenuEnabled;
+(void)updateDefaultsValues;
+(BOOL)isMotionBlurBlacklistedWithCapabilities:(id)arg1 ;
+(id)customAttributesArrayWithJiggleIntensityOptions:(id)arg1 ;
+(unsigned long long)randomDirection;
+(unsigned long long)randomBasicDirection;
+(BOOL)isGLStateValidationEnabled;
+(BOOL)isDisplayLoggingEnabled;
+(BOOL)shouldForceDisplayPreferredMode;
+(id)CAAccelerationFromSFXActionAcceleration:(unsigned long long)arg1 ;
+(CGRect)recommendedLayerBoundsForNaturalPlaybackSize:(CGSize)arg1 inContainerWithBounds:(CGRect)arg2 contentsScale:(double)arg3 isExternalDisplay:(BOOL)arg4 ;
+(void)getRecommendedPosition:(CGPoint*)arg1 andTransform:(CATransform3D*)arg2 toFitLayer:(id)arg3 inContainerWithBounds:(CGRect)arg4 contentsScale:(double)arg5 ;
+(void)hitPreviewButtonIfExists;
+(void)initialize;
@end
