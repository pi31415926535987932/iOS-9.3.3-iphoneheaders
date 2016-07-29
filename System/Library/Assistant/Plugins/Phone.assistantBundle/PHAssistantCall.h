/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/Phone.assistantBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAPhoneCall.h>
#import <Accessibility/AFServiceCommand.h>

@class NSBundle, NSString;

@interface PHAssistantCall : SAPhoneCall <AFServiceCommand> {

	NSBundle* _voiceDialBundle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_faceTimeVideoIsAvailable;
-(void)_performAppPunchOutWithURL:(id)arg1 withServiceHelper:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isStarkActive;
-(BOOL)_faceTimeAudioIsAvailable;
-(void)_addFaceTimeAvailabilityListener;
-(void)_removeFaceTimeAvailabilityListener;
-(id)_appPunchOutURL;
-(id)_voiceDialBundle;
-(BOOL)_isEmailAddress;
-(BOOL)_shouldApplyInternationalAssist;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)_validate;
-(id)_countryCode;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
-(id)_copyExceptionsForCountryCode:(id)arg1 ;
@end
