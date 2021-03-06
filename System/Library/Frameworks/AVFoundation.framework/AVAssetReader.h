/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetReaderInternal, AVAsset, NSError, NSArray;

@interface AVAssetReader : NSObject {

	AVAssetReaderInternal* _priv;

}

@property (nonatomic,retain,readonly) AVAsset * asset; 
@property (readonly) long long status; 
@property (readonly) NSError * error; 
@property (assign,nonatomic) SCD_Struct_CM6 timeRange; 
@property (nonatomic,readonly) NSArray * outputs; 
@property (getter=_figAssetReader,nonatomic,readonly) OpaqueFigAssetReaderRef figAssetReader; 
+(void)initialize;
+(id)_errorForOSStatus:(int)arg1 ;
+(id)assetReaderWithAsset:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(AVAsset *)asset;
-(long long)status;
-(void)_tearDownFigAssetReader;
-(BOOL)_canAddOutput:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)_outputDidFinish:(id)arg1 ;
-(void)_transitionToStatus:(long long)arg1 failureError:(id)arg2 ;
-(void)_handleServerDiedNotification;
-(OpaqueFigAssetReaderRef)_figAssetReader;
-(void)addOutput:(id)arg1 ;
-(NSError *)error;
-(SCD_Struct_CM6)timeRange;
-(void)setTimeRange:(SCD_Struct_CM6)arg1 ;
-(BOOL)canAddOutput:(id)arg1 ;
-(NSArray *)outputs;
-(id)initWithAsset:(id)arg1 error:(id*)arg2 ;
-(void)cancelReading;
-(void)finalize;
-(BOOL)startReading;
@end

