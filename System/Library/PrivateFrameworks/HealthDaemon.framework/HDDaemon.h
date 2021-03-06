/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDataCollectionManagerDelegate.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/HDHealthDaemon.h>

@protocol OS_dispatch_queue, HDViewOnWakeService;
@class NSString, NSURL, HDSourceManager, HDDeviceManager, HDHealthServiceManager, HDUserCharacteristicsManager, HDContentProtectionManager, HDBackgroundTaskScheduler, HDProcessStateManager, HDPluginManager, HDDataProvenanceManager, HDRoutineGateway, HDAppSubscriptionManager, HDUnitPreferencesManager, HDNanoSyncManager, HDAuthorizationManager, HDWorkoutManager, HDDatabasePruningManager, HDServiceConnectionManager, HDCurrentActivitySummaryHelper, NSMutableSet, NSObject, HDDaemonSyncEngine, HDAchievementDoctorManager, NSXPCListener, NSMutableArray, HDAppLauncher, HDDatabase, HDDataCollectionManager, HDDataManager, HDMetadataManager, HDMigrationManager, HDCoachingDiagnosticManager;

@interface HDDaemon : NSObject <HDDataCollectionManagerDelegate, HDDiagnosticObject, NSXPCListenerDelegate, HDHealthDaemon> {

	NSString* _homeDirectoryPath;
	NSMutableSet* _servers;
	NSObject*<OS_dispatch_queue> _mainQueue;
	HDDaemonSyncEngine* _syncEngine;
	HDContentProtectionManager* _contentProtectionManager;
	HDUserCharacteristicsManager* _userCharacteristicsManager;
	HDBackgroundTaskScheduler* _backgroundTaskScheduler;
	HDProcessStateManager* _processStateManager;
	HDPluginManager* _pluginManager;
	HDDataProvenanceManager* _dataProvenanceManager;
	HDAchievementDoctorManager* _achievementDoctorManager;
	HDDatabasePruningManager* _databasePruningManager;
	HDRoutineGateway* _routineGateway;
	MGNotificationTokenStructRef _deviceNameChangesToken;
	NSXPCListener* _serviceListener;
	NSMutableArray* _daemonLaunchObservers;
	BOOL _daemonReady;
	int _didStart;
	HDAppLauncher* _appLauncher;
	HDAuthorizationManager* _authorizationManager;
	HDDatabase* _database;
	HDDataCollectionManager* _dataCollectMgr;
	HDDataManager* _dataMgr;
	HDHealthServiceManager* _serviceManager;
	HDServiceConnectionManager* _serviceConnectionManager;
	HDSourceManager* _sourceManager;
	HDDeviceManager* _deviceManager;
	HDMetadataManager* _metadataManager;
	HDAppSubscriptionManager* _subscriptionManager;
	HDMigrationManager* _migrationManager;
	HDUnitPreferencesManager* _unitPreferencesManager;
	HDNanoSyncManager* _nanoSyncManager;
	HDWorkoutManager* _workoutManager;
	id<HDViewOnWakeService> _viewOnWakeService;
	HDCoachingDiagnosticManager* _coachingDiagnosticManager;
	HDCurrentActivitySummaryHelper* _currentActivitySummaryHelper;

}

