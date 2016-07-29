/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/StepByStepUIViewController.h>
#import <libobjc.A.dylib/TableViewManagerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class NSString, RecommendationActionController;

@interface StepByStepUIViewController_Create_Config : StepByStepUIViewController <TableViewManagerDelegate, UIPopoverControllerDelegate> {

	NSString* _wifiName;
	NSString* _personalizedBaseName;
	NSString* _basePassword;
	NSString* _basePasswordVerify;
	NSString* _wifiPassword;
	NSString* _wifiPasswordVerify;
	NSString* _diskPassword;
	NSString* _diskPasswordVerify;
	BOOL useSinglePassword;
	BOOL hasDisk;
	BOOL useDifferentDiskPassword;
	RecommendationActionController* actionController;

}

@property (nonatomic,copy) NSString * wifiName;                                              //@synthesize wifiName=_wifiName - In the implementation block
@property (nonatomic,copy) NSString * personalizedBaseName;                                  //@synthesize personalizedBaseName=_personalizedBaseName - In the implementation block
@property (nonatomic,copy) NSString * basePassword;                                          //@synthesize basePassword=_basePassword - In the implementation block
@property (nonatomic,copy) NSString * basePasswordVerify;                                    //@synthesize basePasswordVerify=_basePasswordVerify - In the implementation block
@property (nonatomic,copy) NSString * wifiPassword;                                          //@synthesize wifiPassword=_wifiPassword - In the implementation block
@property (nonatomic,copy) NSString * wifiPasswordVerify;                                    //@synthesize wifiPasswordVerify=_wifiPasswordVerify - In the implementation block
@property (nonatomic,copy) NSString * diskPassword;                                          //@synthesize diskPassword=_diskPassword - In the implementation block
@property (nonatomic,copy) NSString * diskPasswordVerify;                                    //@synthesize diskPasswordVerify=_diskPasswordVerify - In the implementation block
@property (assign,nonatomic) BOOL useSinglePassword; 
@property (assign,nonatomic) BOOL hasDisk; 
@property (assign,nonatomic) BOOL useDifferentDiskPassword; 
@property (nonatomic,retain) RecommendationActionController * actionController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupInitialTableHeaderConfiguration;
-(void)setupTable;
-(void)updateTable;
-(void)validateAndUpdateNextButton;
-(void)addDiskPasswordSection;
-(void)updateSinglePasswordSwitchExplanation:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)touchInCellAtIndexPath:(id)arg1 ;
-(BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4 ;
-(void)switchTouchedInCellAtIndexPath:(id)arg1 forSwitchIndex:(unsigned long long)arg2 isOn:(BOOL)arg3 ;
-(void)textFieldDidChangeAtIndexPath:(id)arg1 ;
-(void)setUseSinglePassword:(BOOL)arg1 ;
-(void)setHasDisk:(BOOL)arg1 ;
-(void)setPersonalizedBaseName:(NSString *)arg1 ;
-(NSString *)personalizedBaseName;
-(void)setWifiName:(NSString *)arg1 ;
-(void)setWifiPassword:(NSString *)arg1 ;
-(NSString *)wifiPassword;
-(void)setWifiPasswordVerify:(NSString *)arg1 ;
-(void)setBasePassword:(NSString *)arg1 ;
-(NSString *)basePassword;
-(void)setBasePasswordVerify:(NSString *)arg1 ;
-(BOOL)hasDisk;
-(void)setDiskPassword:(NSString *)arg1 ;
-(NSString *)diskPassword;
-(void)setDiskPasswordVerify:(NSString *)arg1 ;
-(BOOL)useSinglePassword;
-(void)setUseDifferentDiskPassword:(BOOL)arg1 ;
-(NSString *)wifiName;
-(NSString *)wifiPasswordVerify;
-(NSString *)basePasswordVerify;
-(BOOL)useDifferentDiskPassword;
-(NSString *)diskPasswordVerify;
-(BOOL)validateAndSetValues;
-(void)updateTableForSinglePassword;
-(void)updateTableForMultiplePasswords;
-(RecommendationActionController *)actionController;
-(void)setActionController:(RecommendationActionController *)arg1 ;
@end
