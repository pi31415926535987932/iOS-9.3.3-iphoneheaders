/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKViewVolume : NSObject {

	VKPoint _corners[8];

}

@property (nonatomic,readonly) const VKPoint* corners; 
-(const VKPoint*)corners;
-(void)updateWithFrustum:(SCD_Struct_VK7)arg1 matrix:(const SCD_Struct_VK6*)arg2 ;
-(VKPoint)lerpPoint:(float*)arg1 ;
@end

