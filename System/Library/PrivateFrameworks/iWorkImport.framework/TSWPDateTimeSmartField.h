/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSWPSmartField.h>

@class NSString, NSDate;

@interface TSWPDateTimeSmartField : TSWPSmartField {

	NSString* _format;
	NSString* _localeID;
	long long _dateStyle;
	long long _timeStyle;
	int _updatePlan;
	BOOL _needsUpdate;
	NSDate* _date;

}

@property (nonatomic,copy) NSDate * date;                            //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * format;                        //@synthesize format=_format - In the implementation block
@property (nonatomic,copy) NSString * localeIdentifier;              //@synthesize localeID=_localeID - In the implementation block
@property (assign,nonatomic) long long dateStyle;                    //@synthesize dateStyle=_dateStyle - In the implementation block
@property (assign,nonatomic) long long timeStyle;                    //@synthesize timeStyle=_timeStyle - In the implementation block
@property (assign,nonatomic) int updatePlan;                         //@synthesize updatePlan=_updatePlan - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                       //@synthesize needsUpdate=_needsUpdate - In the implementation block
+(id)dateStringFromTime:(double)arg1 withFormat:(id)arg2 localeIdentifier:(id)arg3 dateStyle:(long long)arg4 timeStyle:(long long)arg5 ;
+(id)newDateFormatWithLocaleIdentifier:(id)arg1 dateStyle:(long long)arg2 timeStyle:(long long)arg3 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(int)smartFieldKind;
-(void)setUpdatePlan:(int)arg1 ;
-(void)setFormat:(id)arg1 localeIdentifier:(id)arg2 dateStyle:(long long)arg3 timeStyle:(long long)arg4 ;
-(id)initWithLocaleIdentifier:(id)arg1 dateStyle:(long long)arg2 timeStyle:(long long)arg3 format:(id)arg4 date:(id)arg5 updatePlan:(int)arg6 context:(id)arg7 ;
-(id)initWithLocaleIdentifier:(id)arg1 dateStyle:(long long)arg2 timeStyle:(long long)arg3 format:(id)arg4 autoUpdate:(BOOL)arg5 context:(id)arg6 ;
-(id)initWithLocaleIdentifier:(id)arg1 dateStyle:(long long)arg2 timeStyle:(long long)arg3 autoUpdate:(BOOL)arg4 context:(id)arg5 ;
-(id)generateInlineText;
-(int)updatePlan;
-(long long)dateStyle;
-(long long)timeStyle;
-(void)dealloc;
-(NSDate *)date;
-(NSString *)localeIdentifier;
-(void)setDate:(NSDate *)arg1 ;
-(void)setDateStyle:(long long)arg1 ;
-(void)setTimeStyle:(long long)arg1 ;
-(void)resetLocale;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
@end
