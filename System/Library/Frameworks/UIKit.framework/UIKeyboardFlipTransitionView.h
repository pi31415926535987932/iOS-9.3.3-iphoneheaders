/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardSplitTransitionView.h>

@class CALayer, UIKBCacheToken, NSMutableDictionary;

@interface UIKeyboardFlipTransitionView : UIKeyboardSplitTransitionView {

	CALayer* _container;
	CALayer* _frontFace;
	CALayer* _backFace;
	CALayer* _frontDarkening;
	CALayer* _backDarkening;
	CALayer* _backDarkeningLeft;
	CALayer* _backDarkeningRight;
	BOOL _showingFrontFace;
	UIKBCacheToken* _startKeyplaneToken;
	UIKBCacheToken* _endKeyplaneToken;
	NSMutableDictionary* _controlKeys;
	struct {
		unsigned shiftKeys : 1;
		unsigned returnKeys : 1;
		unsigned moreIntlKeys : 1;
	}  _rebuildFlags;

}

@property (assign,getter=isShowingFrontFace,nonatomic) BOOL showingFrontFace;              //@synthesize showingFrontFace=_showingFrontFace - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)rebuildTransitionForSplitStyleChange:(id)arg1 ;
-(BOOL)transitionIsVisible;
-(CGImageRef)defaultKeyboardImage;
-(CGImageRef)splitKeyboardImage;
-(void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 keyboardType:(long long)arg3 orientation:(long long)arg4 ;
-(void)rebuildControlKeys:(unsigned long long)arg1 ;
-(void)_flipToFront:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)rebuildControlSlicesForKeyName:(id)arg1 ;
-(void)updateMoreIntlKey:(id)arg1 asStart:(BOOL)arg2 withRect:(CGRect)arg3 showIntl:(BOOL)arg4 showDictKey:(BOOL)arg5 ;
-(void)rebuildTransition;
-(void)rebuildMoreIntlKeys;
-(void)rebuildShiftSlices;
-(void)rebuildReturnSlices;
-(void)updateTransition;
-(void)setShowingFrontFace:(BOOL)arg1 ;
-(void)rebuildBackgroundTransition;
-(void)_delayedUpdateTransition;
-(BOOL)isShowingFrontFace;
@end
