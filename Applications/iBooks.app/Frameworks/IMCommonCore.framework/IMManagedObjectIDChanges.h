/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface IMManagedObjectIDChanges : NSObject {

	NSArray* _addedObjects;
	NSArray* _updatedObjects;
	NSArray* _deletedObjects;

}

@property (nonatomic,readonly) NSArray * addedObjects;                //@synthesize addedObjects=_addedObjects - In the implementation block
@property (nonatomic,readonly) NSArray * updatedObjects;              //@synthesize updatedObjects=_updatedObjects - In the implementation block
@property (nonatomic,readonly) NSArray * deletedObjects;              //@synthesize deletedObjects=_deletedObjects - In the implementation block
-(id)initWithAdded:(id)arg1 updated:(id)arg2 deleted:(id)arg3 ;
-(NSArray *)addedObjects;
-(NSArray *)updatedObjects;
-(NSArray *)deletedObjects;
@end
