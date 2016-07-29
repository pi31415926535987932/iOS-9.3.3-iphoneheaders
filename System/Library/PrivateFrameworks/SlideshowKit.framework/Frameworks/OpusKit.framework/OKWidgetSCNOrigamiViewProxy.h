/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/SCNSceneRendererDelegate.h>

@class OKWidgetView, NSString, UIImageView, OFUIView, SCNView, OKSCNOrigamiNode;

@interface OKWidgetSCNOrigamiViewProxy : OKWidgetView <SCNSceneRendererDelegate> {

	OKWidgetView* _frontWidgetView;
	OKWidgetView* _backWidgetView;
	NSString* _backSnapshotWidgetName;
	OKWidgetView* _backSnapshotWidgetView;
	UIImageView* _backSnapshotView;
	OFUIView* _backContents;
	SCNView* _sceneView;
	OKSCNOrigamiNode* _origamiNode;

}

@property (assign,nonatomic) OKSCNOrigamiNode * origamiNode;              //@synthesize origamiNode=_origamiNode - In the implementation block
@property (assign,nonatomic) SCNView * sceneView;                         //@synthesize sceneView=_sceneView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(void)prepareForReload;
-(void)prepareForRefresh;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(BOOL)supportsReadiness;
-(OKSCNOrigamiNode *)origamiNode;
-(void)toggleAnimation;
-(void)_prepareBackContentsIfNeeded;
-(void)_prepareBackSnapshotWidgetView;
-(void)_updateBackSnapshotView;
-(void)_prepare:(BOOL)arg1 ;
-(void)renderer:(id)arg1 willRenderScene:(id)arg2 atTime:(double)arg3 ;
-(void)setSettingFrontWidget:(id)arg1 ;
-(void)setSettingBackWidget:(id)arg1 ;
-(void)setSettingBackSnapshotWidgetName:(id)arg1 ;
-(void)setSettingDefaultState:(id)arg1 ;
-(SCNView *)sceneView;
-(void)setSceneView:(SCNView *)arg1 ;
-(void)setOrigamiNode:(OKSCNOrigamiNode *)arg1 ;
@end
