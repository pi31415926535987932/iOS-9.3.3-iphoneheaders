/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FuseUI/FuseUI-Structs.h>
@class MPUPropertySet;

@interface MusicStoreBrowseSectionBuilder : NSObject {

	SCD_Struct_Mu24 _requestedBrowseSectionProperties;
	MPUPropertySet* _requestedPropertySet;

}

@property (nonatomic,readonly) MPUPropertySet * requestedPropertySet;                                             //@synthesize requestedPropertySet=_requestedPropertySet - In the implementation block
@property (nonatomic,readonly) MPUPropertySet * requestedPropertySetExcludingInternalOnlyProperties; 
+(id)allSupportedInternalOnlyProperties;
+(id)allSupportedPropertiesIncludingInternalOnlyProperties:(BOOL)arg1 ;
-(MPUPropertySet *)requestedPropertySet;
-(id)initWithRequestedPropertySet:(id)arg1 ;
-(id)modelObjectWithTitle:(id)arg1 loadAdditionalContentURL:(id)arg2 uniformContentItemType:(long long)arg3 isMemberOfChartSet:(BOOL)arg4 isBrick:(BOOL)arg5 previouslyRetrievedNestedResponse:(id)arg6 ;
-(MPUPropertySet *)requestedPropertySetExcludingInternalOnlyProperties;
@end

