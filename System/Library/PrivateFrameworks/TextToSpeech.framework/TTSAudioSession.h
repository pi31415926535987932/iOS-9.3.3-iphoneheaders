/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <TextToSpeech/TextToSpeech-Structs.h>
@class NSObject;

@interface TTSAudioSession : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _audioSessionIsSetUp;
	SCD_Struct_TT0 _desiredState;
	SCD_Struct_TT0 _cachedState;
	BOOL _bluetoothAllowed;
	CFBagRef _activityBag;
	long long _serverGeneration;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_audioSessionInterrupted:(id)arg1 ;
-(void)_mediaServicesWereReset:(id)arg1 ;
-(void)_setupAudioSession;
-(void)_setCategoryForActivity:(long long)arg1 ;
-(long long)_nextActivityForActive:(BOOL)arg1 activity:(long long)arg2 serverActivity:(long long)arg3 ;
-(void)_safeSetupAudioSession;
-(long long)_safeServerGeneration;
-(void)_safeSetCategoryForActivity:(long long)arg1 ;
-(void)_safeSetActive:(BOOL)arg1 withActivity:(long long)arg2 ;
-(void)_safeSetBluetoothInputAllowed:(BOOL)arg1 ;
@end

