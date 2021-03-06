/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSData, ICNote;

@interface ICNoteData : NSManagedObject {

	BOOL needsToBeSaved;
	BOOL settingNoteData;

}

@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) ICNote * note; 
@property (assign) BOOL needsToBeSaved; 
@property (assign,getter=isSettingNoteData,nonatomic) BOOL settingNoteData; 
-(void)willSave;
-(void)willAccessValueForKey:(id)arg1 ;
-(void)saveNoteDataIfNeeded;
-(BOOL)needsToBeSaved;
-(BOOL)isSettingNoteData;
-(void)setSettingNoteData:(BOOL)arg1 ;
-(void)setNeedsToBeSaved:(BOOL)arg1 ;
@end

