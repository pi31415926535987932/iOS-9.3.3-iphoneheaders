/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPRemoteDeviceSecretValidatorProtocol
@required
-(void)approveFromAnotherDeviceWithCompletion:(/*^block*/id)arg1;
-(void)cancelApproveFromAnotherDevice;
-(void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4;
-(void)cancelValidationWithError:(id)arg1;
-(void)resetAccountCDPState;

@end
