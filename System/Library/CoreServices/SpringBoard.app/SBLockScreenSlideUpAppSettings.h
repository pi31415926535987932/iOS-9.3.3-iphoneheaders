/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBLockScreenSlideUpAppSettings : _UISettings {

	long long _slideUpAppSelection;

}

@property (assign) long long slideUpAppSelection;              //@synthesize slideUpAppSelection=_slideUpAppSelection - In the implementation block
+(id)settingsControllerModule;
-(void)setSlideUpAppSelection:(long long)arg1 ;
-(long long)slideUpAppSelection;
-(id)bundleIdentifierForCurrentSelection;
-(id)imageNameForCurrentSelection;
-(void)setDefaultValues;
@end

