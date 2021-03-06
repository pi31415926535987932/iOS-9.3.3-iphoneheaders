/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface _GAXSettingsFastStorage : NSObject {

	NSMutableDictionary* _settingsStorage;

}

@property (nonatomic,retain) NSMutableDictionary * settingsStorage;                              //@synthesize settingsStorage=_settingsStorage - In the implementation block
@property (nonatomic,retain) NSString * activeAppID; 
@property (nonatomic,retain) NSString * savedASAMAppIdForLostMode; 
@property (assign,getter=isActiveAppSelfLocked,nonatomic) BOOL activeAppSelfLocked; 
@property (assign,nonatomic) BOOL selfLockUnmanaged; 
-(void)_updateSetting:(id)arg1 withKey:(id)arg2 ;
-(void)setSelfLockUnmanaged:(BOOL)arg1 ;
-(BOOL)selfLockUnmanaged;
-(void)setActiveAppSelfLocked:(BOOL)arg1 ;
-(BOOL)isActiveAppSelfLocked;
-(void)setActiveAppID:(NSString *)arg1 ;
-(void)setSavedASAMAppIdForLostMode:(NSString *)arg1 ;
-(NSString *)savedASAMAppIdForLostMode;
-(NSString *)activeAppID;
-(void)setSettingsStorage:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)settingsStorage;
-(void)dealloc;
-(id)init;
-(id)_loadSettings;
@end

