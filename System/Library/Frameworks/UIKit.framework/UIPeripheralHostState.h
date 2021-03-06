/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSDictionary;

@interface UIPeripheralHostState : NSObject {

	UIPeripheralAnimationGeometry _geometry;
	NSDictionary* _screenGeometry;
	BOOL _inPositionIsDestination;

}

@property (assign,nonatomic) UIPeripheralAnimationGeometry geometry;              //@synthesize geometry=_geometry - In the implementation block
@property (nonatomic,retain) NSDictionary * screenGeometry;                       //@synthesize screenGeometry=_screenGeometry - In the implementation block
@property (assign,nonatomic) BOOL inPositionIsDestination;                        //@synthesize inPositionIsDestination=_inPositionIsDestination - In the implementation block
+(id)stateWithGeometry:(UIPeripheralAnimationGeometry)arg1 inPositionIsDestination:(BOOL)arg2 ;
-(void)dealloc;
-(UIPeripheralAnimationGeometry)geometry;
-(void)setGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(void)setInPositionIsDestination:(BOOL)arg1 ;
-(void)setScreenGeometry:(NSDictionary *)arg1 ;
-(NSDictionary *)screenGeometry;
-(BOOL)inPositionIsDestination;
@end

