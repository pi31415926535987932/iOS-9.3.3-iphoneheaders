/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:24 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/Stocks.axbundle/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class NSArray;

@interface UIAccessibilityAxisElement : UIAccessibilityElement {

	NSArray* _axisLabels;
	long long _chartInterval;
	BOOL _isAxisX;
	BOOL _isDetailMode;

}

@property (nonatomic,retain) NSArray * axisLabels;                 //@synthesize axisLabels=_axisLabels - In the implementation block
@property (assign,nonatomic) long long chartInterval;              //@synthesize chartInterval=_chartInterval - In the implementation block
@property (assign,nonatomic) BOOL isAxisX;                         //@synthesize isAxisX=_isAxisX - In the implementation block
@property (assign,nonatomic) BOOL isDetailMode;                    //@synthesize isDetailMode=_isDetailMode - In the implementation block
-(BOOL)isAxisX;
-(BOOL)isDetailMode;
-(void)setIsAxisX:(BOOL)arg1 ;
-(void)setIsDetailMode:(BOOL)arg1 ;
-(void)setAxisLabels:(NSArray *)arg1 ;
-(void)dealloc;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(long long)chartInterval;
-(void)setChartInterval:(long long)arg1 ;
-(NSArray *)axisLabels;
@end
