/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>
#import <itunesstored/AKAppleIDAuthenticationDelegate.h>

@class SSAuthenticationContext, SSAuthenticationResponse, NSData, NSString, SignInResponse, NSMutableArray;

@interface AuthenticateAttemptOperation : ISOperation <ISStoreURLOperationDelegate, AKAppleIDAuthenticationDelegate> {

	long long _attemptNumber;
	SSAuthenticationContext* _authenticationContext;
	SSAuthenticationResponse* _authenticationResponse;
	NSData* _biometricToken;
	NSString* _clientIdentifier;
	BOOL _didFallbackToPassword;
	NSString* _setStoreFrontIdentifier;
	SignInResponse* _signInResponse;
	NSMutableArray* _accumulatedMetricsEvents;

}

@property (readonly) long long attemptNumber; 
@property (readonly) SSAuthenticationContext * authenticationContext; 
@property (copy) NSString * clientIdentifier; 
@property (readonly) SSAuthenticationResponse * authenticationResponse; 
@property (readonly) NSData * biometricToken; 
@property (readonly) BOOL didFallbackToPassword;                                     //@synthesize didFallbackToPassword=_didFallbackToPassword - In the implementation block
@property (readonly) SignInResponse * signInResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_newURLOperation;
-(void)_setSignInResponse:(id)arg1 ;
-(long long)attemptNumber;
-(SignInResponse *)signInResponse;
-(id)initWithAttemptNumber:(long long)arg1 context:(id)arg2 ;
-(long long)_biometricAvailability;
-(id)_promptForBiometricMatchWithReason:(long long)arg1 error:(id*)arg2 ;
-(BOOL)_shouldPromptAfterBiometricMatch:(id)arg1 ;
-(BOOL)_promptForCredentialsWithReason:(id)arg1 error:(id*)arg2 ;
-(BOOL)_sendAuthenticateRequest:(id*)arg1 ;
-(void)_updateBiometricsWithAccountID:(id)arg1 token:(id)arg2 canPromptUser:(BOOL)arg3 ;
-(void)_setAuthenticationResponse:(id)arg1 ;
-(void)_setCookiesForHTTPResponse:(id)arg1 userIdentifier:(id)arg2 ;
-(id)_newAccountPasswordSettingsDictionary;
-(id)_newURLRequestProperties;
-(id)_newAuthenticateAccountRequestParameters;
-(id)_newAuthenticateSrvRequestBody;
-(id)_loggableClientIdentifier;
-(BOOL)_authKitPromptForCredentialsWithReason:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldUseHeadlessRequest;
-(id)_newAuthenticateSrvURLOperation;
-(id)_newAuthenticateAccountURLOperation;
-(BOOL)_handleResponseFromOperation:(id)arg1 error:(id*)arg2 ;
-(NSData *)biometricToken;
-(BOOL)didFallbackToPassword;
-(void)dealloc;
-(id)init;
-(void)run;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(id)_account;
-(SSAuthenticationContext *)authenticationContext;
-(id)operation:(id)arg1 sanitizedStringForString:(id)arg2 ;
-(BOOL)operation:(id)arg1 shouldSetStoreFrontID:(id)arg2 ;
-(NSString *)clientIdentifier;
-(BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
-(SSAuthenticationResponse *)authenticationResponse;
@end
