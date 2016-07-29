/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLVideoTranscoder : NSObject
+(id)generatePosterFrameForVideoAtURL:(id)arg1 maxSize:(CGSize)arg2 error:(id*)arg3 ;
+(void)transcodeVideo:(id)arg1 outputURL:(id)arg2 startTime:(SCD_Struct_PL25)arg3 endTime:(SCD_Struct_PL25)arg4 presetName:(id)arg5 outputFileType:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
+(id)generatePosterFrameForAVAsset:(id)arg1 maxSize:(CGSize)arg2 error:(id*)arg3 ;
+(id)exportPresetsCompatibleWithVideoAtURL:(id)arg1 ;
+(void)transcodeVideoWithObjectBuilder:(id)arg1 outputURL:(id)arg2 startTime:(SCD_Struct_PL25)arg3 endTime:(SCD_Struct_PL25)arg4 presetName:(id)arg5 outputFileType:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
@end
