/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCContainer.h>

@protocol BRCLocalContainerDelegate, OS_dispatch_source, OS_dispatch_queue;
@class BRCAccountSession, BRCServerZone, NSNumber, NSString, PQLConnection, BRCThrottleBase, BRCSyncUpOperation, NSError, BRCSyncDownOperation, BRCSyncOperationThrottle, BRCSyncBudgetThrottle, BRCDeadlineToken, NSMutableIndexSet, NSDate, NSMutableSet, NSObject, NSMutableDictionary, UMUserSyncTask, NSArray, NSURL;

@interface BRCLocalContainer : NSObject <BRCContainer> {

	BRCAccountSession* _session;
	BRCServerZone* _serverZone;
	id<BRCLocalContainerDelegate> _delegate;
	NSNumber* _dbRowID;
	NSString* _containerID;
	NSString* _mangledID;
	PQLConnection* _db;
	unsigned _state;
	BOOL _activated;
	int _notifyTokenForFramework;
	BOOL _isInitialCreation;
	BRCThrottleBase* _readerThrottle;
	AQ _activeQueries;
	AQ _activeRecursiveQueries;
	AQ _activeAliasQueries;
	unsigned long long _maxLostStamp;
	NSNumber* _deepScanStamp;
	long long _lostHeapKey;
	long long _syncUpRetryAfter;
	AI _syncState;
	BRCSyncUpOperation* _syncUpOperation;
	NSError* _lastSyncUpError;
	BRCSyncDownOperation* _syncDownOperation;
	id _syncDeadlineTokenResumer;
	NSError* _lastSyncDownError;
	BRCSyncOperationThrottle* _syncUpThrottle;
	BRCSyncBudgetThrottle* _syncUpBudget;
	BRCSyncOperationThrottle* _syncDownThrottle;
	BRCDeadlineToken* _syncDeadlineToken;
	NSMutableIndexSet* _appliedTombstoneRanks;
	long long _lastInsertedRank;
	NSDate* _lastSyncDownDate;
	NSString* _osNameRequiredToSync;
	NSMutableIndexSet* _pendingCoordinatedIOs;
	NSMutableSet* _pendingFileCoordinators;
	BOOL _shouldForceContainerForeground;
	NSMutableSet* _foregroundClients;
	NSString* _lastForegroundClientDescription;
	NSDate* _dateWhenLastForegroundClientLeft;
	NSObject*<OS_dispatch_source> _timerForGraceForegroundPeriod;
	NSObject*<OS_dispatch_queue> _foregroundStateQueue;
	NSObject*<OS_dispatch_source> _resetTimer;
	NSMutableSet* _XPCClientsUsingUbiquity;
	NSMutableDictionary* _syncDownBlockToPerformForBookmarkData;
	NSMutableDictionary* _onDiskBlockToPerformForItemID;
	NSMutableDictionary* _downloadedBlockToPerformForItemID;
	NSMutableDictionary* _syncDownBlockToPerformForItemID;
	UMUserSyncTask* _bubbleSyncTask;
	BOOL _needsSave;
	NSNumber* _fileID;
	NSNumber* _generationID;
	unsigned long long _requestID;
	NSArray* _syncThrottles;
	NSMutableDictionary* _t_osNamesByItemIDBlockedForSyncUp;
	NSString* _t_syncBlockedUntilOSName;

}

