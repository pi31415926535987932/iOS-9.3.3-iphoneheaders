/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol MFGroupDetailViewControllerDelegate;
@class MFRecentComposeRecipientGroup;

@interface MFGroupDetailViewController : UITableViewController {

	id<MFGroupDetailViewControllerDelegate> _delegate;
	MFRecentComposeRecipientGroup* _group;

}

@property (assign,nonatomic) id<MFGroupDetailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MFRecentComposeRecipientGroup * group;                         //@synthesize group=_group - In the implementation block
-(void)setDelegate:(id<MFGroupDetailViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MFGroupDetailViewControllerDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setGroup:(MFRecentComposeRecipientGroup *)arg1 ;
-(MFRecentComposeRecipientGroup *)group;
-(void)_removeButtonTapped:(id)arg1 ;
@end

