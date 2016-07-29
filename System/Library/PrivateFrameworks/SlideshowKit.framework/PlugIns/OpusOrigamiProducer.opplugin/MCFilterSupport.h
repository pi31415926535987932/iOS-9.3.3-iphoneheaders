/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet, NSArray;


@protocol MCFilterSupport
@property (readonly) NSSet * filters; 
@property (readonly) NSArray * orderedFilters; 
@property (nonatomic,readonly) unsigned long long countOfFilters; 
@required
-(void)moveFiltersAtIndices:(id)arg1 toIndex:(unsigned long long)arg2;
-(unsigned long long)countOfFilters;
-(void)demolishFilters;
-(void)observeFilter:(id)arg1;
-(void)removeAllFilters;
-(id)insertFilterWithFilterID:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)initFiltersWithImprints:(id)arg1;
-(id)imprintsForFilters;
-(void)unobserveFilter:(id)arg1;
-(NSArray *)orderedFilters;
-(void)removeFiltersAtIndices:(id)arg1;
-(id)addFilterWithFilterID:(id)arg1;
-(NSSet *)filters;
-(id)filterAtIndex:(unsigned long long)arg1;

@end
