/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet, NSString, NSMutableDictionary;

@interface MPCluster : NSObject {

	NSMutableArray* mSlides;
	NSMutableSet* mPathsInCluster;
	NSString* mName;
	double mRating;
	NSMutableDictionary* mUsageCounterPerLayer;

}

@property (retain) NSMutableArray * items; 
@property (copy) NSString * name; 
@property (assign) double rating; 
@property (retain) NSMutableDictionary * usageCounterPerLayer; 
-(id)usageCountDescription;
-(void)setUsageCountForLayer:(id)arg1 to:(double)arg2 ;
-(id)allSlidesSortedChronologically;
-(void)resetAllUsageCounters;
-(BOOL)clusterContainsSlideAtPath:(id)arg1 ;
-(void)removeAllSlides;
-(id)allSlides;
-(id)allSlidesSortedByUser;
-(double)usageCountForLayer:(id)arg1 ;
-(void)setUsageCounterPerLayer:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)usageCounterPerLayer;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)detailedDescription;
-(double)rating;
-(void)setRating:(double)arg1 ;
-(void)addSlide:(id)arg1 ;
-(long long)slideCount;
@end

