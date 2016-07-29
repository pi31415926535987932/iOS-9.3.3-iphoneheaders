/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDHealthDaemon;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class HDSQLiteDatabase;

@interface HDEntityEncoder : NSObject {

	id<HDHealthDaemon> _healthDaemon;
	HDSQLiteDatabase* _database;
	Class _entityClass;
	long long _purpose;
	/*^block*/id _authorizationFilter;
	HDEntityEncoder* _superclassEncoder;

}

@property (nonatomic,readonly) id<HDHealthDaemon> healthDaemon;                  //@synthesize healthDaemon=_healthDaemon - In the implementation block
@property (nonatomic,readonly) HDSQLiteDatabase * database;                      //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) Class entityClass;                                //@synthesize entityClass=_entityClass - In the implementation block
@property (nonatomic,readonly) long long purpose;                                //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,copy,readonly) id authorizationFilter;                      //@synthesize authorizationFilter=_authorizationFilter - In the implementation block
@property (nonatomic,readonly) HDEntityEncoder * superclassEncoder;              //@synthesize superclassEncoder=_superclassEncoder - In the implementation block
-(void)finish;
-(long long)purpose;
-(Class)entityClass;
-(HDSQLiteDatabase *)database;
-(id)initWithHealthEntityClass:(Class)arg1 healthDaemon:(id)arg2 database:(id)arg3 purpose:(long long)arg4 authorizationFilter:(/*^block*/id)arg5 ;
-(HDEntityEncoder *)superclassEncoder;
-(id)orderedProperties;
-(id)codableRepresentationForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 collection:(id)arg3 ;
-(void)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 ;
-(id)objectForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 error:(id*)arg3 ;
-(id<HDHealthDaemon>)healthDaemon;
-(id)authorizationFilter;
@end
