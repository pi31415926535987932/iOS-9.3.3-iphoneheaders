/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NTPBIAdConfig, NTPBPersonalizationConfig, NTPBPrefetchConfig;

@interface NTPBConfig : PBCodable <NSCopying> {

	long long _appConfigRefreshRate;
	long long _articleRapidUpdatesTimeout;
	long long _autoScrollToTopFeedTimeout;
	double _batchedFeedTimeout;
	long long _initialArticlesFromNewFavorite;
	double _interstitialAdLoadDelay;
	long long _longReminderTime;
	long long _minimumArticleUpdateInterval;
	long long _minimumDistanceBetweenImageOnTopTiles;
	long long _numberOfScreenfulsScrolledToBypassWidgetTimeLimit;
	double _prerollLoadingTimeout;
	long long _shortReminderTime;
	double _tileProminenceScoreBalanceValue;
	long long _timeBetweenSameWidgetReinsertion;
	long long _timeBetweenWidgetInsertions;
	long long _trendingTopicsRefreshRate;
	NSMutableArray* _endpointConfigs;
	NSString* _fallbackLanguageTag;
	NTPBIAdConfig* _iadConfig;
	NSMutableArray* _languageConfigs;
	NTPBPersonalizationConfig* _personalizationConfig;
	NTPBPrefetchConfig* _prefetchConfig;
	BOOL _newsletterSubscriptionChecked;
	SCD_Struct_NT15 _has;

}

