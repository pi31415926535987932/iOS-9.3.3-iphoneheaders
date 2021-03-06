/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/SocialDataMigrator.migrator/SocialDataMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface SLDataMigrator : DataClassMigrator
-(id)_weiboDatabaseFileName;
-(void)_migrateWeiboData;
-(id)_newTwitterImagesFolderPath;
-(id)_oldTwitterImagesFolderPath;
-(id)_oldTwitterFolderPath;
-(id)_oldWeiboDatabasePath;
-(id)_newWeiboDatabasePath;
-(id)_tencentWeiboDatabasePath;
-(id)_tencentWeiboDatabaseFileName;
-(id)_oldWeiboFolderPath;
-(id)_tencentWeiboImagesFolderPath;
-(id)_newWeiboImagesFolderPath;
-(id)_newTwitterDatabasePath;
-(id)_twitterDatabaseFileName;
-(id)_oldTwitterDatabasePath;
-(id)_oldWeiboImagesFolderPath;
-(void)_migrateTwitterData;
-(void)_migrateTencentWeiboData;
-(void)_createSocialDataDirectoryIfNecessary;
-(BOOL)_needsFileProtectionUpgradeForProfileImagesAtPath:(id)arg1 service:(id)arg2 ;
-(void)_removeAncillarySocialDatabaseFilesWithPrefix:(id)arg1 service:(id)arg2 ;
-(float)migrationProgress;
-(float)estimatedDuration;
-(BOOL)performMigration;
-(id)dataClassName;
@end

