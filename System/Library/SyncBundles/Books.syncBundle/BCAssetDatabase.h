/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Books/Books-Structs.h>
#import <Books/BCDatabase.h>

@interface BCAssetDatabase : BCDatabase {

	int _psErrorRetryCount;

}
+(void)removeDatabase;
-(id)entities:(id)arg1 byPredicate:(id)arg2 fromMOC:(id)arg3 ;
-(id)outstandingAssetsByRestoreFlag:(BOOL)arg1 ;
-(void)removeEntities:(id)arg1 byPredicate:(id)arg2 ;
-(void)removeInstalledAssetsExcluding:(id)arg1 ;
-(id)downloadCompletePathMap;
-(void)removeOutstandingAssetsByPersistentIDs:(id)arg1 ;
-(void)removeOutstandingAssetMissingFromPersistentIDs:(id)arg1 ;
-(void)removeOutstandingAssetByPersistentID:(id)arg1 ;
-(void)setDownloadPath:(id)arg1 forOutstandingAssetsByPersistentID:(id)arg2 ;
-(void)removeOutstandingAssetsByRestoreFlag:(BOOL)arg1 keepDownloadedAssetRows:(BOOL)arg2 ;
-(id)outstandingAssetDownloadCompletePathsMatchingArray:(id)arg1 ;
-(id)cachedInstalledAssetsByPersistentIDs:(id)arg1 metrics:(SCD_Struct_Bo0*)arg2 ;
-(void)insertInstalledAssetByPersistentID:(id)arg1 withSize:(unsigned long long)arg2 ;
-(id)cachedOutstandingAssetsByPersistentIDs:(id)arg1 ;
-(void)insertOutstandingAssetDictionaries:(id)arg1 isRestore:(BOOL)arg2 ;
-(void)updateOutstandingAssetDictionaries:(id)arg1 isRestore:(BOOL)arg2 ;
-(BOOL)shouldRetryAddingPersistentStoreAfterError:(id)arg1 ;
-(id)cachedEntities:(id)arg1 byPersistentIDs:(id)arg2 metrics:(SCD_Struct_Bo0*)arg3 ;
-(id)init;
@end
