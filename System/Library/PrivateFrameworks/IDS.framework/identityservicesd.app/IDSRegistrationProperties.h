/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface IDSRegistrationProperties : NSObject {

	NSArray* _interesting;
	NSArray* _requireAll;
	NSArray* _lackAll;

}

@property (nonatomic,retain) NSArray * interesting;              //@synthesize interesting=_interesting - In the implementation block
@property (nonatomic,retain) NSArray * requireAll;               //@synthesize requireAll=_requireAll - In the implementation block
@property (nonatomic,retain) NSArray * lackAll;                  //@synthesize lackAll=_lackAll - In the implementation block
-(NSArray *)requireAll;
-(void)setRequireAll:(NSArray *)arg1 ;
-(NSArray *)lackAll;
-(void)setLackAll:(NSArray *)arg1 ;
-(NSArray *)interesting;
-(void)setInteresting:(NSArray *)arg1 ;
@end