@property (nonatomic,retain) HDAppLauncher * appLauncher;                                                //@synthesize appLauncher=_appLauncher - In the implementation block
@property (nonatomic,retain) HDAuthorizationManager * authorizationManager;                              //@synthesize authorizationManager=_authorizationManager - In the implementation block
@property (nonatomic,retain) HDDatabase * database;                                                      //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) HDDataCollectionManager * dataCollectMgr;                                   //@synthesize dataCollectMgr=_dataCollectMgr - In the implementation block
@property (nonatomic,retain) HDDataManager * dataMgr;                                                    //@synthesize dataMgr=_dataMgr - In the implementation block
@property (nonatomic,retain) HDHealthServiceManager * serviceManager;                                    //@synthesize serviceManager=_serviceManager - In the implementation block
@property (nonatomic,retain) HDServiceConnectionManager * serviceConnectionManager;                      //@synthesize serviceConnectionManager=_serviceConnectionManager - In the implementation block
@property (nonatomic,retain) HDSourceManager * sourceManager;                                            //@synthesize sourceManager=_sourceManager - In the implementation block
@property (nonatomic,retain) HDDeviceManager * deviceManager;                                            //@synthesize deviceManager=_deviceManager - In the implementation block
@property (nonatomic,retain) HDMetadataManager * metadataManager;                                        //@synthesize metadataManager=_metadataManager - In the implementation block
@property (nonatomic,retain) HDAppSubscriptionManager * subscriptionManager;                             //@synthesize subscriptionManager=_subscriptionManager - In the implementation block
@property (nonatomic,retain) HDMigrationManager * migrationManager;                                      //@synthesize migrationManager=_migrationManager - In the implementation block
@property (nonatomic,retain) HDUnitPreferencesManager * unitPreferencesManager;                          //@synthesize unitPreferencesManager=_unitPreferencesManager - In the implementation block
@property (nonatomic,retain) HDNanoSyncManager * nanoSyncManager;                                        //@synthesize nanoSyncManager=_nanoSyncManager - In the implementation block
@property (nonatomic,retain) HDWorkoutManager * workoutManager;                                          //@synthesize workoutManager=_workoutManager - In the implementation block
@property (nonatomic,retain) id<HDViewOnWakeService> viewOnWakeService;                                  //@synthesize viewOnWakeService=_viewOnWakeService - In the implementation block
@property (nonatomic,retain) HDCoachingDiagnosticManager * coachingDiagnosticManager;                    //@synthesize coachingDiagnosticManager=_coachingDiagnosticManager - In the implementation block
@property (nonatomic,retain) HDDatabasePruningManager * databasePruningManager;                          //@synthesize databasePruningManager=_databasePruningManager - In the implementation block
@property (nonatomic,retain) HDRoutineGateway * routineGateway;                                          //@synthesize routineGateway=_routineGateway - In the implementation block
@property (nonatomic,retain) HDCurrentActivitySummaryHelper * currentActivitySummaryHelper;              //@synthesize currentActivitySummaryHelper=_currentActivitySummaryHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * homeDirectoryPath; 
@property (readonly) NSURL * homeDirectoryURL; 
@property (readonly) NSObject*<OS_dispatch_queue> mainQueue; 
@property (readonly) id<HDHealthDatabase> healthDatabase; 
@property (readonly) id<HDHealthDataCollectionManager> healthDataCollectionManager; 
@property (readonly) id<HDHealthDataManager> healthDataManager; 
@property (readonly) id<HDSyncEngine> syncEngine; 
@property (readonly) HDSourceManager * healthSourceManager; 
@property (readonly) HDDeviceManager * healthDeviceManager; 
@property (readonly) id<HDHealthMetadataManager> healthMetadataManager; 
@property (readonly) HDHealthServiceManager * healthServiceManager; 
@property (readonly) HDUserCharacteristicsManager * userCharacteristicsManager; 
@property (readonly) HDContentProtectionManager * contentProtectionManager; 
@property (readonly) HDBackgroundTaskScheduler * backgroundTaskScheduler; 
@property (readonly) HDProcessStateManager * processStateManager; 
@property (readonly) HDPluginManager * pluginManager; 
@property (readonly) HDDataProvenanceManager * dataProvenanceManager; 
@property (readonly) BOOL isAppleWatch; 
+(BOOL)_shouldInitializeDaemon;
-(id)healthLiteUserDefaultsDomain;
-(id)nanoPairedDeviceRegistry;
-(id)pairedSyncCoordinatorWithServiceName:(id)arg1 ;
-(id)IDSServiceWithIdentifier:(id)arg1 ;
-(id)healthDomainAccessorWithPairedDevice:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)mainQueue;
-(void)start;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_localeChanged:(id)arg1 ;
-(HDDatabase *)database;
-(id<HDHealthDatabase>)healthDatabase;
-(BOOL)isAppleWatch;
-(HDSourceManager *)healthSourceManager;
-(id)firstPartyWorkoutSnapshot;
-(void)pauseAllActiveWorkoutsWithCompletion:(/*^block*/id)arg1 ;
-(void)registerForDaemonReady:(id)arg1 ;
-(HDContentProtectionManager *)contentProtectionManager;
-(HDProcessStateManager *)processStateManager;
-(NSURL *)homeDirectoryURL;
-(id<HDSyncEngine>)syncEngine;
-(void)beginTransaction:(id)arg1 ;
-(void)endTransaction:(id)arg1 ;
-(id<HDHealthDataManager>)healthDataManager;
-(HDRoutineGateway *)routineGateway;
-(HDAuthorizationManager *)authorizationManager;
-(HDSourceManager *)sourceManager;
-(id)diagnosticDescription;
-(HDDataProvenanceManager *)dataProvenanceManager;
-(HDUserCharacteristicsManager *)userCharacteristicsManager;
-(HDUnitPreferencesManager *)unitPreferencesManager;
-(id)initWithHomeDirectoryPath:(id)arg1 ;
-(id)_newMainQueue;
-(id)_newContentProtectionMangaer;
-(id)_newDatabase;
-(id)_newProcessStateManager;
-(id)_newUserCharacteristicsManager;
-(id)_newNanoSyncManager;
-(void)_setUpSignalHandlers;
-(void)_registerForDeviceNameChanges;
-(void)_notifyDaemonLaunchObservers;
-(void)_setUpLaunchEventHandlers;
-(void)invalidateAndWait;
-(void)_terminationCleanup;
-(void)_terminating;
-(id)_setupSignal:(int)arg1 handler:(/*^block*/id)arg2 ;
-(void)_setUpNotifydEventHandler;
-(void)_setUpDistnotedEventHandler;
-(void)_setUpPedometerLaunchEventHandler;
-(void)_setupMemoryWarningHandler;
-(void)_resetPrivacySettings;
-(BOOL)_motionTrackingAvailable;
-(void)_periodicUpdates;
-(id)newClientWithConnection:(id)arg1 ;
-(BOOL)_persistDataAndNotify:(id)arg1 provenance:(id)arg2 error:(id*)arg3 ;
-(void)setDataCollectionOptions:(id)arg1 forKey:(id)arg2 type:(id)arg3 clientUUID:(id)arg4 ;
-(void)suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3 ;
-(void)invalidateActivityAlertSuppressionForIdentifier:(id)arg1 ;
-(void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_unregisterLaunchEventDynamicallyForNotification:(const char*)arg1 ;
-(void)_registerLaunchEventDynamicallyForNotification:(const char*)arg1 ;
-(BOOL)persistAndNotifyDataObjects:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasAnyActiveWorkouts;
-(void)_applyPPTUpdatesWithDatabase:(id)arg1 ;
-(BOOL)healthDataReceived:(id)arg1 provenance:(id)arg2 error:(id*)arg3 ;
-(id)pluginDataCollectorsForCollectionManager:(id)arg1 ;
-(BOOL)persistAndNotifyDataObject:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(void)registerForLaunchNotification:(const char*)arg1 ;
-(void)unregisterForLaunchNotification:(const char*)arg1 ;
-(void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(/*^block*/id)arg4 ;
-(void)terminate;
-(void)didUpdateActiveWorkoutServers;
-(NSString *)homeDirectoryPath;
-(id<HDHealthDataCollectionManager>)healthDataCollectionManager;
-(HDDeviceManager *)healthDeviceManager;
-(id<HDHealthMetadataManager>)healthMetadataManager;
-(HDHealthServiceManager *)healthServiceManager;
-(HDBackgroundTaskScheduler *)backgroundTaskScheduler;
-(HDPluginManager *)pluginManager;
-(HDAppSubscriptionManager *)subscriptionManager;
-(HDNanoSyncManager *)nanoSyncManager;
-(HDWorkoutManager *)workoutManager;
-(void)setWorkoutManager:(HDWorkoutManager *)arg1 ;
-(id<HDViewOnWakeService>)viewOnWakeService;
-(void)setViewOnWakeService:(id<HDViewOnWakeService>)arg1 ;
-(HDDatabasePruningManager *)databasePruningManager;
-(HDServiceConnectionManager *)serviceConnectionManager;
-(HDCurrentActivitySummaryHelper *)currentActivitySummaryHelper;
-(void)nukeAllWorkoutServers;
-(HDAppLauncher *)appLauncher;
-(void)setAppLauncher:(HDAppLauncher *)arg1 ;
-(void)setAuthorizationManager:(HDAuthorizationManager *)arg1 ;
-(void)setDatabase:(HDDatabase *)arg1 ;
-(HDDataCollectionManager *)dataCollectMgr;
-(void)setDataCollectMgr:(HDDataCollectionManager *)arg1 ;
-(HDDataManager *)dataMgr;
-(void)setDataMgr:(HDDataManager *)arg1 ;
-(HDHealthServiceManager *)serviceManager;
-(void)setServiceManager:(HDHealthServiceManager *)arg1 ;
-(void)setServiceConnectionManager:(HDServiceConnectionManager *)arg1 ;
-(void)setSourceManager:(HDSourceManager *)arg1 ;
-(HDDeviceManager *)deviceManager;
-(void)setDeviceManager:(HDDeviceManager *)arg1 ;
-(HDMetadataManager *)metadataManager;
-(void)setMetadataManager:(HDMetadataManager *)arg1 ;
-(void)setSubscriptionManager:(HDAppSubscriptionManager *)arg1 ;
-(HDMigrationManager *)migrationManager;
-(void)setMigrationManager:(HDMigrationManager *)arg1 ;
-(void)setUnitPreferencesManager:(HDUnitPreferencesManager *)arg1 ;
-(void)setNanoSyncManager:(HDNanoSyncManager *)arg1 ;
-(HDCoachingDiagnosticManager *)coachingDiagnosticManager;
-(void)setCoachingDiagnosticManager:(HDCoachingDiagnosticManager *)arg1 ;
-(void)setDatabasePruningManager:(HDDatabasePruningManager *)arg1 ;
-(void)setRoutineGateway:(HDRoutineGateway *)arg1 ;
-(void)setCurrentActivitySummaryHelper:(HDCurrentActivitySummaryHelper *)arg1 ;
@end

