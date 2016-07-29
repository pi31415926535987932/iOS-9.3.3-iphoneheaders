/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBReadingListAddRemove : PBCodable <NSCopying> {

	long long _personalizationTreatmentId;
	int _addRemoveReadingListLocation;
	NSString* _articleId;
	int _articleType;
	int _backendArticleVersion;
	int _characterCount;
	int _feedType;
	NSString* _language;
	NSMutableArray* _namedEntities;
	int _publisherArticleVersion;
	NSString* _referencedArticleId;
	NSString* _sectionHeadlineId;
	NSString* _sourceChannelId;
	NSString* _surfacedByChannelId;
	NSString* _surfacedBySectionId;
	NSString* _surfacedByTopicId;
	int _userAction;
	BOOL _isDigitalReplicaAd;
	BOOL _isUserSubscribedToFeed;
	SCD_Struct_NT13 _has;

}

@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                              //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;                    //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (assign,nonatomic) BOOL hasAddRemoveReadingListLocation; 
@property (assign,nonatomic) int addRemoveReadingListLocation;                  //@synthesize addRemoveReadingListLocation=_addRemoveReadingListLocation - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserSubscribedToFeed; 
@property (assign,nonatomic) BOOL isUserSubscribedToFeed;                       //@synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed - In the implementation block
@property (assign,nonatomic) BOOL hasArticleType; 
@property (assign,nonatomic) int articleType;                                   //@synthesize articleType=_articleType - In the implementation block
@property (assign,nonatomic) BOOL hasCharacterCount; 
@property (assign,nonatomic) int characterCount;                                //@synthesize characterCount=_characterCount - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                               //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSMutableArray * namedEntities;                    //@synthesize namedEntities=_namedEntities - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersion; 
@property (assign,nonatomic) int publisherArticleVersion;                       //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersion; 
@property (assign,nonatomic) int backendArticleVersion;                         //@synthesize backendArticleVersion=_backendArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionHeadlineId; 
@property (nonatomic,retain) NSString * sectionHeadlineId;                      //@synthesize sectionHeadlineId=_sectionHeadlineId - In the implementation block
@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                    //@synthesize userAction=_userAction - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByChannelId; 
@property (nonatomic,retain) NSString * surfacedByChannelId;                    //@synthesize surfacedByChannelId=_surfacedByChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedBySectionId; 
@property (nonatomic,retain) NSString * surfacedBySectionId;                    //@synthesize surfacedBySectionId=_surfacedBySectionId - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByTopicId; 
@property (nonatomic,retain) NSString * surfacedByTopicId;                      //@synthesize surfacedByTopicId=_surfacedByTopicId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                        //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasIsDigitalReplicaAd; 
@property (assign,nonatomic) BOOL isDigitalReplicaAd;                           //@synthesize isDigitalReplicaAd=_isDigitalReplicaAd - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                      //@synthesize feedType=_feedType - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalizationTreatmentId; 
@property (assign,nonatomic) long long personalizationTreatmentId;              //@synthesize personalizationTreatmentId=_personalizationTreatmentId - In the implementation block
-(void)setArticleId:(NSString *)arg1 ;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(int)userAction;
-(void)setUserAction:(int)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(BOOL)hasUserAction;
-(BOOL)hasArticleId;
-(BOOL)hasReferencedArticleId;
-(BOOL)hasSourceChannelId;
-(int)feedType;
-(void)setFeedType:(int)arg1 ;
-(void)setHasFeedType:(BOOL)arg1 ;
-(BOOL)hasFeedType;
-(void)setIsUserSubscribedToFeed:(BOOL)arg1 ;
-(void)setHasIsUserSubscribedToFeed:(BOOL)arg1 ;
-(BOOL)hasIsUserSubscribedToFeed;
-(NSString *)articleId;
-(NSString *)referencedArticleId;
-(NSString *)sourceChannelId;
-(BOOL)isUserSubscribedToFeed;
-(void)addNamedEntities:(id)arg1 ;
-(void)setSurfacedByChannelId:(NSString *)arg1 ;
-(void)setSurfacedBySectionId:(NSString *)arg1 ;
-(void)setSurfacedByTopicId:(NSString *)arg1 ;
-(void)setSectionHeadlineId:(NSString *)arg1 ;
-(int)articleType;
-(void)setArticleType:(int)arg1 ;
-(void)setHasArticleType:(BOOL)arg1 ;
-(BOOL)hasArticleType;
-(void)clearNamedEntities;
-(unsigned long long)namedEntitiesCount;
-(id)namedEntitiesAtIndex:(unsigned long long)arg1 ;
-(void)setPublisherArticleVersion:(int)arg1 ;
-(void)setHasPublisherArticleVersion:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersion;
-(void)setBackendArticleVersion:(int)arg1 ;
-(void)setHasBackendArticleVersion:(BOOL)arg1 ;
-(BOOL)hasBackendArticleVersion;
-(BOOL)hasSurfacedByChannelId;
-(BOOL)hasSurfacedBySectionId;
-(BOOL)hasSurfacedByTopicId;
-(BOOL)hasSectionHeadlineId;
-(void)setIsDigitalReplicaAd:(BOOL)arg1 ;
-(void)setHasIsDigitalReplicaAd:(BOOL)arg1 ;
-(BOOL)hasIsDigitalReplicaAd;
-(void)setPersonalizationTreatmentId:(long long)arg1 ;
-(void)setHasPersonalizationTreatmentId:(BOOL)arg1 ;
-(BOOL)hasPersonalizationTreatmentId;
-(NSMutableArray *)namedEntities;
-(void)setNamedEntities:(NSMutableArray *)arg1 ;
-(int)publisherArticleVersion;
-(int)backendArticleVersion;
-(NSString *)surfacedByChannelId;
-(NSString *)surfacedBySectionId;
-(NSString *)surfacedByTopicId;
-(NSString *)sectionHeadlineId;
-(BOOL)isDigitalReplicaAd;
-(long long)personalizationTreatmentId;
-(void)setHasCharacterCount:(BOOL)arg1 ;
-(BOOL)hasCharacterCount;
-(int)addRemoveReadingListLocation;
-(void)setAddRemoveReadingListLocation:(int)arg1 ;
-(void)setHasAddRemoveReadingListLocation:(BOOL)arg1 ;
-(BOOL)hasAddRemoveReadingListLocation;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLanguage;
-(void)setCharacterCount:(int)arg1 ;
-(int)characterCount;
@end
