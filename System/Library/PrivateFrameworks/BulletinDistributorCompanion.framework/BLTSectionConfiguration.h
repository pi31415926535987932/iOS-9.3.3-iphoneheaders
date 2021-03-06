/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface BLTSectionConfiguration : NSObject {

	NSDictionary* _configurations;

}
+(id)sharedSectionConfiguration;
-(id)init;
-(id)_loadConfigurations;
-(BOOL)hasSectionIDOptedOutOfCoordination:(id)arg1 subtype:(long long)arg2 considerSubtype:(BOOL)arg3 ;
-(BOOL)hasSectionIDOptedOutOfCoordination:(id)arg1 ;
-(BOOL)hasSectionIDOptedOutOfAttachmentCoordination:(id)arg1 ;
-(BOOL)shouldSectionIDSettingsAlwaysSync:(id)arg1 ;
@end

