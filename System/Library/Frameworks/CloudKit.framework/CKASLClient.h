/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CloudKit/CloudKit-Structs.h>
@class NSObject;

@interface CKASLClient : NSObject {

	asl_object_sRef _aslClient;
	long long _logLevel;
	NSObject*<OS_dispatch_queue> _logQueue;

}

@property (assign,nonatomic) asl_object_sRef aslClient;                          //@synthesize aslClient=_aslClient - In the implementation block
@property (assign,nonatomic) long long logLevel;                                 //@synthesize logLevel=_logLevel - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> logQueue;              //@synthesize logQueue=_logQueue - In the implementation block
+(id)ASLClient;
-(long long)logLevel;
-(void)setLogLevel:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)logQueue;
-(void)_setLogLevelFromDefaults;
-(asl_object_sRef)aslClient;
-(unsigned long long)logLevelForASL;
-(id)_nilTerminatedCopyOfData:(id)arg1 ;
-(void)_sendASLMessage:(asl_object_sRef)arg1 ;
-(void)_logTrafficData:(id)arg1 andBinaryData:(id)arg2 withContainerIdentifier:(id)arg3 sectionID:(id)arg4 ;
-(void)_slurpTrafficDataFromHumanReadableFile:(id)arg1 binaryFile:(id)arg2 prefixString:(id)arg3 suffixString:(id)arg4 containerIdentifier:(id)arg5 sectionID:(id)arg6 ;
-(void)_ensureLogDirectoryExists;
-(void)slurpAndRemoveLookasideHumanFile:(id)arg1 binaryFile:(id)arg2 prefixString:(id)arg3 suffixString:(id)arg4 containerIdentifier:(id)arg5 sectionID:(id)arg6 ;
-(void)setAslClient:(asl_object_sRef)arg1 ;
-(void)setLogQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

