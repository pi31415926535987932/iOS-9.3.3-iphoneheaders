/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNBannerItem;

@interface MNBannerDismissal : NSObject {

	int _reason;
	MNBannerItem* _bannerItem;

}

@property (nonatomic,retain) MNBannerItem * bannerItem;              //@synthesize bannerItem=_bannerItem - In the implementation block
@property (assign,nonatomic) int reason;                             //@synthesize reason=_reason - In the implementation block
-(MNBannerItem *)bannerItem;
-(id)initWithBannerItem:(id)arg1 reason:(int)arg2 ;
-(BOOL)wasDismissedByUser;
-(BOOL)wasTimedOut;
-(void)setBannerItem:(MNBannerItem *)arg1 ;
-(int)reason;
-(void)setReason:(int)arg1 ;
@end