@property (nonatomic,retain) BRCServerZone * serverZone;                                              //@synthesize serverZone=_serverZone - In the implementation block
@property (nonatomic,readonly) unsigned state;                                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL activated;                                                        //@synthesize activated=_activated - In the implementation block
@property (nonatomic,retain) id<BRCLocalContainerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * absolutePath; 
@property (nonatomic,readonly) NSString * pathRelativeToRoot; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSNumber * fileID;                                                     //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,readonly) NSNumber * generationID;                                               //@synthesize generationID=_generationID - In the implementation block
@property (nonatomic,retain) NSString * containerID;                                                  //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,readonly) NSString * mangledID;                                                  //@synthesize mangledID=_mangledID - In the implementation block
@property (nonatomic,readonly) NSString * ownerName; 
@property (nonatomic,retain) BRCAccountSession * session;                                             //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSString * osNameRequiredToSync;                                       //@synthesize osNameRequiredToSync=_osNameRequiredToSync - In the implementation block
@property (nonatomic,readonly) BOOL isForeground; 
@property (readonly) BOOL hasActiveQueries; 
@property (readonly) BOOL hasActiveRecursiveQueries; 
@property (readonly) BOOL hasActiveAliasQueries; 
@property (nonatomic,readonly) NSMutableIndexSet * pendingCoordinatedIOs;                             //@synthesize pendingCoordinatedIOs=_pendingCoordinatedIOs - In the implementation block
@property (nonatomic,readonly) long long lastInsertedRank;                                            //@synthesize lastInsertedRank=_lastInsertedRank - In the implementation block
@property (nonatomic,readonly) NSNumber * deepScanStamp; 
@property (nonatomic,readonly) unsigned long long lostHeapKey; 
@property (nonatomic,readonly) unsigned long long currentRequestID;                                   //@synthesize requestID=_requestID - In the implementation block
@property (readonly) unsigned syncState; 
@property (nonatomic,readonly) NSArray * syncThrottles;                                               //@synthesize syncThrottles=_syncThrottles - In the implementation block
@property (nonatomic,readonly) BRCDeadlineToken * syncDeadlineToken;                                  //@synthesize syncDeadlineToken=_syncDeadlineToken - In the implementation block
@property (nonatomic,readonly) BOOL hasHighPriorityWatchers; 
@property (nonatomic,readonly) BOOL isGreedy; 
@property (nonatomic,readonly) NSMutableDictionary * _t_osNamesByItemIDBlockedForSyncUp;              //@synthesize t_osNamesByItemIDBlockedForSyncUp=_t_osNamesByItemIDBlockedForSyncUp - In the implementation block
@property (nonatomic,readonly) NSString * _t_syncBlockedUntilOSName;                                  //@synthesize t_syncBlockedUntilOSName=_t_syncBlockedUntilOSName - In the implementation block
@property (assign,nonatomic) BOOL needsSave;                                                          //@synthesize needsSave=_needsSave - In the implementation block
@property (nonatomic,retain) NSNumber * dbRowID;                                                      //@synthesize dbRowID=_dbRowID - In the implementation block
@property (nonatomic,readonly) BOOL isSharedContainer; 
@property (nonatomic,readonly) BOOL isPrivateContainer; 
@property (nonatomic,readonly) PQLConnection * db;                                                    //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * plist; 
-(id)_cancelAllOperationsForReset;
-(void)_reset:(unsigned long long)arg1 ;
-(void)_finishedReset:(unsigned long long)arg1 ;
-(void)_performWhileResettingClientTruths:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_performAfterResetServerAndClientTruthsAndUnlinkData:(/*^block*/id)arg1 ;
-(void)_performAfterResetServerAndClientTruthsAndUnlinkDataAndPurgeTheZone:(/*^block*/id)arg1 ;
-(void)_removeTargetedAliasesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_mkdirContainerIfNeeded;
-(void)cancelReset;
-(void)scheduleReset:(unsigned long long)arg1 ;
-(BOOL)needsSave;
-(void)setDelegate:(id<BRCLocalContainerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id<BRCLocalContainerDelegate>)delegate;
-(unsigned)state;
-(NSURL *)url;
-(void)resume;
-(void)close;
-(BOOL)activated;
-(void)setNeedsSave:(BOOL)arg1 ;
-(BOOL)isForeground;
-(BRCAccountSession *)session;
-(void)setSession:(BRCAccountSession *)arg1 ;
-(NSNumber *)fileID;
-(void)setContainerID:(NSString *)arg1 ;
-(NSString *)containerID;
-(id)descriptionWithContext:(id)arg1 ;
-(void)scheduleSyncDown;
-(NSString *)absolutePath;
-(BOOL)isPrivateContainer;
-(BOOL)isSharedContainer;
-(id)itemByItemID:(id)arg1 ;
-(NSNumber *)dbRowID;
-(id)itemByRowID:(unsigned long long)arg1 ;
-(id)asPrivateContainer;
-(NSMutableDictionary *)plist;
-(void)setDbRowID:(NSNumber *)arg1 ;
-(id)initWithPlist:(id)arg1 containerID:(id)arg2 dbRowID:(id)arg3 db:(id)arg4 session:(id)arg5 ;
-(id)newLocalItemFromPQLResultSet:(id)arg1 error:(id*)arg2 ;
-(BOOL)isSyncBlockedBecauseAppNotInstalled;
-(BOOL)isSyncBlockedBecauseOSNeedsUpgrade;
-(BRCServerZone *)serverZone;
-(BOOL)dumpStatusToContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)dumpActivityToContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)dumpTablesToContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)setStateBits:(unsigned)arg1 ;
-(void)updateFromFSAtPath:(id)arg1 ;
-(id)directoryItemIDByFileID:(unsigned long long)arg1 ;
-(id)asSharedContainer;
-(id)serverItemByItemID:(id)arg1 ;
-(id)itemByFileID:(unsigned long long)arg1 ;
-(id)itemByDocumentID:(unsigned)arg1 ;
-(NSString *)pathRelativeToRoot;
-(id)fileIDForDirectoryItemID:(id)arg1 db:(id)arg2 ;
-(id)documentItemByItemID:(id)arg1 ;
-(NSString *)mangledID;
-(void)registerQueryWithAliases:(BOOL)arg1 isRecursive:(BOOL)arg2 ;
-(PQLResultSet*)itemsEnumeratorChildOf:(id)arg1 rankMin:(unsigned long long)arg2 rankMax:(unsigned long long)arg3 count:(unsigned long long)arg4 ;
-(PQLResultSet*)itemsEnumeratorWithRankMin:(unsigned long long)arg1 rankMax:(unsigned long long)arg2 namePrefix:(id)arg3 shouldIncludeFolders:(BOOL)arg4 shouldIncludeAliases:(BOOL)arg5 shouldIncludeDataScope:(BOOL)arg6 shouldIncludeDocumentsScope:(BOOL)arg7 count:(unsigned long long)arg8 ;
-(void)beginSyncBubbleActivityIfNecessary;
-(BOOL)validateItemsLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(BOOL)validateStructureLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(NSMutableIndexSet *)pendingCoordinatedIOs;
-(BOOL)isSyncBlocked;
-(BOOL)hasCompletedInitialSyncDownOnce;
-(void)signalFaultingWatchers:(id)arg1 ;
-(long long)lastInsertedRank;
-(void)didSyncDownRequestID:(unsigned long long)arg1 maxApplyRank:(long long)arg2 caughtUpWithServer:(BOOL)arg3 syncDownDate:(id)arg4 ;
-(long long)throttleHashWithItemID:(id)arg1 ;
-(BOOL)handleResetErrorIfNeeded:(id)arg1 ;
-(long long)serverRankByItemID:(id)arg1 ;
-(/*^block*/id)popDownloadedBlockForItemID:(id)arg1 ;
-(void)clearSyncStateBits:(unsigned)arg1 ;
-(void)cancelFileCoordinators;
-(PQLResultSet*)liveTargetedAliasesEnumeratorWithCount:(unsigned long long)arg1 ;
-(PQLResultSet*)documentsNotIdleEnumerator;
-(void)_removeAllShareAcceptanceBlocks;
-(void)scheduleDeepScan;
-(unsigned)syncState;
-(void)clearStateBits:(unsigned)arg1 ;
-(void)scheduleResetServerAndClientTruthsForReason:(const char*)arg1 ;
-(unsigned long long)allocateLostStampAddingBackoff:(BOOL)arg1 ;
-(void)didCreateDocumentScopedItem;
-(BOOL)hasActiveAliasQueries;
-(BOOL)hasActiveQueries;
-(BOOL)hasActiveRecursiveQueries;
-(NSString *)osNameRequiredToSync;
-(void)scheduleSyncUp;
-(void)didFindLostItem:(id)arg1 ;
-(void)didClearOutOfQuota;
-(void)scheduleSyncDownFirst;
-(BRCDeadlineToken *)syncDeadlineToken;
-(BOOL)isGreedy;
-(void)recomputeSyncBubbleTask;
-(/*^block*/id)popOnDiskBlockForItemID:(id)arg1 ;
-(BOOL)hasUbiquityClientsConnected;
-(void)didGCTombstoneRanks:(id)arg1 ;
-(id)xattrForSignature:(id)arg1 ;
-(PQLResultSet*)itemsEnumeratorWithDB:(id)arg1 ;
-(void)clearSyncUpError;
-(unsigned long long)nextSyncUpRequestID;
-(void)setupOperationForTestsIfNeeded:(id)arg1 recordsToSave:(id)arg2 ;
-(void)setServerZone:(BRCServerZone *)arg1 ;
-(void)removeForegroundClient:(id)arg1 ;
-(void)addForegroundClient:(id)arg1 ;
-(BOOL)removeSyncDownForItemIDBlock:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 whenSyncDownCompletesLookingForItemID:(id)arg2 ;
-(BOOL)removeItemOnDiskBlock:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 whenItemWithIDIsOnDisk:(id)arg2 ;
-(void)startDownloadItem:(id)arg1 options:(unsigned long long)arg2 group:(id)arg3 ;
-(id)initWithContainerID:(id)arg1 dbRowID:(id)arg2 db:(id)arg3 session:(id)arg4 initialCreation:(BOOL)arg5 ;
-(void)updateWithPlist:(id)arg1 ;
-(void)_startSync;
-(unsigned)_activateState:(unsigned)arg1 origState:(unsigned)arg2 ;
-(void)setSyncStateBits:(unsigned)arg1 ;
-(void)_notifyFrameworkContainersMonitorWithState:(BOOL)arg1 ;
-(id)itemCountPendingUploadOrSyncUp;
-(void)_notifyContainerBeingNowForeground;
-(void)_armForegroundGraceTimerForClientDescription:(id)arg1 ;
-(void)startDownloadingItemsUsingGroup:(id)arg1 ;
-(void)disconnectNSMDQListenerAsync;
-(BOOL)_fetchNextLostItemID:(id*)arg1 parentID:(id*)arg2 stamp:(long long*)arg3 ;
-(unsigned long long)backoffBeforeProcessingLostItemWithStamp:(unsigned long long)arg1 ;
-(id)nextLostItemIDWithBackoff:(long long*)arg1 now:(long long)arg2 ;
-(BOOL)hasHighPriorityWatchers;
-(void)_syncUpOfRecords:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)syncDownImmediately;
-(void)_markRequestIDAcked;
-(void)_markLatestSyncRequestFailed;
-(void)_learnCKInfosFromSavedRecords:(id)arg1 ;
-(void)handleZoneBlockedErrorIfNeeded:(id)arg1 ;
-(NSArray *)syncThrottles;
-(BOOL)hasDocumentsOrDirectory;
-(void)_showiCloudDriveAppUpSellDialogIfNeeded;
-(PQLResultSet*)itemsWithInFlightDiffsEnumerator;
-(unsigned long long)documentEvictableSizeUsageWithAccessTimeDelta:(double)arg1 ;
-(BOOL)_dumpItemsToContext:(id)arg1 error:(id*)arg2 ;
-(void)_removeOnDiskBlockToPerformForItemID:(id)arg1 ;
-(void)_removeDownloadedBlockToPerformForItemID:(id)arg1 ;
-(void)_prepareForForegroundSyncDown;
-(NSMutableDictionary *)_t_osNamesByItemIDBlockedForSyncUp;
-(NSString *)_t_syncBlockedUntilOSName;
-(void)unregisterQueryWithAliases:(BOOL)arg1 isRecursive:(BOOL)arg2 ;
-(id)initForCreationWithContainerID:(id)arg1 dbRowID:(id)arg2 db:(id)arg3 session:(id)arg4 ;
-(void)associateWithServerZone:(id)arg1 ;
-(void)didReceiveHandoffRequest;
-(void)addClientUsingUbiquity:(id)arg1 ;
-(void)removeClientUsingUbiquity:(id)arg1 ;
-(PQLResultSet*)itemsEnumerator;
-(id)coordinatorForItem:(id)arg1 forRead:(BOOL)arg2 ;
-(NSNumber *)deepScanStamp;
-(unsigned long long)lostHeapKey;
-(unsigned long long)markChildrenLostForItemID:(id)arg1 ;
-(void)resetSyncBudgetAndThrottle;
-(void)syncDownOperation:(id)arg1 didFinishWithError:(id)arg2 status:(long long)arg3 ;
-(void)handleRootRecordDeletion;
-(BOOL)hasUbiquitousDocuments;
-(BOOL)hasLocalChanges;
-(unsigned long long)documentSizeUsage;
-(unsigned long long)documentEvictableSizeUsage;
-(unsigned long long)documentEvictableSizeUsageWithUrgency:(int)arg1 ;
-(unsigned long long)documentCount;
-(void)didApplyTombstoneForRank:(long long)arg1 ;
-(BOOL)evictItem:(id)arg1 group:(id)arg2 error:(id*)arg3 ;
-(BOOL)_resetItemsTable;
-(BOOL)existsByItemID:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 whenItemWithIDIsDownloaded:(id)arg2 ;
-(BOOL)removeItemIsDownloadedBlock:(id)arg1 ;
-(void)_t_addItemID:(id)arg1 blockedForSyncUpUntilOSName:(id)arg2 ;
-(void)_t_removeAllItemIDsSyncUpBlocking;
-(void)_t_markBlockedUntilOSName:(id)arg1 ;
-(unsigned long long)currentRequestID;
-(PQLConnection *)db;
-(NSNumber *)generationID;
-(NSString *)ownerName;
@end
