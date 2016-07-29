/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WebResourcePrivate, NSData, NSURL, NSString;

@interface WebResource : NSObject <NSCoding, NSCopying> {

	WebResourcePrivate* _private;

}

@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSString * MIMEType; 
@property (nonatomic,copy,readonly) NSString * textEncodingName; 
@property (nonatomic,copy,readonly) NSString * frameName; 
+(id)bundleForClass;
-(id)_initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 response:(id)arg6 copyData:(BOOL)arg7 ;
-(void)_ignoreWhenUnarchiving;
-(id)_initWithData:(id)arg1 URL:(id)arg2 response:(id)arg3 ;
-(id)_suggestedFilename;
-(id)_response;
-(id)_stringValue;
-(ArchiveResource*)_coreResource;
-(id)_initWithCoreResource:(PassRefPtr<WebCore::ArchiveResource>*)arg1 ;
-(NSString *)frameName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(NSURL *)URL;
-(NSString *)MIMEType;
-(id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 ;
-(NSString *)textEncodingName;
@end
