/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/Frameworks/EscrowService.framework/XPCServices/com.apple.lakitu.xpc/com.apple.lakitu
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.lakitu/EscrowGenericResponse.h>

@class NSData, NSString;

@interface EscrowSRPResponse : EscrowGenericResponse

@property (nonatomic,readonly) NSData * srpData; 
@property (nonatomic,readonly) NSString * bypassToken; 
-(NSString *)bypassToken;
-(NSData *)srpData;
@end

