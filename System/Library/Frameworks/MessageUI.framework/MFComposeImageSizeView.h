/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFComposeHeaderView.h>

@class UISegmentedControl;

@interface MFComposeImageSizeView : MFComposeHeaderView {

	UISegmentedControl* _segmentedControl;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setScale:(unsigned long long)arg1 ;
-(void)setSizeDescription:(id)arg1 forScale:(unsigned long long)arg2 ;
-(void)segmentedControlChanged;
-(unsigned long long)_segmentIndexForScale:(unsigned long long)arg1 ;
@end

