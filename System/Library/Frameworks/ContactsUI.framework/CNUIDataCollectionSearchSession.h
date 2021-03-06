/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNUIDataCollectionSearchSession : NSObject {

	BOOL _pendingResults;
	BOOL _pendingSuggestionsResults;

}

@property (assign,nonatomic) BOOL pendingResults;                         //@synthesize pendingResults=_pendingResults - In the implementation block
@property (assign,nonatomic) BOOL pendingSuggestionsResults;              //@synthesize pendingSuggestionsResults=_pendingSuggestionsResults - In the implementation block
+(void)end;
+(void)begin;
+(id)currentSession;
-(void)searchStringDidChange;
-(void)didSelectResultSuggested:(BOOL)arg1 ;
-(void)setPendingResults:(BOOL)arg1 ;
-(void)setPendingSuggestionsResults:(BOOL)arg1 ;
-(BOOL)pendingResults;
-(BOOL)pendingSuggestionsResults;
-(void)didFetchResultSuggested:(BOOL)arg1 ;
@end

