/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICollectionViewCell.h>
#import <libobjc.A.dylib/SKUIPerspectiveView.h>

@class UICollectionView, NSString;

@interface SKUIShelfCollectionViewCell : SKUICollectionViewCell <SKUIPerspectiveView> {

	UICollectionView* _collectionView;
	UIEdgeInsets _contentInset;
	BOOL _rendersWithPerspective;
	BOOL _rendersWithParallax;

}

@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                      //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) BOOL rendersWithPerspective;                    //@synthesize rendersWithPerspective=_rendersWithPerspective - In the implementation block
@property (assign,nonatomic) BOOL rendersWithParallax;                       //@synthesize rendersWithParallax=_rendersWithParallax - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)maximumPerspectiveHeightForSize:(CGSize)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(BOOL)rendersWithParallax;
-(BOOL)rendersWithPerspective;
-(void)setRendersWithPerspective:(BOOL)arg1 ;
-(void)setRendersWithParallax:(BOOL)arg1 ;
-(void)setPerspectiveTargetView:(id)arg1 ;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)updateForChangedDistanceFromVanishingPoint;
@end
