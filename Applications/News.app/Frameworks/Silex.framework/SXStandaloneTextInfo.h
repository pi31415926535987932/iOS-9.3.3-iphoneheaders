/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSDContainerInfo.h>

@protocol TSDOwningAttachment, TSDContainerInfo;
@class TSDInfoGeometry, TSPObject, NSObject, SXStandaloneTextStorage, NSString;

@interface SXStandaloneTextInfo : NSObject <TSDContainerInfo> {

	BOOL floatingAboveText;
	BOOL anchoredToText;
	BOOL inlineWithText;
	BOOL attachedToBodyText;
	TSDInfoGeometry* geometry;
	TSPObject*<TSDOwningAttachment> owningAttachment;
	NSObject*<TSDContainerInfo> parentInfo;
	SXStandaloneTextStorage* _storage;

}

@property (nonatomic,readonly) SXStandaloneTextStorage * storage;                                      //@synthesize storage=_storage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
-(BOOL)anchoredToText;
-(BOOL)attachedToBodyText;
-(BOOL)floatingAboveText;
-(BOOL)inlineWithText;
-(id)copyWithContext:(id)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1 ;
-(Class)repClass;
-(BOOL)isThemeContent;
-(NSObject*<TSDContainerInfo>)parentInfo;
-(void)setParentInfo:(NSObject*<TSDContainerInfo>)arg1 ;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(void)setOwningAttachment:(TSPObject*<TSDOwningAttachment>)arg1 ;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(BOOL)isFloatingAboveText;
-(BOOL)isAnchoredToText;
-(BOOL)isInlineWithText;
-(BOOL)isAttachedToBodyText;
-(id)childInfos;
-(SXStandaloneTextStorage *)storage;
-(void)dealloc;
-(TSDInfoGeometry *)geometry;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(Class)layoutClass;
@end

