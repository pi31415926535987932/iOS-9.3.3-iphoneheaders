/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKSyncController : NSObject {

	int _restoreStateChangedToken;
	int _attachmentRestoredToken;
	BOOL _restoring;

}

@property (assign,getter=isRestoring,nonatomic) BOOL restoring;              //@synthesize restoring=_restoring - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)isRestoring;
-(void)prioritizeAttachmentAtPath:(id)arg1 ;
-(void)attachmentRestored;
-(void)updateRestoreState;
-(void)setRestoring:(BOOL)arg1 ;
-(void)postAttachmentRestored;
@end

