/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATAssetLinkDelegate <NSObject>
@required
-(void)assetLinkDidChange:(id)arg1;
-(void)assetLink:(id)arg1 didOpenWithPendingAssets:(id)arg2;
-(void)assetLink:(id)arg1 didCloseWithOutstandingAssets:(id)arg2;
-(void)assetLink:(id)arg1 didFinishAsset:(id)arg2 error:(id)arg3 retryable:(BOOL)arg4;
-(void)assetLink:(id)arg1 didUpdateAsset:(id)arg2 progress:(double)arg3;

@end
