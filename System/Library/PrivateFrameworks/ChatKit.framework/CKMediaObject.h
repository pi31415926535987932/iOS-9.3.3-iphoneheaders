/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/QLPreviewItem.h>

@protocol CKFileTransfer;
@class NSURL, NSString, NSData, NSDictionary;

@interface CKMediaObject : NSObject <QLPreviewItem> {

	id<CKFileTransfer> _transfer;

}

@property (nonatomic,copy,readonly) NSURL * fileURL; 
@property (nonatomic,retain) id<CKFileTransfer> transfer;                           //@synthesize transfer=_transfer - In the implementation block
@property (nonatomic,copy,readonly) NSString * transferGUID; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * filename; 
@property (nonatomic,copy,readonly) NSDictionary * transcoderUserInfo; 
@property (nonatomic,copy,readonly) NSString * mimeType; 
@property (nonatomic,copy,readonly) NSString * UTIType; 
@property (nonatomic,readonly) int mediaType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
+(id)iconCache;
+(BOOL)shouldScaleUpPreview;
+(BOOL)isPreviewable;
+(BOOL)shouldShadePreview;
+(Class)__ck_attachmentItemClass;
+(id)UTITypes;
+(id)fallbackFilenamePrefix;
+(id)attachmentSummary:(unsigned long long)arg1 ;
-(id)title;
-(id)subtitle;
-(id)location;
-(id)icon;
-(id)fileManager;
-(void)export:(id)arg1 ;
-(id)previewForWidth:(double)arg1 orientation:(char)arg2 ;
-(Class)balloonViewClassForWidth:(double)arg1 orientation:(char)arg2 ;
-(BOOL)shouldShowViewer;
-(BOOL)canExport;
-(BOOL)shouldBeQuickLooked;
-(BOOL)shouldBeQuickLookedFromEntryView;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(BOOL)isPreviewable;
-(CGSize)bbSize;
-(id)generateThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(Class)coloredBalloonViewClass;
-(id)previewCacheKeyWithOrientation:(char)arg1 ;
-(id)previewDispatchCache;
-(id)previewCachesFileURLWithOrientation:(char)arg1 extension:(id)arg2 ;
-(id)savedPreviewFromURL:(id)arg1 forOrientation:(char)arg2 ;
-(id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(char)arg3 ;
-(void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(char)arg3 ;
-(Class)previewBalloonViewClass;
-(id)bbPreviewFillToSize:(CGSize)arg1 ;
-(void)cacheAndPersistPreview:(id)arg1 orientation:(char)arg2 ;
-(BOOL)shouldShowDisclosure;
-(id)fileSizeString;
-(id)downloadProgressImage;
-(id)downloadProgressString;
-(void)_sampleImageEdges:(id)arg1 usingRect:(CGRect)arg2 forMostlyWhitePixels:(unsigned long long*)arg3 otherPixels:(unsigned long long*)arg4 ;
-(id)JPEGDataFromImage:(id)arg1 ;
-(id)composeImagesForEntryContentViewWidth:(double)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSData *)data;
-(NSString *)mimeType;
-(NSURL *)previewItemURL;
-(NSURL *)fileURL;
-(int)mediaType;
-(NSString *)transferGUID;
-(NSString *)UTIType;
-(id)pasteboardItem;
-(id<CKFileTransfer>)transfer;
-(id)initWithTransfer:(id)arg1 ;
-(void)setTransfer:(id<CKFileTransfer>)arg1 ;
-(NSDictionary *)transcoderUserInfo;
-(BOOL)isPromisedItem;
-(NSString *)filename;
@end

