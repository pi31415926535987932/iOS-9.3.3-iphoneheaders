/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TPMasterDrawableProvider <NSObject>
@required
-(id)masterDrawables;
-(void)addMasterDrawable:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(BOOL)arg4;
-(unsigned long long)countOfMasterDrawables;
-(id)masterDrawablesSortedByZOrder:(id)arg1;
-(unsigned long long)indexOfMasterDrawable:(id)arg1;
-(void)addMasterDrawables:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(BOOL)arg4;
-(void)removeMasterDrawable:(id)arg1 suppressDOLC:(BOOL)arg2;

@end
