/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEONavdCachePersistenceManager;

@interface GEORouteHypothesisCache : NSObject {

	GEONavdCachePersistenceManager* _persistenceManager;

}
-(void)dealloc;
-(id)init;
-(id)initWithPath:(id)arg1 ;
-(void)removeKey:(id)arg1 ;
-(void)_removeAllEntries;
-(id)rowIdsOfEntriesBeforeTimeStamp:(double)arg1 ;
-(long long)numberOfEntriesOnDisk;
-(void)saveValue:(id)arg1 forKey:(id)arg2 ;
-(id)loadEntryForRowId:(long long)arg1 ;
-(id)loadValueForKey:(id)arg1 ;
-(double)nextRefreshTimeStamp;
-(id)descriptionOfAllEntries;
@end
