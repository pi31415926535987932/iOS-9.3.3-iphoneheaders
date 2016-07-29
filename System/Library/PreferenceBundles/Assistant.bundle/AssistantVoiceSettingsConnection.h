/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/Assistant.bundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSettingsConnection.h>

@interface AssistantVoiceSettingsConnection : AFSettingsConnection
+(id)outputLanguageIdentifiers;
-(id)dialectForLanguageIdentifier:(id)arg1 ;
-(id)getAvailableDialectsForLanguage:(id)arg1 ;
-(BOOL)languageHasMultipleVoices:(id)arg1 ;
-(BOOL)languageHasCustomVoice:(id)arg1 ;
-(id)_regionForLanguageIdentifier:(id)arg1 ;
-(id)getAvailableVoicesForLanguage:(id)arg1 ;
-(void)setOutputVoiceLanguage:(id)arg1 gender:(long long)arg2 ;
-(BOOL)languageHasVoiceSelection:(id)arg1 ;
@end
