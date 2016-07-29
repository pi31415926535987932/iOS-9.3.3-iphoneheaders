/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/MobileSafari.migrator/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface MobileSafariDataMigrator : DataClassMigrator {

	unsigned long long _migrationLevel;

}
-(void)_removeObsoleteDirectories;
-(void)_migrateAutofillContactInfo;
-(void)_assertSafariContainerPath;
-(BOOL)_symlinkCookieStorage;
-(BOOL)_migrateSearchSettings;
-(void)_migrateLegacyWebKitPreferences;
-(void)_migrateItemFromPath:(id)arg1 toPath:(id)arg2 ;
-(void)_migrateLegacyWebKitWebsiteData;
-(void)_removeBookmarksPanelStatePreferences;
-(BOOL)_migrateAutofillPasswordAndPreferences;
-(BOOL)_migrateAuthenticationCredentials;
-(void)_migrateCloudTabsMetadataOutOfContainer;
-(void)_migrateWebClipIconFilesToClassD;
-(void)_migrateFilesToCorrectProtectionClass;
-(void)_migrateFilesToProtectionClassCFromRootDirectory:(id)arg1 ignorePaths:(id)arg2 ;
-(void)_migrateLibraryFilesIntoContainer;
-(void)_updateCloudTabsEnabledDefaultFromAccounts;
-(void)_clearReadingListFetcherPendingChanges;
-(void)_removeAutocompleteOffBypassSettings;
-(id)init;
-(BOOL)performMigration;
-(id)dataClassName;
@end
