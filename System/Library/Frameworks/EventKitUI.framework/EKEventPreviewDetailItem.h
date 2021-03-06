/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell, EKDayPreviewController;

@interface EKEventPreviewDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;
	EKDayPreviewController* _containedDayViewController;
	BOOL _showsInlineDayView;
	BOOL _inlineDayViewRespectsSelectedCalendarsFilter;

}

@property (assign,nonatomic) BOOL showsInlineDayView;                                        //@synthesize showsInlineDayView=_showsInlineDayView - In the implementation block
@property (assign,nonatomic) BOOL inlineDayViewRespectsSelectedCalendarsFilter;              //@synthesize inlineDayViewRespectsSelectedCalendarsFilter=_inlineDayViewRespectsSelectedCalendarsFilter - In the implementation block
-(void)reset;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)showsInlineDayView;
-(id)_dayPreviewViewController;
-(BOOL)inlineDayViewRespectsSelectedCalendarsFilter;
-(void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned long long)arg2 ;
-(void)setShowsInlineDayView:(BOOL)arg1 ;
-(void)setInlineDayViewRespectsSelectedCalendarsFilter:(BOOL)arg1 ;
@end

