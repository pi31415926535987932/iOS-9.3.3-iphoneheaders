/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DResourceLoader.h>

@interface TSCH3DGLTextureLoader : TSCH3DResourceLoader
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)loader;
+(id)_singletonAlloc;
-(void)deactivateHandle:(id)arg1 insideContext:(id)arg2 ;
-(unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void*)arg4 ;
-(void)postbindHandle:(id)arg1 config:(void*)arg2 ;
-(BOOL)shouldReuploadHandle:(id)arg1 config:(void*)arg2 ;
-(unsigned long long)uploadResource:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void*)arg4 ;
-(id)generateHandleWithConfig:(void*)arg1 ;
-(void)bindHandle:(id)arg1 config:(void*)arg2 ;
-(BOOL)activateResource:(id)arg1 insideSession:(id)arg2 unit:(long long)arg3 type:(int)arg4 attributes:(const TextureAttributes*)arg5 ;
-(id)p_convertDataBuffer:(id)arg1 format:(TSCH3DGLTextureFormat)arg2 returningConvertedFormat:(TSCH3DGLTextureFormat*)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
