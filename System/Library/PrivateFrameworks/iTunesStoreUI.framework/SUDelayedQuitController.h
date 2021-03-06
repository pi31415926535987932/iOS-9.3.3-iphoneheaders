/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SUDelayedQuitController : NSObject {

	long long _delayTerminateCount;
	NSMutableArray* _longLivedViewControllers;

}
+(id)sharedInstance;
+(void)beginDelayingTerminate;
+(void)endDelayingTerminate;
+(BOOL)isDelayingTerminate;
+(void)checkInLongLivedViewController:(id)arg1 ;
+(void)checkOutLongLivedViewController:(id)arg1 ;
+(BOOL)viewControllerIsLongLived:(id)arg1 ;
+(id)checkedInViewControllerOfClass:(Class)arg1 ;
-(void)dealloc;
-(void)_checkInLongLivedViewController:(id)arg1 ;
-(void)_checkOutLongLivedViewController:(id)arg1 ;
-(BOOL)_viewControllerIsLongLived:(id)arg1 ;
-(id)_checkedInViewControllerOfClass:(Class)arg1 ;
-(BOOL)_isDelayingTerminate;
-(void)_beginDelayingTerminate;
-(void)_endDelayingTerminate;
@end

