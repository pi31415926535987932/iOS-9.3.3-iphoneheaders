/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapsSupport/MapsSupport-Structs.h>
@class NSMutableArray, NSMutableSet, NSArray;

@interface _MSPContainerEditsRecorder : NSObject {

	NSMutableArray* _originalMutableArray;
	NSMutableArray* _proxiesMutableArray;
	NSMutableArray* _orderedEdits;
	NSMutableSet* _updatedObjects;

}

@property (nonatomic,readonly) NSMutableArray * recordableMutableArray; 
@property (nonatomic,readonly) NSArray * orderedEdits; 
-(id)editableObjectsAtIndexes:(id)arg1 ;
-(void)_editDetectorDidDetectUpdateForObject:(id)arg1 ;
-(void)getEditableObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)useImmutableObjectsForEditsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(/*^block*/id)arg2 ;
-(NSArray *)orderedEdits;
-(void)insertObject:(id)arg1 inEditableObjectsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromEditableObjectsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)recordableMutableArray;
-(void)replaceObjectInEditableObjectsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)initWithMutableArray:(id)arg1 ;
-(unsigned long long)countOfEditableObjects;
-(void)insertEditableObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeEditableObjectsAtIndexes:(id)arg1 ;
-(void)replaceEditableObjectsAtIndexes:(id)arg1 withEditableObjects:(id)arg2 ;
-(id)objectInEditableObjectsAtIndex:(unsigned long long)arg1 ;
@end

