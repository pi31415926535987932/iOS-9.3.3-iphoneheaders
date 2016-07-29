/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/_LSAppLinkPlugIn.h>

@class NSString;

@interface _LSSharedWebCredentialsAppLinkPlugIn : _LSAppLinkPlugIn {

	BOOL _usesDetailsDictionary;
	BOOL _requiresApproval;
	NSString* _SWCServiceName;

}

@property (setter=WCServiceName,copy) NSString * SWCServiceName;              //@synthesize SWCServiceName=_SWCServiceName - In the implementation block
@property (assign) BOOL usesDetailsDictionary;                                //@synthesize usesDetailsDictionary=_usesDetailsDictionary - In the implementation block
@property (assign) BOOL requiresApproval;                                     //@synthesize requiresApproval=_requiresApproval - In the implementation block
-(id)callingBundleIdentifier;
-(BOOL)requiresApproval;
-(BOOL)appHasApproval:(id)arg1 ;
-(BOOL)usesDetailsDictionary;
-(NSString *)SWCServiceName;
-(BOOL)getApplicationProxy:(id*)arg1 forSWCResults:(id)arg2 ;
-(void)setSWCServiceName:(NSString *)arg1 ;
-(void)setUsesDetailsDictionary:(BOOL)arg1 ;
-(void)setRequiresApproval:(BOOL)arg1 ;
-(void)getAppLinkWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
@end
