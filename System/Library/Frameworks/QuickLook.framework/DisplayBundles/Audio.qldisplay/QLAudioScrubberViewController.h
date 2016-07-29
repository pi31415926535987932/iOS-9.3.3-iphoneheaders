/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Audio.qldisplay/Audio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UILabel, UISlider;

@interface QLAudioScrubberViewController : UIViewController {

	UILabel* _totalTimeLabel;
	UILabel* _currentTimeLabel;
	UISlider* _timeScrubber;
	double _totalTime;
	double _currentTime;
	/*^block*/id _pauseCallback;
	/*^block*/id _seekToTime;

}

@property (assign,nonatomic) double totalTime;                //@synthesize totalTime=_totalTime - In the implementation block
@property (assign,nonatomic) double currentTime;              //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,copy) id pauseCallback;                  //@synthesize pauseCallback=_pauseCallback - In the implementation block
@property (nonatomic,copy) id seekToTime;                     //@synthesize seekToTime=_seekToTime - In the implementation block
-(void)sliderStart;
-(void)setPauseCallback:(id)arg1 ;
-(void)sliderChange;
-(id)seekToTime;
-(void)setSeekToTime:(id)arg1 ;
-(id)pauseCallback;
-(void)viewWillAppear:(BOOL)arg1 ;
-(double)totalTime;
-(void)setTotalTime:(double)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(double)currentTime;
@end
