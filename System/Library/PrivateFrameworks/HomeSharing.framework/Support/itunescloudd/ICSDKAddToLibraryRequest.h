/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/ICRequest.h>

@interface ICSDKAddToLibraryRequest : ICRequest
+(id)requestWithDatabaseID:(unsigned)arg1 databaseRevision:(unsigned)arg2 opaqueID:(id)arg3 bundleID:(id)arg4 ;
-(id)initWithAction:(id)arg1 databaseID:(unsigned)arg2 databaseRevision:(unsigned)arg3 opaqueID:(id)arg4 bundleID:(id)arg5 ;
-(id)_bodyDataForDatabaseRevision:(unsigned)arg1 opaqueID:(id)arg2 ;
-(double)timeoutInterval;
-(id)canonicalResponseForResponse:(id)arg1 ;
@end

