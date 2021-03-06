/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKCalendarItem, NSMutableArray;

@interface EKAlarmsViewModel : NSObject {

	BOOL _needsUpdate;
	EKCalendarItem* _calendarItem;
	NSMutableArray* _uiAlarms;

}

@property (assign,nonatomic) BOOL needsUpdate;                           //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (nonatomic,retain) EKCalendarItem * calendarItem;              //@synthesize calendarItem=_calendarItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * uiAlarms;                  //@synthesize uiAlarms=_uiAlarms - In the implementation block
-(id)init;
-(void)setCalendarItem:(EKCalendarItem *)arg1 ;
-(EKCalendarItem *)calendarItem;
-(NSMutableArray *)uiAlarms;
-(id)initWithCalendarItem:(id)arg1 ;
-(void)updatedUIAlarmFromUIAlarm:(id)arg1 toUIAlarm:(id)arg2 atIndex:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_hasUIAlarmChangedFromUIAlarm:(id)arg1 toUIAlarm:(id)arg2 ;
-(void)setUiAlarms:(NSMutableArray *)arg1 ;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
@end

