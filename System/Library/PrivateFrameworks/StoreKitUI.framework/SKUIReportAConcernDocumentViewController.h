/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIReportAConcernTemplateViewDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class NSArray, SKUIViewElementLayoutContext, SKUIReportAConcernTemplateView, SKUIReportAConcernTemplateViewElement, NSString;

@interface SKUIReportAConcernDocumentViewController : SKUIViewController <SKUIReportAConcernTemplateViewDelegate, SKUIDocumentViewController> {

	NSArray* _concernIdentifiers;
	NSArray* _concernStrings;
	BOOL _didSelectConcern;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUIReportAConcernTemplateView* _reportAConcernView;
	SKUIReportAConcernTemplateViewElement* _templateElement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(id)_backgroundColor;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_layoutContext;
-(void)documentDidUpdate:(id)arg1 ;
-(id)initWithTemplateElement:(id)arg1 ;
-(void)_sendCancelEventAndDismiss;
-(void)_layoutNavigation;
-(void)_doneButtonAction;
-(void)_cancelButtonAction;
-(void)_loadConcernsForConcernType:(long long)arg1 withReportAConcernBagDictionary:(id)arg2 ;
-(void)_loadViewWithConcernStrings;
-(void)_sendDoneEventAndDismissWithSelectedIndex:(long long)arg1 andComment:(id)arg2 ;
-(void)_layoutReportAConcernView;
-(double)navigationBarHeightForReportAConcernTemplateView:(id)arg1 ;
-(void)reportAConcernTemplateViewDidSelectConcern:(id)arg1 ;
-(double)tabBarHeightForReportAConcernTemplateView:(id)arg1 ;
@end
