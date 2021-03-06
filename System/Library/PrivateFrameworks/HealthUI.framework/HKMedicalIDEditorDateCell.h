/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKMedicalIDEditorCell.h>

@class UIDatePicker, NSDate;

@interface HKMedicalIDEditorDateCell : HKMedicalIDEditorCell {

	UIDatePicker* _picker;
	NSDate* _dateValue;

}

@property (nonatomic,retain) NSDate * dateValue;              //@synthesize dateValue=_dateValue - In the implementation block
-(void)beginEditing;
-(NSDate *)dateValue;
-(void)commitEditing;
-(id)formattedValue;
-(void)setDateValue:(NSDate *)arg1 ;
-(void)_dateChanged:(id)arg1 ;
-(void)_configureDatePicker;
-(void)_showDatePicker;
-(void)_hideDatePicker;
@end

