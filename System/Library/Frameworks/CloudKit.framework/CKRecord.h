/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSMutableSet, NSString, CKRecordID, NSDate, NSArray, NSData, CKShareID, NSDictionary, CKContainerID, NSSet;

@interface CKRecord : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _values;
	NSMutableDictionary* _originalValues;
	NSMutableSet* _changedKeysSet;
	BOOL _hasUpdatedShareID;
	BOOL _trackChanges;
	BOOL _knownToServer;
	BOOL _wasCached;
	BOOL _serializeProtectionData;
	BOOL _useLightweightPCS;
	NSString* _recordType;
	CKRecordID* _recordID;
	CKRecordID* _creatorUserRecordID;
	NSDate* _creationDate;
	CKRecordID* _lastModifiedUserRecordID;
	NSDate* _modificationDate;
	NSString* _modifiedByDevice;
	NSString* _etag;
	NSArray* _conflictLoserEtags;
	NSData* _protectionData;
	NSString* _previousProtectionEtag;
	NSString* _protectionEtag;
	NSString* _zoneProtectionEtag;
	NSString* _shareProtectionEtag;
	CKShareID* _shareID;
	CKShareID* _fakeShareID;
	CKShareID* _previousShareID;
	long long _permission;
	NSDictionary* _pluginFields;
	CKContainerID* _containerID;

}

