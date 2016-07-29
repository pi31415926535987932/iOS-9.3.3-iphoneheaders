/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/EKEditItemViewControllerDelegate.h>
#import <libobjc.A.dylib/EKCalendarItemInlineEditItem.h>

@class UITableViewCell, EKUILocationEditItemCell, UIView, EKRequestAvailabilityOperation, NSArray, EKParticipant, NSString;

@interface EKCalendarItemTitleInlineEditItem : EKCalendarItemEditItem <UITextFieldDelegate, EKEditItemViewControllerDelegate, EKCalendarItemInlineEditItem> {

	UITableViewCell* _titleCell;
	UITableViewCell* _nonConferenceLocationCell;
	EKUILocationEditItemCell* _conferenceLocationCell;
	UITableViewCell* _mapCell;
	BOOL _sourceSupportsAvailabilityRequests;
	UIView* _clearButtonView;
	EKRequestAvailabilityOperation* _availabilityRequest;
	NSArray* _availabilitySpansForLocation;
	EKParticipant* _conferenceRoom;
	long long _conferenceRoomAvailabilityType;
	BOOL _showsLocation;
	long long _mostRecentStringLengthDelta;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)initWithLocation:(BOOL)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(void)_updateAvailabilityInformation;
-(BOOL)_showsMap;
-(void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)isSubitemAtIndexSaveable:(unsigned long long)arg1 ;
-(id)_makeCell:(unsigned long long)arg1 ;
-(BOOL)_showConferenceLocationCell;
-(void)_clearButtonTapped;
-(void)_refreshConferenceRoomCell;
-(id)_clearButtonView;
-(void)_setNewStructuredLocation:(id)arg1 ;
-(void)_updateLocationWithStructuredLocation:(id)arg1 ;
-(void)_updateLocationWithConferenceRoom:(id)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)isInline;
-(BOOL)usesDetailViewControllerForSubitem:(unsigned long long)arg1 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(BOOL)forceRefreshStartAndEndDatesOnSave;
-(BOOL)isSaveable;
@end
