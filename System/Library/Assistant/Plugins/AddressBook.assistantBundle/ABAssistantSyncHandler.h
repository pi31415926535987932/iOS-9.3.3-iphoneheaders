/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/ABAssistantSyncHandler.h>

@protocol ABAssistantSyncHandler <AFSyncHandler,NSObject>
@property (assign,nonatomic) void* addressBook; 
@required
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1;

@end


@class ABAssistantSyncWorker, NSString;

@interface ABAssistantSyncHandler : NSObject <ABAssistantSyncHandler> {

	void* _addressBook;
	ABAssistantSyncWorker* _syncWorker;

}

@property (nonatomic,retain) ABAssistantSyncWorker * syncWorker;              //@synthesize syncWorker=_syncWorker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) void* addressBook; 
-(void)setSyncWorker:(ABAssistantSyncWorker *)arg1 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)syncDidEnd;
-(ABAssistantSyncWorker *)syncWorker;
-(void)dealloc;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
@end

