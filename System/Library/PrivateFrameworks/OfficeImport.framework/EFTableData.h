/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class EDTable, EDReference;

@interface EFTableData : NSObject {

	EFRefTok mRefTok;
	EDTable* mTable;
	EDReference* mReference;
	int mMakeups;

}
-(void)dealloc;
-(id)table;
-(id)reference;
-(unsigned short*)ptgData;
-(id)initWith:(EFStrTok*)arg1 ;
-(const EFRefTok*)refTok;
-(void)makeup:(id)arg1 with:(int)arg2 ;
@end
