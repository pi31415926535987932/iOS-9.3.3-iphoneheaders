/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNContainer.h>

@class NSString, CNContainer;

@interface CNMutableContainer : CNContainer

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) CNContainer * snapshot; 
@property (assign,nonatomic) int iOSLegacyIdentifier; 
@property (assign,nonatomic) long long type; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
-(id)copy;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setSnapshot:(CNContainer *)arg1 ;
-(void)setIOSLegacyIdentifier:(int)arg1 ;
-(id)freezeWithSelfAsSnapshot;
-(id)freeze;
@end

