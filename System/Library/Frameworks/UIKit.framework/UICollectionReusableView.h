/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UICollectionViewLayoutAttributes, UICollectionView, NSString;

@interface UICollectionReusableView : UIView {

	UICollectionViewLayoutAttributes* _layoutAttributes;
	UICollectionView* _collectionView;
	long long _updateAnimationCount;
	struct {
		unsigned wasDequeued : 1;
		unsigned preferredAttributesValid : 1;
		unsigned generatingPreferredAttributes : 1;
	}  _reusableViewFlags;
	BOOL _preferredAttributesValid;
	NSString* _reuseIdentifier;

}

@property (nonatomic,copy) NSString * reuseIdentifier;                                                                                             //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (setter=_setLayoutAttributes:,getter=_layoutAttributes,nonatomic,copy) UICollectionViewLayoutAttributes * layoutAttributes; 
@property (assign,setter=_setCollectionView:,getter=_collectionView,nonatomic,__weak) UICollectionView * collectionView; 
@property (getter=_isInUpdateAnimation,nonatomic,readonly) BOOL inUpdateAnimation; 
@property (assign,getter=_arePreferredAttributesValid,nonatomic) BOOL preferredAttributesValid;                                                    //@synthesize preferredAttributesValid=_preferredAttributesValid - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_collectionView;
-(NSString *)reuseIdentifier;
-(void)prepareForReuse;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(id)_layoutAttributes;
-(void)_setBaseLayoutAttributes:(id)arg1 ;
-(BOOL)_disableRasterizeInAnimations;
-(void)_setLayoutAttributes:(id)arg1 ;
-(void)_setCollectionView:(id)arg1 ;
-(BOOL)_isInUpdateAnimation;
-(BOOL)_arePreferredAttributesValid;
-(id)_preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(BOOL)_wasDequeued;
-(void)_invalidatePreferredAttributes;
-(void)_markAsDequeued;
-(void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(void)_addUpdateAnimation;
-(void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(void)_clearUpdateAnimation;
-(void)_setReuseIdentifier:(id)arg1 ;
-(void)setPreferredAttributesValid:(BOOL)arg1 ;
@end
