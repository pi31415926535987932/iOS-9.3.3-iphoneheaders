/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardCandidateView_iPhone.h>
#import <UIKit/UIKeyboardCandidateViewInline.h>

@class NSString;

@interface UIKeyboardCandidateView_iPhone_Floating : UIKeyboardCandidateView_iPhone <UIKeyboardCandidateViewInline> {

	BOOL _handleShowHide;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)candidatesDidChange;
-(void)setCandidateViewExtended:(BOOL)arg1 ;
-(id)activeCandidateList;
-(unsigned long long)_numberOfColumns:(BOOL)arg1 ;
-(void)_handleKeyboardShowOrHide:(id)arg1 ;
-(BOOL)_shouldShowHideKeyboard;
-(BOOL)_shouldUseFullMetrics;
-(void)_collapse:(id)arg1 ;
@end

