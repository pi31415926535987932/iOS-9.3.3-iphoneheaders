/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/NanoAppSync.assistantBundle/NanoAppSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoAppSync/NanoAppSync-Structs.h>
#import <NanoAppSync/NASAppSyncMetaDataItem.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NASAppSyncAnchor;

@interface NASAppSyncMetaDataItemDelete : NSObject <NASAppSyncMetaDataItem, NSCoding> {

	NSString* _appId;
	NASAppSyncAnchor* _anchor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * appId;                       //@synthesize appId=_appId - In the implementation block
@property (nonatomic,copy,readonly) NASAppSyncAnchor * anchor;              //@synthesize anchor=_anchor - In the implementation block
-(id)initWithAppId:(id)arg1 anchor:(id)arg2 ;
-(BOOL)NAS_isMetaDataItemDelete;
-(id)scrapeAppInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NASAppSyncAnchor *)anchor;
-(void)_validate;
-(NSString *)appId;
@end
