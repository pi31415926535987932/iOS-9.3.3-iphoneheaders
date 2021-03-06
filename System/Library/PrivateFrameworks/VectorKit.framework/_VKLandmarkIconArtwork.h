/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKIconArtwork.h>

@interface _VKLandmarkIconArtwork : VKIconArtwork {

	VKIconStyleInfo _style;
	CGImageRef _maskImage;
	CGImageRef _outlineMaskImage;

}
-(CGSize)size;
-(void)dealloc;
-(void)_cleanUpAfterDrawing;
-(id)_newImage;
-(id)initWithMask:(CGImageRef)arg1 outlineMask:(CGImageRef)arg2 style:(VKIconStyleInfo*)arg3 contentScale:(double)arg4 ;
@end

