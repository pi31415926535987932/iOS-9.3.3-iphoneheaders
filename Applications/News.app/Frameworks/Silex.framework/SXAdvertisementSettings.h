/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>

@class SXDynamicAdLayout;

@interface SXAdvertisementSettings : SXJSONObject

@property (nonatomic,readonly) unsigned long long frequency; 
@property (nonatomic,readonly) unsigned long long bannerType; 
@property (nonatomic,readonly) SXDynamicAdLayout * layout; 
-(SXDynamicAdLayout *)layout;
-(unsigned long long)bannerType;
-(unsigned long long)frequency;
-(unsigned long long)bannerTypeWithValue:(id)arg1 withType:(int)arg2 ;
@end

