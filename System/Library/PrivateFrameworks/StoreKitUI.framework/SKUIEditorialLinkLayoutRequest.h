/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUILayoutRequest.h>

@class NSArray, NSString;

@interface SKUIEditorialLinkLayoutRequest : NSObject <SKUILayoutRequest> {

	NSArray* _links;
	double _width;

}

@property (nonatomic,copy) NSArray * links;                         //@synthesize links=_links - In the implementation block
@property (assign,nonatomic) double width;                          //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Class layoutClass; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)width;
-(NSArray *)links;
-(void)setWidth:(double)arg1 ;
-(void)setLinks:(NSArray *)arg1 ;
-(Class)layoutClass;
@end
