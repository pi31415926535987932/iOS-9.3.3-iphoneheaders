/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABMultiCellContentView_Rows.h>

@class UILabel, NSString;

@interface ABMultiCellContentView_DisplayAlternate : ABMultiCellContentView_Rows {

	UILabel* _displayLabel;

}

@property (nonatomic,readonly) NSString * displayText; 
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6 ;
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6 includeRows:(BOOL)arg7 ;
+(CGRect)displayLabelFrameForValueViewFrame:(CGRect)arg1 styleProvider:(id)arg2 whenEditing:(BOOL)arg3 ;
+(id)displayLabelForReuse;
+(void)setupDisplayLabel:(id)arg1 withPropertyGroup:(id)arg2 styleProvider:(id)arg3 ;
+(void)numberOfLines:(long long*)arg1 lineBreakMode:(long long*)arg2 forDisplayLabelWithPropertyGroup:(id)arg3 styleProvider:(id)arg4 ;
-(void)reload;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)reloadFromModel;
-(void)setAbCellStyle:(int)arg1 ;
-(void)updateSubviewsForNewStateAnimated:(BOOL)arg1 ;
-(void)reloadIncludingRows:(BOOL)arg1 includingDisplayView:(BOOL)arg2 ;
-(void)reloadFromModelIncludingRows:(BOOL)arg1 ;
-(void)reloadDisplayText;
-(CGRect)valueTextRect;
-(NSString *)displayText;
@end