@property (nonatomic,copy) NSString * recordType;                                          //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy) CKRecordID * recordID;                                          //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordChangeTag; 
@property (nonatomic,copy) CKRecordID * creatorUserRecordID;                               //@synthesize creatorUserRecordID=_creatorUserRecordID - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                                          //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) CKRecordID * lastModifiedUserRecordID;                          //@synthesize lastModifiedUserRecordID=_lastModifiedUserRecordID - In the implementation block
@property (nonatomic,copy) NSDate * modificationDate;                                      //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) NSDictionary * values;                                        //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSDictionary * originalValues;                                //@synthesize originalValues=_originalValues - In the implementation block
@property (assign,nonatomic) BOOL trackChanges;                                            //@synthesize trackChanges=_trackChanges - In the implementation block
@property (nonatomic,copy) NSString * modifiedByDevice;                                    //@synthesize modifiedByDevice=_modifiedByDevice - In the implementation block
@property (nonatomic,retain) NSString * etag;                                              //@synthesize etag=_etag - In the implementation block
@property (nonatomic,retain) NSArray * conflictLoserEtags;                                 //@synthesize conflictLoserEtags=_conflictLoserEtags - In the implementation block
@property (nonatomic,retain) NSSet * changedKeysSet;                                       //@synthesize changedKeysSet=_changedKeysSet - In the implementation block
@property (assign,getter=isKnownToServer,nonatomic) BOOL knownToServer;                    //@synthesize knownToServer=_knownToServer - In the implementation block
@property (nonatomic,readonly) BOOL containsAssetValues; 
@property (nonatomic,readonly) BOOL hasPropertiesRequiringEncryption; 
@property (nonatomic,readonly) BOOL hasModifiedPropertiesRequiringEncryption; 
@property (nonatomic,readonly) BOOL hasEncryptedData; 
@property (nonatomic,readonly) BOOL hasModifiedEncryptedData; 
@property (assign,nonatomic) BOOL wasCached;                                               //@synthesize wasCached=_wasCached - In the implementation block
@property (assign,nonatomic) BOOL serializeProtectionData;                                 //@synthesize serializeProtectionData=_serializeProtectionData - In the implementation block
@property (nonatomic,retain) NSData * protectionData;                                      //@synthesize protectionData=_protectionData - In the implementation block
@property (nonatomic,retain) NSString * previousProtectionEtag;                            //@synthesize previousProtectionEtag=_previousProtectionEtag - In the implementation block
@property (nonatomic,retain) NSString * protectionEtag;                                    //@synthesize protectionEtag=_protectionEtag - In the implementation block
@property (nonatomic,retain) NSString * zoneProtectionEtag;                                //@synthesize zoneProtectionEtag=_zoneProtectionEtag - In the implementation block
@property (nonatomic,retain) NSString * shareProtectionEtag;                               //@synthesize shareProtectionEtag=_shareProtectionEtag - In the implementation block
@property (assign,nonatomic) BOOL useLightweightPCS;                                       //@synthesize useLightweightPCS=_useLightweightPCS - In the implementation block
@property (nonatomic,retain) CKShareID * shareID;                                          //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,retain) CKShareID * fakeShareID;                                      //@synthesize fakeShareID=_fakeShareID - In the implementation block
@property (nonatomic,retain) CKShareID * previousShareID;                                  //@synthesize previousShareID=_previousShareID - In the implementation block
@property (nonatomic,readonly) BOOL hasUpdatedShareID;                                     //@synthesize hasUpdatedShareID=_hasUpdatedShareID - In the implementation block
@property (nonatomic,readonly) unsigned long long size; 
@property (assign) long long permission;                                                   //@synthesize permission=_permission - In the implementation block
@property (nonatomic,copy) NSDictionary * pluginFields;                                    //@synthesize pluginFields=_pluginFields - In the implementation block
@property (nonatomic,copy) CKContainerID * containerID;                                    //@synthesize containerID=_containerID - In the implementation block
+(BOOL)accessInstanceVariablesDirectly;
+(BOOL)supportsSecureCoding;
-(id)safari_stringForKey:(id)arg1 ;
-(id)safari_dateForKey:(id)arg1 ;
-(BOOL)safari_boolForKey:(id)arg1 ;
-(id)safari_arrayForKey:(id)arg1 ;
-(id)safari_numberForKey:(id)arg1 ;
-(id)safari_dataForKey:(id)arg1 ;
-(id)safari_encryptedDataForKey:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValues:(NSDictionary *)arg1 ;
-(NSDictionary *)values;
-(NSDate *)modificationDate;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(void)_validateRecordName:(id)arg1 ;
-(void)_validateRecordKey:(id)arg1 ;
-(NSDictionary *)originalValues;
-(void)setOriginalValues:(NSDictionary *)arg1 ;
-(void)resetChangedKeys;
-(unsigned long long)_sizeOfRecordID:(id)arg1 ;
-(unsigned long long)_sizeOfRecordValue:(id)arg1 forKey:(id)arg2 ;
-(void)_validateRecordValue:(id)arg1 ;
-(id)_allStrings;
-(BOOL)_checkProperties:(BOOL)arg1 withValueCheckBlock:(/*^block*/id)arg2 ;
-(id)allTokens;
-(void)setUseLightweightPCS:(BOOL)arg1 ;
-(void)setPreviousShareID:(CKShareID *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(CKRecordID *)recordID;
-(id)initWithRecordType:(id)arg1 zoneID:(id)arg2 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(CKContainerID *)containerID;
-(void)encodeSystemFieldsWithCoder:(id)arg1 ;
-(BOOL)wasCached;
-(id)initWithRecordType:(id)arg1 ;
-(void)setFakeShareID:(CKShareID *)arg1 ;
-(void)setWasCached:(BOOL)arg1 ;
-(void)setSerializeProtectionData:(BOOL)arg1 ;
-(BOOL)serializeProtectionData;
-(id)CKPropertiesDescription;
-(void)setProtectionData:(NSData *)arg1 ;
-(void)setProtectionEtag:(NSString *)arg1 ;
-(NSData *)protectionData;
-(NSString *)protectionEtag;
-(void)setPreviousProtectionEtag:(NSString *)arg1 ;
-(CKShareID *)shareID;
-(long long)permission;
-(NSString *)previousProtectionEtag;
-(void)setShareID:(CKShareID *)arg1 ;
-(void)setModifiedByDevice:(NSString *)arg1 ;
-(void)setPermission:(long long)arg1 ;
-(NSArray *)conflictLoserEtags;
-(void)setConflictLoserEtags:(NSArray *)arg1 ;
-(NSString *)modifiedByDevice;
-(NSDictionary *)pluginFields;
-(void)setPluginFields:(NSDictionary *)arg1 ;
-(void)setRecordType:(NSString *)arg1 ;
-(NSString *)recordType;
-(BOOL)containsAssetValues;
-(BOOL)hasEncryptedData;
-(BOOL)hasPropertiesRequiringEncryption;
-(void)setZoneProtectionEtag:(NSString *)arg1 ;
-(void)setShareProtectionEtag:(NSString *)arg1 ;
-(id)changedKeys;
-(void)setKnownToServer:(BOOL)arg1 ;
-(id)copyWithOriginalValues;
-(BOOL)hasModifiedEncryptedData;
-(NSString *)zoneProtectionEtag;
-(NSString *)shareProtectionEtag;
-(CKShareID *)previousShareID;
-(CKShareID *)fakeShareID;
-(BOOL)useLightweightPCS;
-(BOOL)hasModifiedPropertiesRequiringEncryption;
-(id)_initSkippingValidationWithRecordType:(id)arg1 recordID:(id)arg2 ;
-(void)setCreatorUserRecordID:(CKRecordID *)arg1 ;
-(void)setLastModifiedUserRecordID:(CKRecordID *)arg1 ;
-(void)setObjectNoValidate:(id)arg1 forKey:(id)arg2 ;
-(void)setChangedKeysSet:(NSSet *)arg1 ;
-(CKRecordID *)creatorUserRecordID;
-(CKRecordID *)lastModifiedUserRecordID;
-(NSSet *)changedKeysSet;
-(BOOL)isKnownToServer;
-(BOOL)hasUpdatedShareID;
-(NSString *)recordChangeTag;
-(id)initWithRecordType:(id)arg1 recordID:(id)arg2 ;
-(void)setNilValueForKey:(id)arg1 ;
-(BOOL)trackChanges;
-(void)setTrackChanges:(BOOL)arg1 ;
@end

