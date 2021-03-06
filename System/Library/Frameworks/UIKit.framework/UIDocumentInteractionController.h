/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol UIDocumentInteractionControllerDelegate;
@class NSArray, NSString, UIViewController, QLPreviewController, UIView, UIBarButtonItem, UIPopoverController, UIActivityViewController, NSURL, LSApplicationProxy;

@interface UIDocumentInteractionController : NSObject <QLPreviewControllerDelegate, UIActionSheetDelegate> {

	id<UIDocumentInteractionControllerDelegate> _delegate;
	id _previewItemProxy;
	NSArray* _icons;
	id _annotation;
	NSString* _uniqueIdentifier;
	UIViewController* _presentingViewController;
	QLPreviewController* _previewController;
	NSArray* _gestureRecognizers;
	CGRect _presentRect;
	UIView* _presentView;
	UIBarButtonItem* _presentItem;
	NSArray* _availableApplications;
	UIPopoverController* _popoverController;
	UIActivityViewController* _activityViewController;
	BOOL _shouldUnzipDocument;
	BOOL _sourceIsManaged;
	NSURL* _unzippedDocumentURL;
	LSApplicationProxy* _applicationToOpen;
	NSURL* _tmpURLToDeleteOnDealloc;
	struct {
		unsigned delegateViewControllerForPreview : 1;
		unsigned delegateRectForPreview : 1;
		unsigned delegateViewForPreview : 1;
		unsigned transitionImageForPreview : 1;
		unsigned documentProxyForPreview : 1;
		unsigned delegateWillBeginPreview : 1;
		unsigned delegateDidEndPreviewPreview : 1;
		unsigned delegateWillEndPreviewPreview : 1;
		unsigned delegateWillPresentOptionsMenu : 1;
		unsigned delegateDidDismissOptionsMenu : 1;
		unsigned delegateWillPresentOpenInMenu : 1;
		unsigned delegateDidDismissOpenInMenu : 1;
		unsigned delegateWillBeginSendingToApplication : 1;
		unsigned delegateDidEndSendingToApplication : 1;
		unsigned delegateCanPerformAction : 1;
		unsigned delegatePerformAction : 1;
		unsigned delegateUnzipURL : 1;
		unsigned showingOptionsMenu : 1;
		unsigned showingOpenInMenu : 1;
		unsigned delegateExcludesActivities : 1;
		unsigned delegateCanBlockRemoteImages : 1;
		unsigned delegateAddsActivities : 1;
		unsigned delegateProvidesActivityItem : 1;
		unsigned delegateProvidesPrintInfo : 1;
		unsigned performingActivity : 1;
	}  _documentInteractionControllerFlags;
	BOOL previewsPresentWithMarkup;
	BOOL _disableFilteringDotFilesInArchives;
	/*^block*/id _completionWithItemsHandler;

}

