/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKUserTrackingButtonTarget, MKUserTrackingView;
@class UIImageView, UIButton, UIActivityIndicatorView, NSMutableDictionary;

@interface _MKUserTrackingButtonController : NSObject {

	id<MKUserTrackingButtonTarget> _target;
	id<MKUserTrackingView> _userTrackingView;
	long long _state;
	UIImageView* _imageView;
	UIButton* _button;
	UIActivityIndicatorView* _activityIndicatorView;
	NSMutableDictionary* _skipModeDictionary;

}

@property (nonatomic,retain) id<MKUserTrackingView> userTrackingView;               //@synthesize userTrackingView=_userTrackingView - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                             //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) long long state;                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * skipModeDictionary;              //@synthesize skipModeDictionary=_skipModeDictionary - In the implementation block
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(UIImageView *)imageView;
-(void)_updateState;
-(id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(id<MKUserTrackingView>)userTrackingView;
-(id)_activityIndicatorView;
-(id)initWithTarget:(id)arg1 userTrackingView:(id)arg2 imageView:(id)arg3 button:(id)arg4 ;
-(id)_contentAnimation;
-(void)_reloadState;
-(BOOL)_shouldAnimateFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)_updateLoading;
-(NSMutableDictionary *)skipModeDictionary;
-(void)_authorizationStatusChanged:(id)arg1 ;
-(void)setUserTrackingView:(id<MKUserTrackingView>)arg1 ;
-(void)setSkipModeDictionary:(NSMutableDictionary *)arg1 ;
-(void)_goToNextMode:(id)arg1 ;
-(id)_shrinkAnimation;
-(id)_expandAnimation;
@end

