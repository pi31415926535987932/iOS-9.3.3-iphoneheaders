/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSURL, NSMutableData, NSString, NSData, NSURLConnection, GEOSimpleTileRequester;

@interface _GEOTileDownloadOp : NSObject <NSURLConnectionDelegate> {

	NSURL* _url;
	BOOL _requireWiFi;
	NSMutableData* _data;
	NSString* _cachedEtag;
	NSData* _cachedData;
	NSURLConnection* _conn;
	NSString* _responseEtag;
	unsigned _priority;
	GEOTileKey _key;
	BOOL _finished;
	NSString* _editionHeader;
	unsigned _tileEdition;
	NSString* _userAgent;
	NSData* _auditToken;
	BOOL _useCookies;
	_GEOTileDownloadOp* _baseTile;
	_GEOTileDownloadOp* _localizationTile;
	unsigned long long _contentLength;
	GEOSimpleTileRequester* _delegate;
	BOOL _gotData;
	int _attempts;
	double _startTime;
	double _timeout;
	int _checksumMethod;
	long long _eTagType;

}

@property (assign,nonatomic) long long eTagType;                                 //@synthesize eTagType=_eTagType - In the implementation block
@property (nonatomic,retain) NSURL * url;                                        //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * cachedEtag;                              //@synthesize cachedEtag=_cachedEtag - In the implementation block
@property (nonatomic,retain) NSData * cachedData;                                //@synthesize cachedData=_cachedData - In the implementation block
@property (assign,nonatomic) unsigned priority;                                  //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) BOOL requireWiFi;                                   //@synthesize requireWiFi=_requireWiFi - In the implementation block
@property (nonatomic,retain) NSMutableData * data;                               //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * responseEtag;                            //@synthesize responseEtag=_responseEtag - In the implementation block
@property (nonatomic,retain) NSURLConnection * conn;                             //@synthesize conn=_conn - In the implementation block
@property (nonatomic,retain) NSString * editionHeader;                           //@synthesize editionHeader=_editionHeader - In the implementation block
@property (nonatomic,retain) NSString * userAgent;                               //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,retain) NSData * auditToken;                                //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) BOOL useCookies;                                    //@synthesize useCookies=_useCookies - In the implementation block
@property (nonatomic,retain) _GEOTileDownloadOp * baseTile;                      //@synthesize baseTile=_baseTile - In the implementation block
@property (nonatomic,retain) _GEOTileDownloadOp * localizationTile;              //@synthesize localizationTile=_localizationTile - In the implementation block
@property (assign) GEOTileKey key;                                               //@synthesize key=_key - In the implementation block
@property (assign) unsigned tileEdition;                                         //@synthesize tileEdition=_tileEdition - In the implementation block
@property (nonatomic,readonly) unsigned long long contentLength;                 //@synthesize contentLength=_contentLength - In the implementation block
@property (nonatomic,readonly) BOOL finished;                                    //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) double timeout;                                     //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) GEOSimpleTileRequester * delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double startTime;                                 //@synthesize startTime=_startTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)setDelegate:(GEOSimpleTileRequester *)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(GEOSimpleTileRequester *)delegate;
-(GEOTileKey)key;
-(NSURL *)url;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(unsigned)priority;
-(void)setPriority:(unsigned)arg1 ;
-(void)start;
-(void)setUrl:(NSURL *)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setKey:(GEOTileKey)arg1 ;
-(double)startTime;
-(NSData *)auditToken;
-(_GEOTileDownloadOp *)localizationTile;
-(NSString *)cachedEtag;
-(void)setEditionHeader:(NSString *)arg1 ;
-(_GEOTileDownloadOp *)baseTile;
-(double)elapsed;
-(NSString *)editionHeader;
-(void)setETagType:(long long)arg1 ;
-(NSData *)cachedData;
-(void)setCachedEtag:(NSString *)arg1 ;
-(NSString *)responseEtag;
-(void)setBaseTile:(_GEOTileDownloadOp *)arg1 ;
-(void)setCachedData:(NSData *)arg1 ;
-(BOOL)useCookies;
-(void)setResponseEtag:(NSString *)arg1 ;
-(unsigned long long)contentLength;
-(unsigned)tileEdition;
-(void)setLocalizationTile:(_GEOTileDownloadOp *)arg1 ;
-(void)setAuditToken:(NSData *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)setTileEdition:(unsigned)arg1 ;
-(void)setRequireWiFi:(BOOL)arg1 ;
-(BOOL)requireWiFi;
-(NSURLConnection *)conn;
-(void)setConn:(NSURLConnection *)arg1 ;
-(void)setUseCookies:(BOOL)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(long long)eTagType;
-(double)timeout;
-(BOOL)finished;
@end