@property (getter=isArchive,nonatomic,readonly) BOOL archive; 
@property (nonatomic,retain) NSString * uniqueIdentifier; 
@property (assign,nonatomic) BOOL shouldUnzipDocument; 
@property (assign,nonatomic) BOOL sourceIsManaged; 
@property (assign,setter=_setDisableFilteringDotFilesInArchives:,getter=_disableFilteringDotFilesInArchives,nonatomic) BOOL disableFilteringDotFilesInArchives; 
@property (assign,nonatomic) BOOL previewsPresentWithMarkup; 
@property (setter=_setCompletionWithItemsHandler:,getter=_completionWithItemsHandler,nonatomic,copy) id _completionWithItemsHandler; 
@property (assign,nonatomic,__weak) id<UIDocumentInteractionControllerDelegate> delegate;                                                                                    //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSURL * URL; 
@property (nonatomic,copy) NSString * UTI; 
@property (copy) NSString * name; 
@property (nonatomic,readonly) NSArray * icons; 
@property (nonatomic,retain) id annotation;                                                                                                                                  //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,readonly) NSArray * gestureRecognizers; 
@property (nonatomic,retain) NSString * uniqueIdentifier;                                                                                                                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldUnzipDocument;                                                                                                                       //@synthesize shouldUnzipDocument=_shouldUnzipDocument - In the implementation block
@property (assign,nonatomic) BOOL sourceIsManaged;                                                                                                                           //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (nonatomic,retain) UIActivityViewController * activityViewController;                                                                                              //@synthesize activityViewController=_activityViewController - In the implementation block
@property (assign,setter=_setPerformingActivity:,getter=_performingActivity,nonatomic) BOOL performingActivity; 
@property (nonatomic,readonly) id previewController; 
@property (nonatomic,retain) UIPopoverController * popoverController;                                                                                                        //@synthesize popoverController=_popoverController - In the implementation block
@property (nonatomic,readonly) _UIPreviewItemProxy*<QLPreviewItem> previewItemProxy; 
@property (assign,setter=_setDisableFilteringDotFilesInArchives:,getter=_disableFilteringDotFilesInArchives,nonatomic) BOOL disableFilteringDotFilesInArchives;              //@synthesize disableFilteringDotFilesInArchives=_disableFilteringDotFilesInArchives - In the implementation block
@property (setter=_setCompletionWithItemsHandler:,getter=_completionWithItemsHandler,nonatomic,copy) id _completionWithItemsHandler;                                         //@synthesize completionWithItemsHandler=_completionWithItemsHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_applicationsForDocumentProxy:(id)arg1 ;
+(id)allActionSelectorNames;
+(void)initialize;
+(id)interactionControllerWithURL:(id)arg1 ;
+(id)_UTIForFileURL:(id)arg1 ;
+(id)_unzippingQueue;
+(id)_pathFilterPredicate:(BOOL)arg1 ;
-(BOOL)isArchive;
-(id)subitemsInArchive:(/*^block*/id)arg1 ;
-(id)extractSubitemFromArchive:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_documentProxySourceIsManaged:(BOOL)arg1 ;
-(BOOL)_delegateExistsAndImplementsRequiredMethods:(id*)arg1 ;
-(void)setPreviewURLOverride:(id)arg1 ;
-(unsigned long long)applicationCount;
-(void)openDocumentWithDefaultApplication;
-(BOOL)defaultApplicationSupportsOpenInPlace;
-(id)_defaultApplication;
-(void)_dismissEverythingWithExtremePrejudiceAnimated:(BOOL)arg1 ;
-(void)popoverController:(id)arg1 animationCompleted:(long long)arg2 ;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(void)previewControllerWillDismiss:(id)arg1 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(void)markupAction:(id)arg1 ;
-(void)setDelegate:(id<UIDocumentInteractionControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<UIDocumentInteractionControllerDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSArray *)gestureRecognizers;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(BOOL)sourceIsManaged;
-(void)_finishedCopyingResource;
-(void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2 ;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSArray *)icons;
-(void)setPopoverController:(UIPopoverController *)arg1 ;
-(void)_invalidate;
-(void)_setCompletionWithItemsHandler:(/*^block*/id)arg1 ;
-(BOOL)presentPreviewAnimated:(BOOL)arg1 ;
-(BOOL)presentOptionsMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_openDocumentInPlaceWithApplication:(id)arg1 ;
-(void)_openDocumentWithApplication:(id)arg1 ;
-(BOOL)_delegatePerformAction:(SEL)arg1 ;
-(void)_activityControllerViewDidDismiss;
-(BOOL)_performingActivity;
-(void)_setPerformingActivity:(BOOL)arg1 ;
-(id)_completionWithItemsHandler;
-(id)_applications:(BOOL)arg1 ;
-(void)_setApplicationToOpen:(id)arg1 ;
-(void)_openDocumentWithCurrentApplication;
-(UIPopoverController *)popoverController;
-(_UIPreviewItemProxy*<QLPreviewItem>)previewItemProxy;
-(UIActivityViewController *)activityViewController;
-(BOOL)_canUnzipDocument;
-(NSString *)UTI;
-(void)setShouldUnzipDocument:(BOOL)arg1 ;
-(void)_interfaceOrientationWillChange:(id)arg1 ;
-(BOOL)_isFilenameValidForUnzipping:(id)arg1 allowsArchiveZip:(BOOL)arg2 ;
-(BOOL)_isVideo;
-(BOOL)_isImage;
-(BOOL)_canPreviewUnzippedDocument;
-(BOOL)_canUnzipDocumentAndPresentOptions;
-(BOOL)_setupForOptionsMenu;
-(void)_unzipFileAndSetupPayload:(/*^block*/id)arg1 ;
-(BOOL)previewsPresentWithMarkup;
-(id)previewController;
-(BOOL)_canUnzipDocumentForPreview;
-(BOOL)_documentNeedsHelpUnzippingForPreview;
-(BOOL)_setupPreviewController;
-(BOOL)_canUnzipDocumentAndPresentOpenIn;
-(BOOL)_setupForOpenInMenu;
-(void)_presentPreview:(id)arg1 ;
-(void)_presentOptionsMenu:(id)arg1 ;
-(BOOL)presentOptionsMenuFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)presentOpenInMenuFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(void)_callBeginSelector:(id)arg1 ;
-(id)annotation;
-(void)_openDocumentWithApplication:(id)arg1 userInfo:(id)arg2 ;
-(void)_callFinishSelectorForOpenInPlace:(id)arg1 ;
-(id)_applicationToOpen;
-(void)_fixupFileExtensionIfNeeded;
-(BOOL)_delegateImplementsLegacyActions;
-(BOOL)_delegateCanPerformAction:(SEL)arg1 ;
-(BOOL)_isImageOrVideo;
-(void)setActivityViewController:(UIActivityViewController *)arg1 ;
-(BOOL)_isValidURL:(id)arg1 ;
-(id)_unzipFileAndSetupPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissMenuAnimated:(BOOL)arg1 ;
-(void)setUTI:(NSString *)arg1 ;
-(BOOL)shouldUnzipDocument;
-(id)presentingNavigationController;
-(BOOL)presentOpenInMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissPreviewAnimated:(BOOL)arg1 ;
-(void)_presentOpenIn:(id)arg1 ;
-(id)_pathsInArchive:(/*^block*/id)arg1 ;
-(void)_setUnzippedDocumentURL:(id)arg1 ;
-(id)_unzippedDocumentURL;
-(BOOL)_isPackageArchive:(id)arg1 ;
-(BOOL)_canSaveToCameraRollForType;
-(void)setAnnotation:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)setPreviewsPresentWithMarkup:(BOOL)arg1 ;
-(BOOL)_disableFilteringDotFilesInArchives;
-(void)_setDisableFilteringDotFilesInArchives:(BOOL)arg1 ;
@end

