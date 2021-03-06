/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray, MPUContentItemIdentifierCollection, NSString, MPStoreArtworkRequestToken, NSDate;

@interface MPStoreItemMetadata : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _downloadAssetDictionary;
	NSDictionary* _downloadMetadataDictionary;
	BOOL _hasOverrideChildStorePlatformDictionaries;
	NSArray* _overrideChildStorePlatformDictionaries;
	MPStoreItemMetadata* _parentStoreItemMetadata;
	NSDictionary* _storePlatformDictionary;

}

@property (nonatomic,copy,readonly) MPUContentItemIdentifierCollection * contentItemIdentifierCollection; 
@property (nonatomic,copy,readonly) NSString * artistName; 
@property (nonatomic,readonly) MPStoreArtworkRequestToken * artworkRequestToken; 
@property (nonatomic,copy,readonly) id artistStoreID; 
@property (nonatomic,copy,readonly) NSArray * artworkTrackIDs; 
@property (nonatomic,copy,readonly) NSArray * childrenStoreIDs; 
@property (nonatomic,copy,readonly) NSString * collectionName; 
@property (nonatomic,copy,readonly) id collectionStoreID; 
@property (getter=isCompilation,nonatomic,readonly) BOOL compilation; 
@property (nonatomic,copy,readonly) NSString * composerName; 
@property (nonatomic,copy,readonly) NSString * copyrightText; 
@property (nonatomic,copy,readonly) NSString * curatorName; 
@property (nonatomic,copy,readonly) NSString * descriptionText; 
@property (nonatomic,readonly) unsigned long long discCount; 
@property (nonatomic,readonly) unsigned long long discNumber; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,copy,readonly) NSString * editorNotes; 
@property (nonatomic,copy,readonly) NSDictionary * effectiveStorePlatformDictionary; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (nonatomic,readonly) BOOL hasArtistBiography; 
@property (nonatomic,readonly) BOOL hasSocialPosts; 
@property (nonatomic,copy,readonly) NSArray * genreNames; 
@property (nonatomic,readonly) BOOL isPreorder; 
@property (nonatomic,copy,readonly) NSString * itemKind; 
@property (nonatomic,readonly) MPStoreArtworkRequestToken * latestAlbumArtworkRequestToken; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSArray * offers; 
@property (nonatomic,copy,readonly) NSArray * playlistIdentifiers; 
@property (nonatomic,readonly) double popularity; 
@property (nonatomic,copy,readonly) NSDate * releaseDate; 
@property (nonatomic,readonly) NSString * shortName; 
@property (nonatomic,readonly) BOOL showComposer; 
@property (nonatomic,copy,readonly) id storeID; 
@property (nonatomic,readonly) unsigned long long trackCount; 
@property (nonatomic,readonly) unsigned long long trackNumber; 
@property (nonatomic,copy,readonly) NSString * workName; 
+(BOOL)supportsSecureCoding;
-(MPUContentItemIdentifierCollection *)contentItemIdentifierCollection;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)duration;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)descriptionText;
-(id)descriptionTextWithStyle:(id)arg1 ;
-(id)editorNotesWithStyle:(id)arg1 ;
-(BOOL)hasArtistBiography;
-(BOOL)isMasteredForITunes;
-(id)_storePlatformDateFormatter;
-(id)_artworkRequestTokenForStorePlatformDictionary:(id)arg1 artworkKey:(id)arg2 ;
-(NSString *)itemKind;
-(NSString *)artistName;
-(NSString *)collectionName;
-(NSArray *)offers;
-(id)storeID;
-(id)initWithStorePlatformDictionary:(id)arg1 ;
-(id)metadataByAppendingMetadata:(id)arg1 ;
-(NSArray *)childrenStoreIDs;
-(id)childStorePlatformDictionaryForStoreID:(id)arg1 ;
-(id)initWithStorePlatformDictionary:(id)arg1 parentStoreItemMetadata:(id)arg2 ;
-(MPStoreArtworkRequestToken *)artworkRequestToken;
-(unsigned long long)trackNumber;
-(unsigned long long)discNumber;
-(BOOL)isExplicitContent;
-(id)collectionStoreID;
-(id)artistStoreID;
-(NSString *)composerName;
-(NSArray *)genreNames;
-(unsigned long long)trackCount;
-(NSString *)copyrightText;
-(BOOL)showComposer;
-(id)metadataWithChildStorePlatformDictionaries:(id)arg1 ;
-(NSDate *)releaseDate;
-(unsigned long long)discCount;
-(BOOL)isCompilation;
-(double)popularity;
-(NSString *)workName;
-(NSArray *)playlistIdentifiers;
-(id)artworkRequestTokenForEditorialArtworkKind:(id)arg1 ;
-(NSDictionary *)effectiveStorePlatformDictionary;
-(MPStoreArtworkRequestToken *)latestAlbumArtworkRequestToken;
-(NSArray *)artworkTrackIDs;
-(id)childStorePlatformDictionaryForArtworkTrackID:(id)arg1 ;
-(id)artworkRequestTokenForStorePlatformDictionary:(id)arg1 ;
-(NSString *)editorNotes;
-(NSString *)curatorName;
-(NSString *)shortName;
-(BOOL)hasSocialPosts;
-(BOOL)isPreorder;
-(id)initWithDownloadAssetDictionary:(id)arg1 ;
-(id)metadataWithParentMetadata:(id)arg1 ;
@end

