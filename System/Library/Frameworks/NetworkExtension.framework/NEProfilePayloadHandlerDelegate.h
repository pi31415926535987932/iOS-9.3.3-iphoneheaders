/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NEProfilePayloadHandlerDelegate
@required
-(BOOL)setAppLayerVPNRuleSettings:(id)arg1 withAppIdentifier:(id)arg2;
-(id)getCertificates;
-(id)getPendingCertificateUUIDs:(id)arg1;
-(id)getPendingCertificateInfo:(id)arg1;
-(id)getConfigurationIdentifier;
-(BOOL)setPayloadInfoIdentity:(id)arg1;
-(BOOL)setPayloadInfoCommon:(id)arg1 payloadOrganization:(id)arg2;
-(BOOL)setProfileInfo:(id)arg1;
-(BOOL)setAppLayerVPNUUID:(id)arg1 andSafariDomains:(id)arg2;
-(BOOL)setCertificates:(id)arg1;

@end
