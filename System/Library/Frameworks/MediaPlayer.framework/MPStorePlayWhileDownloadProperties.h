/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSURL;

@interface MPStorePlayWhileDownloadProperties : NSObject {

	unsigned long long _downloadToken;
	NSString* _localFilePath;
	NSArray* _sinfs;
	NSURL* _sourceURL;

}

@property (assign,nonatomic) unsigned long long downloadToken;              //@synthesize downloadToken=_downloadToken - In the implementation block
@property (nonatomic,copy) NSString * localFilePath;                        //@synthesize localFilePath=_localFilePath - In the implementation block
@property (nonatomic,copy) NSArray * sinfs;                                 //@synthesize sinfs=_sinfs - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                               //@synthesize sourceURL=_sourceURL - In the implementation block
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(void)setDownloadToken:(unsigned long long)arg1 ;
-(NSString *)localFilePath;
-(void)setSinfs:(NSArray *)arg1 ;
-(void)setLocalFilePath:(NSString *)arg1 ;
-(NSArray *)sinfs;
-(unsigned long long)downloadToken;
@end
