/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PUOneUpPresentationHelperAssetDisplayDelegate <NSObject>
@optional
-(id)oneUpPresentationHelper:(id)arg1 currentImageForAssetReference:(id)arg2;
-(void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2;
-(void)oneUpPresentationHelper:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
-(void)oneUpPresentationHelper:(id)arg1 shouldDisableScroll:(BOOL)arg2;

@required
-(CGRect*)oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(UIEdgeInsets*)arg3;

@end
