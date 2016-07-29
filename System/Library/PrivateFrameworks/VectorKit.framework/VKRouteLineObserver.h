/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/VKRouteLineObserverProtocol.h>

@class VKRouteLine;

@interface VKRouteLineObserver : NSObject <VKRouteLineObserverProtocol> {

	LabelTransitSupport* _transitSupport;
	VKRouteLine* _routeLine;

}
-(void)dealloc;
-(id)initWithTransitSupport:(LabelTransitSupport*)arg1 andRouteLine:(id)arg2 ;
-(void)routeLineDidUpdateSections:(id)arg1 ;
@end
