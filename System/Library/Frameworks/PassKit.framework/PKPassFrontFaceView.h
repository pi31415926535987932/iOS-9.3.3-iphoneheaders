/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/PKPassFaceView.h>

@class PKBarcodeStickerView, WLEasyToHitCustomButton, UILabel, PKLinkedAppIconView;

@interface PKPassFrontFaceView : PKPassFaceView {

	PKBarcodeStickerView* _barcodeView;
	WLEasyToHitCustomButton* _flipButton;
	WLEasyToHitCustomButton* _barcodeButton;
	UILabel* _logoLabel;
	BOOL _showsLinkedApp;
	BOOL _showsInfo;
	BOOL _showsBarcodeButton;
	BOOL _showsBarcodeView;
	PKLinkedAppIconView* _linkedApp;

}

@property (assign,nonatomic) BOOL showsLinkedApp;                               //@synthesize showsLinkedApp=_showsLinkedApp - In the implementation block
@property (assign,nonatomic) BOOL showsInfo;                                    //@synthesize showsInfo=_showsInfo - In the implementation block
@property (assign,nonatomic) BOOL showsBarcodeButton;                           //@synthesize showsBarcodeButton=_showsBarcodeButton - In the implementation block
@property (assign,nonatomic) BOOL showsBarcodeView;                             //@synthesize showsBarcodeView=_showsBarcodeView - In the implementation block
@property (nonatomic,readonly) PKLinkedAppIconView * linkedApp;                 //@synthesize linkedApp=_linkedApp - In the implementation block
@property (nonatomic,readonly) PKBarcodeStickerView * barcodeView; 
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(CGSize)contentSize;
-(id)shortFaceTemplate;
-(void)createBodyContentViews;
-(void)insertContentView:(id)arg1 ofType:(long long)arg2 ;
-(BOOL)showsBarcodeView;
-(void)setShowsBarcodeView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGRect)barcodeFrame;
-(id)shortScrunchedFaceTemplate;
-(id)tallFaceTemplate;
-(id)passFaceTemplate;
-(BOOL)isFrontFace;
-(id)_relevantBuckets;
-(void)createHeaderContentViews;
-(void)setClipsContent:(BOOL)arg1 ;
-(void)setShowsBarcodeButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_barcodeButtonPressed;
-(void)_flipButtonPressed;
-(PKBarcodeStickerView *)barcodeView;
-(void)_positionBarcodeView;
-(void)setShowsLinkedApp:(BOOL)arg1 ;
-(void)setShowsInfo:(BOOL)arg1 ;
-(void)setShowsBarcodeButton:(BOOL)arg1 ;
-(void)setShowsBarcodeView:(BOOL)arg1 ;
-(void)updateValidity;
-(BOOL)showsLinkedApp;
-(BOOL)showsInfo;
-(BOOL)showsBarcodeButton;
-(PKLinkedAppIconView *)linkedApp;
@end

