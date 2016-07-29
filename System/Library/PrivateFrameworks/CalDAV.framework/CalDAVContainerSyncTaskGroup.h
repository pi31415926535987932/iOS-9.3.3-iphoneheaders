/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainerSyncTaskGroup.h>

@protocol CalDAVCalendar;
@class NSDateComponents;

@interface CalDAVContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {

	int _fetchingEtagState;
	BOOL _getScheduleTags;
	BOOL _getScheduleChanges;
	BOOL _syncEvents;
	BOOL _syncTodos;
	BOOL _supportsExtendedCalendarQuery;
	BOOL _fallbackOnMultiGetError;
	id<CalDAVCalendar> _calendar;
	NSDateComponents* _eventFilterStartDate;
	NSDateComponents* _eventFilterEndDate;
	NSDateComponents* _todoFilterStartDate;
	NSDateComponents* _todoFilterEndDate;

}

@property (nonatomic,retain) id<CalDAVCalendar> calendar;                          //@synthesize calendar=_calendar - In the implementation block
@property (assign,nonatomic) BOOL getScheduleTags;                                 //@synthesize getScheduleTags=_getScheduleTags - In the implementation block
@property (assign,nonatomic) BOOL getScheduleChanges;                              //@synthesize getScheduleChanges=_getScheduleChanges - In the implementation block
@property (assign,nonatomic) BOOL syncEvents;                                      //@synthesize syncEvents=_syncEvents - In the implementation block
@property (assign,nonatomic) BOOL syncTodos;                                       //@synthesize syncTodos=_syncTodos - In the implementation block
@property (assign,nonatomic) BOOL supportsExtendedCalendarQuery;                   //@synthesize supportsExtendedCalendarQuery=_supportsExtendedCalendarQuery - In the implementation block
@property (assign,nonatomic) BOOL fallbackOnMultiGetError;                         //@synthesize fallbackOnMultiGetError=_fallbackOnMultiGetError - In the implementation block
@property (nonatomic,retain) NSDateComponents * eventFilterStartDate;              //@synthesize eventFilterStartDate=_eventFilterStartDate - In the implementation block
@property (nonatomic,retain) NSDateComponents * eventFilterEndDate;                //@synthesize eventFilterEndDate=_eventFilterEndDate - In the implementation block
@property (nonatomic,retain) NSDateComponents * todoFilterStartDate;               //@synthesize todoFilterStartDate=_todoFilterStartDate - In the implementation block
@property (nonatomic,retain) NSDateComponents * todoFilterEndDate;                 //@synthesize todoFilterEndDate=_todoFilterEndDate - In the implementation block
-(void)setCalendar:(id<CalDAVCalendar>)arg1 ;
-(id<CalDAVCalendar>)calendar;
-(void)setSyncEvents:(BOOL)arg1 ;
-(void)setSyncTodos:(BOOL)arg1 ;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 appSpecificCalendarItemClass:(Class)arg7 ;
-(void)setGetScheduleTags:(BOOL)arg1 ;
-(void)setGetScheduleChanges:(BOOL)arg1 ;
-(BOOL)getScheduleTags;
-(BOOL)getScheduleChanges;
-(id)copyGetTaskWithURL:(id)arg1 ;
-(id)dataContentType;
-(BOOL)syncTodos;
-(BOOL)syncEvents;
-(NSDateComponents *)eventFilterStartDate;
-(NSDateComponents *)eventFilterEndDate;
-(NSDateComponents *)todoFilterStartDate;
-(NSDateComponents *)todoFilterEndDate;
-(BOOL)supportsExtendedCalendarQuery;
-(BOOL)_shouldFetchEventsForState:(int)arg1 ;
-(BOOL)_shouldFetchTodosForState:(int)arg1 ;
-(void)setEventFilterStartDate:(NSDateComponents *)arg1 ;
-(void)setEventFilterEndDate:(NSDateComponents *)arg1 ;
-(void)setTodoFilterStartDate:(NSDateComponents *)arg1 ;
-(void)setTodoFilterEndDate:(NSDateComponents *)arg1 ;
-(id)initWithCalendar:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3 ;
-(id)copyMultiGetTaskWithURLs:(id)arg1 ;
-(id)copyPutTaskWithPayloadItem:(id)arg1 forAction:(id)arg2 ;
-(void)applyAdditionalPropertiesFromPutTask:(id)arg1 ;
-(void)applyAdditionalPropertiesFromPostTask:(id)arg1 ;
-(BOOL)shouldFetchMoreETags;
-(id)copyGetEtagTaskWithPropertiesToFind:(id)arg1 ;
-(BOOL)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2 ;
-(id)copyAdditionalResourcePropertiesToFetch;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 getScheduleTags:(BOOL)arg5 getScheduleChanges:(BOOL)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 appSpecificCalendarItemClass:(Class)arg9 ;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 getScheduleTags:(BOOL)arg4 getScheduleChanges:(BOOL)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7 ;
-(void)setSupportsExtendedCalendarQuery:(BOOL)arg1 ;
-(BOOL)fallbackOnMultiGetError;
-(void)setFallbackOnMultiGetError:(BOOL)arg1 ;
@end
