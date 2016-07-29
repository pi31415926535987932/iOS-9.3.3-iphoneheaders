/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CalLocationManager : NSObject
+(void)_loadMapKit;
+(void)currentLocationWithCompletionBlock:(/*^block*/id)arg1 ;
+(BOOL)isCurrentProcessEntitledToUseLocationServices;
+(void)strictGeocodeString:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
+(void)placemarkForLocation:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
+(void)placemarkForAddress:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end
