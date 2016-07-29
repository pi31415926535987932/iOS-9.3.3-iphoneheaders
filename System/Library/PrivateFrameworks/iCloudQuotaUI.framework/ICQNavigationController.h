/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class _ICQFlowSpecification;

@interface ICQNavigationController : UINavigationController {

	_ICQFlowSpecification* _flowSpecification;

}

@property (nonatomic,readonly) _ICQFlowSpecification * flowSpecification;              //@synthesize flowSpecification=_flowSpecification - In the implementation block
+(Class)viewControllerClassForPageClassIdentifier:(id)arg1 ;
-(id)initWithFlowSpecification:(id)arg1 ;
-(_ICQFlowSpecification *)flowSpecification;
-(id)viewControllerForPage:(id)arg1 ;
@end
