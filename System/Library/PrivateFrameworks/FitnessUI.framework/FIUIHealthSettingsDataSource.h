/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@class FIUIHealthSettingsTableViewCell, FIUIActivitySettingsController, FIUIHealthSettingsBirthDatePickerController, FIUIHealthSettingsHeightPickerController, FIUIHealthSettingsWeightPickerController, FIUIHealthSettingsSexPickerController, NSString;

@interface FIUIHealthSettingsDataSource : NSObject <UITableViewDataSource> {

	FIUIHealthSettingsTableViewCell* _birthDateCell;
	FIUIHealthSettingsTableViewCell* _biologicalSexCell;
	FIUIHealthSettingsTableViewCell* _heightCell;
	FIUIHealthSettingsTableViewCell* _weightCell;
	FIUIActivitySettingsController* _preEditSettingsController;
	FIUIActivitySettingsController* _settingsController;
	FIUIHealthSettingsBirthDatePickerController* _birthDatePickerController;
	FIUIHealthSettingsHeightPickerController* _heightPickerController;
	FIUIHealthSettingsWeightPickerController* _weightPickerController;
	FIUIHealthSettingsSexPickerController* _sexPickerController;

}

@property (nonatomic,retain) FIUIActivitySettingsController * settingsController;                                  //@synthesize settingsController=_settingsController - In the implementation block
@property (nonatomic,retain) FIUIHealthSettingsBirthDatePickerController * birthDatePickerController;              //@synthesize birthDatePickerController=_birthDatePickerController - In the implementation block
@property (nonatomic,retain) FIUIHealthSettingsHeightPickerController * heightPickerController;                    //@synthesize heightPickerController=_heightPickerController - In the implementation block
@property (nonatomic,retain) FIUIHealthSettingsWeightPickerController * weightPickerController;                    //@synthesize weightPickerController=_weightPickerController - In the implementation block
@property (nonatomic,retain) FIUIHealthSettingsSexPickerController * sexPickerController;                          //@synthesize sexPickerController=_sexPickerController - In the implementation block
@property (nonatomic,readonly) FIUIActivitySettingsController * editedSettingsController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_updateCells;
-(FIUIHealthSettingsBirthDatePickerController *)birthDatePickerController;
-(void)_updateBirthDateCell;
-(FIUIHealthSettingsSexPickerController *)sexPickerController;
-(void)_updateBiologicalSexCell;
-(FIUIHealthSettingsHeightPickerController *)heightPickerController;
-(void)_updateHeightCell;
-(FIUIHealthSettingsWeightPickerController *)weightPickerController;
-(void)_updateWeightCell;
-(FIUIActivitySettingsController *)settingsController;
-(id)birthDateCell;
-(id)biologicalSexCell;
-(id)heightCell;
-(id)weightCell;
-(id)initWithActivitySettingsController:(id)arg1 ;
-(void)cellDidBecomeFirstResponder:(id)arg1 ;
-(void)cellDidResignFirstResponder:(id)arg1 ;
-(void)startEditing;
-(void)endEditingAndDiscardChanges:(BOOL)arg1 ;
-(FIUIActivitySettingsController *)editedSettingsController;
-(void)setSettingsController:(FIUIActivitySettingsController *)arg1 ;
-(void)setBirthDatePickerController:(FIUIHealthSettingsBirthDatePickerController *)arg1 ;
-(void)setHeightPickerController:(FIUIHealthSettingsHeightPickerController *)arg1 ;
-(void)setWeightPickerController:(FIUIHealthSettingsWeightPickerController *)arg1 ;
-(void)setSexPickerController:(FIUIHealthSettingsSexPickerController *)arg1 ;
@end

