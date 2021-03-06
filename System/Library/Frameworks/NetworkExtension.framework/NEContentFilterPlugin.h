/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, NSData;

@interface NEContentFilterPlugin : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	BOOL _filterBrowsers;
	BOOL _filterSockets;
	NSDictionary* _vendorConfiguration;
	NSString* _serverAddress;
	NSString* _username;
	NSString* _organization;
	NSData* _passwordReference;
	NSData* _identityReference;
	NSString* _pluginType;

}

@property (assign) BOOL filterBrowsers;                           //@synthesize filterBrowsers=_filterBrowsers - In the implementation block
@property (assign) BOOL filterSockets;                            //@synthesize filterSockets=_filterSockets - In the implementation block
@property (copy) NSDictionary * vendorConfiguration;              //@synthesize vendorConfiguration=_vendorConfiguration - In the implementation block
@property (copy) NSString * serverAddress;                        //@synthesize serverAddress=_serverAddress - In the implementation block
@property (copy) NSString * username;                             //@synthesize username=_username - In the implementation block
@property (copy) NSString * organization;                         //@synthesize organization=_organization - In the implementation block
@property (copy) NSData * passwordReference;                      //@synthesize passwordReference=_passwordReference - In the implementation block
@property (copy) NSData * identityReference;                      //@synthesize identityReference=_identityReference - In the implementation block
@property (retain) NSString * pluginType;                         //@synthesize pluginType=_pluginType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)organization;
-(void)setOrganization:(NSString *)arg1 ;
-(BOOL)filterBrowsers;
-(void)setFilterBrowsers:(BOOL)arg1 ;
-(BOOL)filterSockets;
-(void)setFilterSockets:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)serverAddress;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setPluginType:(NSString *)arg1 ;
-(id)initWithPluginType:(id)arg1 ;
-(NSString *)pluginType;
-(NSData *)passwordReference;
-(void)setServerAddress:(NSString *)arg1 ;
-(void)setPasswordReference:(NSData *)arg1 ;
-(NSData *)identityReference;
-(void)setIdentityReference:(NSData *)arg1 ;
-(NSDictionary *)vendorConfiguration;
-(void)setVendorConfiguration:(NSDictionary *)arg1 ;
@end

