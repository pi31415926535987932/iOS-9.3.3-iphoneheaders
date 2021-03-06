/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:24 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDAnimateBehavior.h>

@class NSMutableDictionary;

@interface PDAnimateEffectBehavior : PDAnimateBehavior {

	BOOL mHasTransition;
	int mTransition;
	NSMutableDictionary* mPropertyMap;

}

@property (nonatomic,retain) NSMutableDictionary * propertyMap; 
-(void)dealloc;
-(id)init;
-(void)setTransition:(int)arg1 ;
-(int)transition;
-(BOOL)hasTransition;
-(BOOL)hasProperties;
-(NSMutableDictionary *)propertyMap;
-(void)setPropertyMap:(NSMutableDictionary *)arg1 ;
@end

