/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer <MTLResource>
@property (readonly) unsigned long long length; 
@required
-(void)didModifyRange:(NSRange)arg1;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
-(unsigned long long)length;
-(void*)contents;

@end
