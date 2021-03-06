/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, NSString;

@interface SASTSpecificAnswerItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIDecoratedText * decoratedFooter; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedValue; 
@property (nonatomic,copy) NSString * footer; 
@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)specificAnswerItem;
+(id)specificAnswerItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(SAUIDecoratedText *)decoratedValue;
-(void)setDecoratedValue:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)decoratedFooter;
-(void)setDecoratedFooter:(SAUIDecoratedText *)arg1 ;
-(id)encodedClassName;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
@end

