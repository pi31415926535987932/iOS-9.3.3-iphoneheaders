/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSString, SAUIImageResource;

@interface SAVCSPlayTrailer : SAAceView

@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,copy) NSString * utsId; 
+(id)playTrailer;
+(id)playTrailerWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setContentType:(NSString *)arg1 ;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(SAUIImageResource *)image;
-(NSString *)contentType;
-(id)groupIdentifier;
-(NSString *)utsId;
-(void)setUtsId:(NSString *)arg1 ;
-(id)encodedClassName;
@end

