/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPPlaylistInternal : NSObject {

	double duration;
	double fadeInDuration;
	double fadeOutDuration;
	double duckInDuration;
	double duckOutDuration;
	double duckLevel;

}

@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double fadeInDuration; 
@property (assign,nonatomic) double fadeOutDuration; 
@property (assign,nonatomic) double duckInDuration; 
@property (assign,nonatomic) double duckOutDuration; 
@property (assign,nonatomic) double duckLevel; 
-(void)setDuckInDuration:(double)arg1 ;
-(void)setDuckOutDuration:(double)arg1 ;
-(void)setDuckLevel:(double)arg1 ;
-(double)duckLevel;
-(double)duckOutDuration;
-(double)duckInDuration;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
@end
