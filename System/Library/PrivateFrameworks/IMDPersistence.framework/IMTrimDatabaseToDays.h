/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDPersistence/IMDPersistence-Structs.h>
#import <IMDPersistence/IMAbstractDatabaseTrimmer.h>

@interface IMTrimDatabaseToDays : IMAbstractDatabaseTrimmer {

	long long _newerThanDays;

}

@property (nonatomic,readonly) long long newerThanDays;              //@synthesize newerThanDays=_newerThanDays - In the implementation block
-(id)initWithSourceDatabasePath:(id)arg1 destinationDatabasePath:(id)arg2 newerThanDays:(long long)arg3 ;
-(void)performMessageSelectionWithOperation:(IMDSqlOperation*)arg1 ;
-(long long)newerThanDays;
@end

