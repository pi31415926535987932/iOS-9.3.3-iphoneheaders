/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXScrollPosition.h>

@class NSString;

@interface SXComponentScrollPosition : SXScrollPosition {

	NSString* _componentIdentifier;
	double _relativePageOffset;
	double _canvasWidth;

}

@property (nonatomic,retain) NSString * componentIdentifier;              //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
@property (assign,nonatomic) double relativePageOffset;                   //@synthesize relativePageOffset=_relativePageOffset - In the implementation block
@property (assign,nonatomic) double canvasWidth;                          //@synthesize canvasWidth=_canvasWidth - In the implementation block
-(void)setComponentIdentifier:(NSString *)arg1 ;
-(void)setRelativePageOffset:(double)arg1 ;
-(void)setCanvasWidth:(double)arg1 ;
-(NSString *)componentIdentifier;
-(double)relativePageOffset;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)canvasWidth;
@end

