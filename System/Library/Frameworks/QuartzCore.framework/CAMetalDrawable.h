/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/CAMetalDrawable.h>
@class CAMetalLayer;


@protocol CAMetalDrawable <MTLDrawable>
@property (readonly) id<MTLTexture> texture; 
@property (readonly) CAMetalLayer * layer; 
@required
-(CAMetalLayer *)layer;
-(id<MTLTexture>)texture;

@end


@class CAMetalLayer, NSString;

@interface CAMetalDrawable : NSObject <CAMetalDrawable> {

	CAMetalLayer* _layer;
	CAMetalDrawablePrivate* _priv;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLTexture> texture; 
@property (readonly) CAMetalLayer * layer; 
-(void)presentAtTime:(double)arg1 ;
-(id)initWithDrawablePrivate:(CAMetalDrawablePrivate*)arg1 layer:(id)arg2 ;
-(CAMetalDrawablePrivate*)priv;
-(CAMetalLayer *)layer;
-(void)dealloc;
-(void)present;
-(id<MTLTexture>)texture;
@end

