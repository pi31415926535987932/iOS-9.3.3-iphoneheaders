/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/ContainerMigrator.migrator/ContainerMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface MCMContainerDataMigrator : DataClassMigrator {

	BOOL _bundleMigrationHasBeenCompleted;
	BOOL _groupIDMigrationHasBeenCompleted;
	BOOL _codeSigningMigrationHasBeenCompleted;

}

@property (assign,nonatomic) BOOL bundleMigrationHasBeenCompleted;                   //@synthesize bundleMigrationHasBeenCompleted=_bundleMigrationHasBeenCompleted - In the implementation block
@property (assign,nonatomic) BOOL groupIDMigrationHasBeenCompleted;                  //@synthesize groupIDMigrationHasBeenCompleted=_groupIDMigrationHasBeenCompleted - In the implementation block
@property (assign,nonatomic) BOOL codeSigningMigrationHasBeenCompleted;              //@synthesize codeSigningMigrationHasBeenCompleted=_codeSigningMigrationHasBeenCompleted - In the implementation block
-(void)setBundleMigrationHasBeenCompleted:(BOOL)arg1 ;
-(void)setGroupIDMigrationHasBeenCompleted:(BOOL)arg1 ;
-(BOOL)codeSigningMigrationHasBeenCompleted;
-(BOOL)groupIDMigrationHasBeenCompleted;
-(void)setCodeSigningMigrationHasBeenCompleted:(BOOL)arg1 ;
-(BOOL)bundleMigrationHasBeenCompleted;
-(float)migrationProgress;
-(id)init;
-(float)estimatedDuration;
-(BOOL)performMigration;
-(id)dataClassName;
@end
