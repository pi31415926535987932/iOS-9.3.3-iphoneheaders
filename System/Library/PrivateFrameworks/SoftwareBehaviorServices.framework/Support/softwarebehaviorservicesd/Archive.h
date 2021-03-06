/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/Support/softwarebehaviorservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <softwarebehaviorservicesd/softwarebehaviorservicesd-Structs.h>
@class NSMutableData, NSMutableArray, NSString, NSData, NSArray;

@interface Archive : NSObject {

	unsigned long long maxUncompressedSize;
	unsigned long long uncompressedSize;
	int archiveType;
	NSMutableData* archiveData;
	archiveRef archive;
	NSMutableArray* files;
	NSString* identifier;
	float compressionPercent;

}

@property (nonatomic,readonly) unsigned long long maxUncompressedSize; 
@property (nonatomic,readonly) unsigned long long uncompressedSize; 
@property (nonatomic,readonly) NSData * archiveData; 
@property (nonatomic,readonly) NSArray * files; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) float compressionPercent; 
-(id)initWithMaxUncompressedSize:(unsigned long long)arg1 archiveType:(int)arg2 zipFileName:(const char*)arg3 ;
-(unsigned long long)sizeOnDiskForPath:(id)arg1 ;
-(BOOL)addFile:(id)arg1 asFile:(id)arg2 ;
-(id)initWithArchiveType:(int)arg1 zipFileName:(const char*)arg2 ;
-(id)initWithMaxUncompressedSize:(unsigned long long)arg1 zipFileName:(const char*)arg2 ;
-(BOOL)addFileURL:(id)arg1 ;
-(unsigned long long)maxUncompressedSize;
-(BOOL)addFile:(id)arg1 ;
-(unsigned long long)uncompressedSize;
-(NSArray *)files;
-(void)dealloc;
-(NSString *)identifier;
-(BOOL)close;
-(NSData *)archiveData;
-(float)compressionPercent;
-(BOOL)writeToFile:(id)arg1 ;
@end

