/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLExpressionIntermediate.h>

@class NSSQLEntity;

@interface NSSQLTernaryExpressionIntermediate : NSSQLExpressionIntermediate {

	NSSQLEntity* _disambiguatingEntity;

}
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)disambiguatingEntity;
-(void)setDisambiguatingEntity:(id)arg1 ;
-(id)_generateSQLForPredicate:(id)arg1 inContext:(id)arg2 ;
@end
