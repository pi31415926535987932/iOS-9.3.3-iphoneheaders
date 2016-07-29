/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:09 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHEllipseRecognitionResult.h>

@interface CHChatBubbleRecognitionResult : CHEllipseRecognitionResult {

	double _stemWidth;
	CGPoint _stemLocation;

}

@property (readonly) CGPoint stemLocation;              //@synthesize stemLocation=_stemLocation - In the implementation block
@property (readonly) double stemWidth;                  //@synthesize stemWidth=_stemWidth - In the implementation block
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 center:(CGPoint)arg4 size:(CGSize)arg5 stemLocation:(CGPoint)arg6 stemWidth:(double)arg7 ;
-(double)stemWidth;
-(CGPoint)stemLocation;
@end