@property (nonatomic,readonly) BOOL hasFallbackLanguageTag; 
@property (nonatomic,retain) NSString * fallbackLanguageTag;                                           //@synthesize fallbackLanguageTag=_fallbackLanguageTag - In the implementation block
@property (nonatomic,retain) NSMutableArray * languageConfigs;                                         //@synthesize languageConfigs=_languageConfigs - In the implementation block
@property (assign,nonatomic) BOOL hasShortReminderTime; 
@property (assign,nonatomic) long long shortReminderTime;                                              //@synthesize shortReminderTime=_shortReminderTime - In the implementation block
@property (assign,nonatomic) BOOL hasLongReminderTime; 
@property (assign,nonatomic) long long longReminderTime;                                               //@synthesize longReminderTime=_longReminderTime - In the implementation block
@property (assign,nonatomic) BOOL hasNewsletterSubscriptionChecked; 
@property (assign,nonatomic) BOOL newsletterSubscriptionChecked;                                       //@synthesize newsletterSubscriptionChecked=_newsletterSubscriptionChecked - In the implementation block
@property (assign,nonatomic) BOOL hasBatchedFeedTimeout; 
@property (assign,nonatomic) double batchedFeedTimeout;                                                //@synthesize batchedFeedTimeout=_batchedFeedTimeout - In the implementation block
@property (assign,nonatomic) BOOL hasInterstitialAdLoadDelay; 
@property (assign,nonatomic) double interstitialAdLoadDelay;                                           //@synthesize interstitialAdLoadDelay=_interstitialAdLoadDelay - In the implementation block
@property (assign,nonatomic) BOOL hasPrerollLoadingTimeout; 
@property (assign,nonatomic) double prerollLoadingTimeout;                                             //@synthesize prerollLoadingTimeout=_prerollLoadingTimeout - In the implementation block
@property (nonatomic,retain) NSMutableArray * endpointConfigs;                                         //@synthesize endpointConfigs=_endpointConfigs - In the implementation block
@property (nonatomic,readonly) BOOL hasPersonalizationConfig; 
@property (nonatomic,retain) NTPBPersonalizationConfig * personalizationConfig;                        //@synthesize personalizationConfig=_personalizationConfig - In the implementation block
@property (nonatomic,readonly) BOOL hasIadConfig; 
@property (nonatomic,retain) NTPBIAdConfig * iadConfig;                                                //@synthesize iadConfig=_iadConfig - In the implementation block
@property (nonatomic,readonly) BOOL hasPrefetchConfig; 
@property (nonatomic,retain) NTPBPrefetchConfig * prefetchConfig;                                      //@synthesize prefetchConfig=_prefetchConfig - In the implementation block
@property (assign,nonatomic) BOOL hasTileProminenceScoreBalanceValue; 
@property (assign,nonatomic) double tileProminenceScoreBalanceValue;                                   //@synthesize tileProminenceScoreBalanceValue=_tileProminenceScoreBalanceValue - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumArticleUpdateInterval; 
@property (assign,nonatomic) long long minimumArticleUpdateInterval;                                   //@synthesize minimumArticleUpdateInterval=_minimumArticleUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasInitialArticlesFromNewFavorite; 
@property (assign,nonatomic) long long initialArticlesFromNewFavorite;                                 //@synthesize initialArticlesFromNewFavorite=_initialArticlesFromNewFavorite - In the implementation block
@property (assign,nonatomic) BOOL hasAutoScrollToTopFeedTimeout; 
@property (assign,nonatomic) long long autoScrollToTopFeedTimeout;                                     //@synthesize autoScrollToTopFeedTimeout=_autoScrollToTopFeedTimeout - In the implementation block
@property (assign,nonatomic) BOOL hasTrendingTopicsRefreshRate; 
@property (assign,nonatomic) long long trendingTopicsRefreshRate;                                      //@synthesize trendingTopicsRefreshRate=_trendingTopicsRefreshRate - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfigRefreshRate; 
@property (assign,nonatomic) long long appConfigRefreshRate;                                           //@synthesize appConfigRefreshRate=_appConfigRefreshRate - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumDistanceBetweenImageOnTopTiles; 
@property (assign,nonatomic) long long minimumDistanceBetweenImageOnTopTiles;                          //@synthesize minimumDistanceBetweenImageOnTopTiles=_minimumDistanceBetweenImageOnTopTiles - In the implementation block
@property (assign,nonatomic) BOOL hasTimeBetweenWidgetInsertions; 
@property (assign,nonatomic) long long timeBetweenWidgetInsertions;                                    //@synthesize timeBetweenWidgetInsertions=_timeBetweenWidgetInsertions - In the implementation block
@property (assign,nonatomic) BOOL hasTimeBetweenSameWidgetReinsertion; 
@property (assign,nonatomic) long long timeBetweenSameWidgetReinsertion;                               //@synthesize timeBetweenSameWidgetReinsertion=_timeBetweenSameWidgetReinsertion - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfScreenfulsScrolledToBypassWidgetTimeLimit; 
@property (assign,nonatomic) long long numberOfScreenfulsScrolledToBypassWidgetTimeLimit;              //@synthesize numberOfScreenfulsScrolledToBypassWidgetTimeLimit=_numberOfScreenfulsScrolledToBypassWidgetTimeLimit - In the implementation block
@property (assign,nonatomic) BOOL hasArticleRapidUpdatesTimeout; 
@property (assign,nonatomic) long long articleRapidUpdatesTimeout;                                     //@synthesize articleRapidUpdatesTimeout=_articleRapidUpdatesTimeout - In the implementation block
-(void)addLanguageConfigs:(id)arg1 ;
-(void)setFallbackLanguageTag:(NSString *)arg1 ;
-(BOOL)hasFallbackLanguageTag;
-(void)clearLanguageConfigs;
-(unsigned long long)languageConfigsCount;
-(id)languageConfigsAtIndex:(unsigned long long)arg1 ;
-(NSString *)fallbackLanguageTag;
-(NSMutableArray *)languageConfigs;
-(void)setLanguageConfigs:(NSMutableArray *)arg1 ;
-(void)addEndpointConfigs:(id)arg1 ;
-(void)setPersonalizationConfig:(NTPBPersonalizationConfig *)arg1 ;
-(void)setIadConfig:(NTPBIAdConfig *)arg1 ;
-(void)setPrefetchConfig:(NTPBPrefetchConfig *)arg1 ;
-(void)setShortReminderTime:(long long)arg1 ;
-(void)setHasShortReminderTime:(BOOL)arg1 ;
-(BOOL)hasShortReminderTime;
-(void)setLongReminderTime:(long long)arg1 ;
-(void)setHasLongReminderTime:(BOOL)arg1 ;
-(BOOL)hasLongReminderTime;
-(void)setNewsletterSubscriptionChecked:(BOOL)arg1 ;
-(void)setHasNewsletterSubscriptionChecked:(BOOL)arg1 ;
-(BOOL)hasNewsletterSubscriptionChecked;
-(void)setBatchedFeedTimeout:(double)arg1 ;
-(void)setHasBatchedFeedTimeout:(BOOL)arg1 ;
-(BOOL)hasBatchedFeedTimeout;
-(void)setInterstitialAdLoadDelay:(double)arg1 ;
-(void)setHasInterstitialAdLoadDelay:(BOOL)arg1 ;
-(BOOL)hasInterstitialAdLoadDelay;
-(void)setPrerollLoadingTimeout:(double)arg1 ;
-(void)setHasPrerollLoadingTimeout:(BOOL)arg1 ;
-(BOOL)hasPrerollLoadingTimeout;
-(void)clearEndpointConfigs;
-(unsigned long long)endpointConfigsCount;
-(id)endpointConfigsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPersonalizationConfig;
-(BOOL)hasIadConfig;
-(BOOL)hasPrefetchConfig;
-(void)setTileProminenceScoreBalanceValue:(double)arg1 ;
-(void)setHasTileProminenceScoreBalanceValue:(BOOL)arg1 ;
-(BOOL)hasTileProminenceScoreBalanceValue;
-(void)setMinimumArticleUpdateInterval:(long long)arg1 ;
-(void)setHasMinimumArticleUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasMinimumArticleUpdateInterval;
-(void)setInitialArticlesFromNewFavorite:(long long)arg1 ;
-(void)setHasInitialArticlesFromNewFavorite:(BOOL)arg1 ;
-(BOOL)hasInitialArticlesFromNewFavorite;
-(void)setAutoScrollToTopFeedTimeout:(long long)arg1 ;
-(void)setHasAutoScrollToTopFeedTimeout:(BOOL)arg1 ;
-(BOOL)hasAutoScrollToTopFeedTimeout;
-(void)setTrendingTopicsRefreshRate:(long long)arg1 ;
-(void)setHasTrendingTopicsRefreshRate:(BOOL)arg1 ;
-(BOOL)hasTrendingTopicsRefreshRate;
-(void)setAppConfigRefreshRate:(long long)arg1 ;
-(void)setHasAppConfigRefreshRate:(BOOL)arg1 ;
-(BOOL)hasAppConfigRefreshRate;
-(void)setMinimumDistanceBetweenImageOnTopTiles:(long long)arg1 ;
-(void)setHasMinimumDistanceBetweenImageOnTopTiles:(BOOL)arg1 ;
-(BOOL)hasMinimumDistanceBetweenImageOnTopTiles;
-(void)setTimeBetweenWidgetInsertions:(long long)arg1 ;
-(void)setHasTimeBetweenWidgetInsertions:(BOOL)arg1 ;
-(BOOL)hasTimeBetweenWidgetInsertions;
-(void)setTimeBetweenSameWidgetReinsertion:(long long)arg1 ;
-(void)setHasTimeBetweenSameWidgetReinsertion:(BOOL)arg1 ;
-(BOOL)hasTimeBetweenSameWidgetReinsertion;
-(void)setNumberOfScreenfulsScrolledToBypassWidgetTimeLimit:(long long)arg1 ;
-(void)setHasNumberOfScreenfulsScrolledToBypassWidgetTimeLimit:(BOOL)arg1 ;
-(BOOL)hasNumberOfScreenfulsScrolledToBypassWidgetTimeLimit;
-(void)setArticleRapidUpdatesTimeout:(long long)arg1 ;
-(void)setHasArticleRapidUpdatesTimeout:(BOOL)arg1 ;
-(BOOL)hasArticleRapidUpdatesTimeout;
-(long long)shortReminderTime;
-(long long)longReminderTime;
-(BOOL)newsletterSubscriptionChecked;
-(double)batchedFeedTimeout;
-(double)interstitialAdLoadDelay;
-(double)prerollLoadingTimeout;
-(NSMutableArray *)endpointConfigs;
-(void)setEndpointConfigs:(NSMutableArray *)arg1 ;
-(NTPBPersonalizationConfig *)personalizationConfig;
-(NTPBIAdConfig *)iadConfig;
-(NTPBPrefetchConfig *)prefetchConfig;
-(double)tileProminenceScoreBalanceValue;
-(long long)minimumArticleUpdateInterval;
-(long long)initialArticlesFromNewFavorite;
-(long long)autoScrollToTopFeedTimeout;
-(long long)trendingTopicsRefreshRate;
-(long long)appConfigRefreshRate;
-(long long)minimumDistanceBetweenImageOnTopTiles;
-(long long)timeBetweenWidgetInsertions;
-(long long)timeBetweenSameWidgetReinsertion;
-(long long)numberOfScreenfulsScrolledToBypassWidgetTimeLimit;
-(long long)articleRapidUpdatesTimeout;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
@end
