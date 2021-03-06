/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray;

@interface MFMailAccountProxy : NSObject {

	NSDictionary* _properties;

}

@property (nonatomic,readonly) NSString * fullUserName; 
@property (nonatomic,readonly) NSString * username; 
@property (nonatomic,readonly) NSString * firstEmailAddress; 
@property (nonatomic,readonly) NSArray * emailAddresses; 
@property (nonatomic,readonly) NSArray * fromEmailAddresses; 
@property (nonatomic,readonly) NSArray * fromEmailAddressesIncludingDisabled; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) BOOL isDefaultDeliveryAccount; 
@property (nonatomic,readonly) BOOL supportsSoftBankCodePoints; 
@property (nonatomic,readonly) BOOL supportsThreadOperations; 
@property (nonatomic,readonly) BOOL restrictsRepliesAndForwards; 
@property (nonatomic,readonly) BOOL supportsMailDrop; 
@property (nonatomic,readonly) BOOL isManaged; 
@property (nonatomic,readonly) id mailAccount; 
-(void)dealloc;
-(id)mailAccount;
-(NSArray *)fromEmailAddresses;
-(BOOL)restrictsRepliesAndForwards;
-(NSString *)firstEmailAddress;
-(NSString *)fullUserName;
-(NSArray *)fromEmailAddressesIncludingDisabled;
-(BOOL)supportsThreadOperations;
-(BOOL)supportsMailDrop;
-(BOOL)supportsSoftBankCodePoints;
-(id)_initWithProperties:(id)arg1 ;
-(BOOL)isDefaultDeliveryAccount;
-(id)_emailAddressesAndAliases;
-(BOOL)isManaged;
-(BOOL)_isActive;
-(NSString *)username;
-(BOOL)_isRestricted;
-(NSArray *)emailAddresses;
-(NSString *)uniqueID;
@end

