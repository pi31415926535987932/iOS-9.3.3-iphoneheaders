/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/MobileSlideShow.migrator/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class NSMutableArray;

@interface MobileSlideShowDataMigrator : DataClassMigrator {

	NSMutableArray* _fileGroupsToMigrate;
	NSMutableArray* _fileGroupProcessingOptions;
	NSMutableArray* _strayFileGroups;
	double _migrationProgress;
	unsigned long long _secondsToCleanupModel;
	BOOL _didSetOTARestoreToken;

}
-(void)_removeOldLargeThubnails;
-(void)_migrateAssetsdPrefs;
-(BOOL)_migrateCameraRollFiles;
-(void)_setOTARestoreTokenIfNeeded;
-(id)_fileGroupsToMigrate;
-(id)_strayFileGroups;
-(void)_generateMigrationFilegroupsAndOptions;
-(BOOL)_isDCIMAssetsDirectory:(id)arg1 ;
-(id)_fileGroupProcessingOptions;
-(BOOL)_migrateMetadatFilesToPhotoData;
-(float)migrationProgress;
-(void)dealloc;
-(id)init;
-(float)estimatedDuration;
-(BOOL)performMigration;
-(id)dataClassName;
@end

