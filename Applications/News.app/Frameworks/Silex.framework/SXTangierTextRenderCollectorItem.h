/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDRepDirectLayerHosting;
#import <Silex/Silex-Structs.h>
@class SXTextTangierStorage, SXTextTangierTextLayout, UIView, SXTextTangierFlowInfo, SXTextTangierFlowLayout, TSWPStorage, NSString;

@interface SXTangierTextRenderCollectorItem : NSObject {

	SXTextTangierStorage* _storage;
	SXTextTangierTextLayout* _layout;
	UIView*<TSDRepDirectLayerHosting> _directLayerHost;
	SXTextTangierFlowInfo* _flowInfo;
	SXTextTangierFlowLayout* _flowLayout;
	BOOL _selectable;
	TSWPStorage* _flowStorage;
	NSString* _componentID;
	NSRange _flowRange;

}

@property (nonatomic,readonly) TSWPStorage * storage;                  //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) TSWPStorage * flowStorage;              //@synthesize flowStorage=_flowStorage - In the implementation block
@property (nonatomic,readonly) NSRange flowRange;                      //@synthesize flowRange=_flowRange - In the implementation block
@property (nonatomic,readonly) NSString * componentID;                 //@synthesize componentID=_componentID - In the implementation block
@property (nonatomic,readonly) BOOL selectable;                        //@synthesize selectable=_selectable - In the implementation block
-(id)flowInfo;
-(id)initWithStorage:(id)arg1 layout:(id)arg2 directLayerHost:(id)arg3 selectable:(BOOL)arg4 componentID:(id)arg5 ;
-(void)updateWithLayout:(id)arg1 ;
-(void)appendToFlowStorage:(id)arg1 ;
-(id)flowLayoutWithICC:(id)arg1 ;
-(TSWPStorage *)flowStorage;
-(NSRange)flowRange;
-(TSWPStorage *)storage;
-(BOOL)selectable;
-(NSString *)componentID;
@end

