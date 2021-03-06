/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXAnalyticsEvent.h>

@class NSString;

@interface SXMediaEngageEvent : SXAnalyticsEvent {

	unsigned long long _userAction;
	unsigned long long _mediaType;
	NSString* _mediaId;
	double _mediaTimePlayed;
	NSString* _mediaPlayMethod;
	NSString* _mediaPauseMethod;
	NSString* _mediaResumeMethod;
	unsigned long long _mediaPausePosition;
	unsigned long long _mediaResumePosition;
	double _mediaFrameRate;
	double _mediaDuration;

}

@property (assign,nonatomic) unsigned long long userAction;                       //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) unsigned long long mediaType;                        //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain) NSString * mediaId;                                  //@synthesize mediaId=_mediaId - In the implementation block
@property (assign,nonatomic) double mediaTimePlayed;                              //@synthesize mediaTimePlayed=_mediaTimePlayed - In the implementation block
@property (nonatomic,retain) NSString * mediaPlayMethod;                          //@synthesize mediaPlayMethod=_mediaPlayMethod - In the implementation block
@property (nonatomic,retain) NSString * mediaPauseMethod;                         //@synthesize mediaPauseMethod=_mediaPauseMethod - In the implementation block
@property (nonatomic,retain) NSString * mediaResumeMethod;                        //@synthesize mediaResumeMethod=_mediaResumeMethod - In the implementation block
@property (assign,nonatomic) unsigned long long mediaPausePosition;               //@synthesize mediaPausePosition=_mediaPausePosition - In the implementation block
@property (assign,nonatomic) unsigned long long mediaResumePosition;              //@synthesize mediaResumePosition=_mediaResumePosition - In the implementation block
@property (assign,nonatomic) double mediaFrameRate;                               //@synthesize mediaFrameRate=_mediaFrameRate - In the implementation block
@property (assign,nonatomic) double mediaDuration;                                //@synthesize mediaDuration=_mediaDuration - In the implementation block
-(unsigned long long)userAction;
-(void)setUserAction:(unsigned long long)arg1 ;
-(void)setMediaId:(NSString *)arg1 ;
-(NSString *)mediaId;
-(void)setMediaTimePlayed:(double)arg1 ;
-(NSString *)mediaPlayMethod;
-(void)setMediaPlayMethod:(NSString *)arg1 ;
-(NSString *)mediaPauseMethod;
-(void)setMediaPauseMethod:(NSString *)arg1 ;
-(void)setMediaPausePosition:(unsigned long long)arg1 ;
-(NSString *)mediaResumeMethod;
-(void)setMediaResumeMethod:(NSString *)arg1 ;
-(void)setMediaResumePosition:(unsigned long long)arg1 ;
-(double)mediaTimePlayed;
-(unsigned long long)mediaPausePosition;
-(unsigned long long)mediaResumePosition;
-(double)mediaFrameRate;
-(void)setMediaFrameRate:(double)arg1 ;
-(double)mediaDuration;
-(void)setMediaDuration:(double)arg1 ;
-(unsigned long long)mediaType;
-(void)setMediaType:(unsigned long long)arg1 ;
@end

