/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class NSURL, NSString, NSNumber;

@interface EKAttachment : EKObject

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) BOOL isBinary; 
@property (nonatomic,readonly) NSString * fileName; 
@property (nonatomic,readonly) NSString * fileFormat; 
@property (nonatomic,readonly) NSNumber * fileSize; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSURL * localURL; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)UUID;
-(NSURL *)URL;
-(NSURL *)localURL;
-(NSNumber *)fileSize;
-(long long)compareFileNames:(id)arg1 ;
-(NSString *)fileFormat;
-(NSString *)fileName;
-(BOOL)isBinary;
@end

