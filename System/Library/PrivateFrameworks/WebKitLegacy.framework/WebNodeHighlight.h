/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WAKView, WebHighlightLayer, WebNodeHighlightView;

@interface WebNodeHighlight : NSObject {

	WAKView* _targetView;
	WebHighlightLayer* _highlightLayer;
	WebNodeHighlightView* _highlightView;
	InspectorController* _inspectorController;
	id _delegate;

}
-(id)initWithTargetView:(id)arg1 inspectorController:(InspectorController*)arg2 ;
-(InspectorController*)inspectorController;
-(void)setNeedsDisplay;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)detach;
-(void)attach;
-(id)highlightView;
-(id)targetView;
@end

