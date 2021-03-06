/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPReadCoordinatorBase.h>
#import <iWorkImport/TSPReadCoordinator.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class TSPObjectContext, NSUUID, TSPObject, TSPPackage, NSURL, TSPFinalizeHandlerQueue, TSPDocumentResourceDataProvider, TSPPackageMetadata, TSPPersistedObjectUUIDMap, NSObject, NSError, NSMutableArray, NSMapTable, TSPDocumentRevision, NSString;

@interface TSPPackageReadCoordinator : TSPReadCoordinatorBase <TSPReadCoordinator> {

	TSPObjectContext* _context;
	NSUUID* _documentUUID;
	TSPObject* _documentObject;
	TSPPackage* _package;
	NSURL* _packageURL;
	TSPFinalizeHandlerQueue* _finalizeHandlerQueue;
	TSPDocumentResourceDataProvider* _documentResourceDataProvider;
	BOOL _areExternalDataReferencesAllowed;
	BOOL _skipDocumentUpgrade;
	TSPPackageMetadata* _cachedMetadata;
	unsigned long long _readVersion;
	unsigned long long _writeVersion;
	TSPPersistedObjectUUIDMap* _persistedUUIDMap;
	vector<std::__1::auto_ptr<TSP::PersistedObjectUUIDMapOperation>, std::__1::allocator<std::__1::auto_ptr<TSP::PersistedObjectUUIDMapOperation> > >* _persistedUUIDMapOperations;
	NSObject*<OS_dispatch_queue> _errorQueue;
	NSError* _error;
	NSObject*<OS_dispatch_group> _completionGroup;
	NSObject*<OS_dispatch_queue> _ioQueue;
	NSObject*<OS_dispatch_queue> _ioCompletionQueue;
	NSObject*<OS_dispatch_queue> _readCompletionQueue;
	NSObject*<OS_dispatch_queue> _componentQueue;
	hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >* _readIdentifiers;
	NSMutableArray* _componentsToUpgrade;
	NSObject*<OS_dispatch_queue> _objectQueue;
	NSMapTable* _objects;
	hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >* _readExternalObjects;
	BOOL _didRequireUpgrade;
	TSPDocumentRevision* _documentRevision;
	unsigned long long _saveToken;
	long long _preferredPackageType;
	TSPObject* _metadataObject;

}

@property (nonatomic,readonly) unsigned long long readVersion;                      //@synthesize readVersion=_readVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long writeVersion;                     //@synthesize writeVersion=_writeVersion - In the implementation block
@property (nonatomic,readonly) TSPDocumentRevision * documentRevision;              //@synthesize documentRevision=_documentRevision - In the implementation block
@property (nonatomic,readonly) unsigned long long saveToken;                        //@synthesize saveToken=_saveToken - In the implementation block
@property (nonatomic,readonly) long long preferredPackageType;                      //@synthesize preferredPackageType=_preferredPackageType - In the implementation block
@property (nonatomic,readonly) TSPObject * metadataObject;                          //@synthesize metadataObject=_metadataObject - In the implementation block
@property (nonatomic,readonly) BOOL didRequireUpgrade;                              //@synthesize didRequireUpgrade=_didRequireUpgrade - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isReadingFromDocument; 
-(unsigned long long)saveToken;
-(unsigned long long)fileFormatVersion;
-(TSPDocumentRevision *)documentRevision;
-(id)readPackageMetadataWithError:(id*)arg1 ;
-(id)initWithContext:(id)arg1 package:(id)arg2 packageURLOrNil:(id)arg3 finalizeHandlerQueue:(id)arg4 documentResourceDataProvider:(id)arg5 areExternalDataReferencesAllowed:(BOOL)arg6 skipDocumentUpgrade:(BOOL)arg7 ;
-(long long)preferredPackageType;
-(TSPObject *)metadataObject;
-(void)updateObjectContextForSuccessfulRead;
-(BOOL)didRequireUpgrade;
-(unsigned long long)writeVersion;
-(void)readRootObjectWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)processMetadata:(id)arg1 ;
-(BOOL)endReading;
-(void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)requestDocumentResourcesUsingDataProvider:(id)arg1 ;
-(BOOL)hasDocumentVersionUUID;
-(void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(BOOL)arg4 allowUnknownObject:(BOOL)arg5 fromParentObject:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 fromParentObject:(id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)isReadingFromDocument;
-(void)didUpdateLazyReferenceDelegate:(id)arg1 ;
-(id)baseObjectUUID;
-(id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(BOOL)arg2 ;
-(id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(BOOL)arg3 ;
-(void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2 ;
-(long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2 ;
-(id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2 ;
-(long long)metadataObjectIdentifier;
-(void)readComponent:(id)arg1 additionalComponents:(id)arg2 requireUpgrade:(BOOL)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)readPackageMetadataWithComponent:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)readComponentIfNeededAsync:(id)arg1 ;
-(void)prepareForFullDocumentUpgradeImpl;
-(void)readComponentAsync:(id)arg1 ;
-(void)didReadObjects:(id)arg1 forComponent:(id)arg2 packageIdentifier:(unsigned char)arg3 ;
-(void)prepareToReadComponentWithIdentifier:(long long)arg1 forObjectIdentifier:(long long)arg2 isWeakReference:(BOOL)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)didReadMetadata:(id)arg1 ;
-(void)readExternalReferenceComponentIfNeededAsyncForObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isWeak:(BOOL)arg3 fromComponent:(id)arg4 ;
-(void)prepareForFullDocumentUpgrade;
-(void)reader:(id)arg1 didResetObjectIdentifierForObject:(id)arg2 originalObjectIdentifier:(long long)arg3 ;
-(void)reader:(id)arg1 didResetObjectUUID:(id)arg2 forObjectIdentifier:(long long)arg3 originalObjectUUID:(id)arg4 ;
-(unsigned long long)readVersion;
-(id)init;
-(id)context;
-(void)setError:(id)arg1 ;
-(id)error;
-(unsigned char)packageIdentifier;
@end

