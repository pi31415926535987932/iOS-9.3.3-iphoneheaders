/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/ServerDocuments.app/Frameworks/ServerDocsClient.framework/ServerDocsClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ServerDocsClient/SVProgressView.h>

@class CAShapeLayer;

@interface SVUploadBadgeProgressView : SVProgressView {

	CAShapeLayer* _backgroundRingLayer;
	CAShapeLayer* _progressLayer;
	CAShapeLayer* _shadowLayer;
	CAShapeLayer* _arrowLayer;

}

@property (nonatomic,retain) CAShapeLayer * backgroundRingLayer;              //@synthesize backgroundRingLayer=_backgroundRingLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progressLayer;                    //@synthesize progressLayer=_progressLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * shadowLayer;                      //@synthesize shadowLayer=_shadowLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * arrowLayer;                       //@synthesize arrowLayer=_arrowLayer - In the implementation block
-(CAShapeLayer *)shadowLayer;
-(void)updateLayerPropertiesAnimated:(BOOL)arg1 ;
-(CAShapeLayer *)backgroundRingLayer;
-(void)setBackgroundRingLayer:(CAShapeLayer *)arg1 ;
-(double)_arrowHeight;
-(id)_arrowPath;
-(CAShapeLayer *)arrowLayer;
-(BOOL)hasIntermediateState;
-(void)setShadowLayer:(CAShapeLayer *)arg1 ;
-(void)setArrowLayer:(CAShapeLayer *)arg1 ;
-(void)layoutSubviews;
-(CAShapeLayer *)progressLayer;
-(void)setProgressLayer:(CAShapeLayer *)arg1 ;
@end
