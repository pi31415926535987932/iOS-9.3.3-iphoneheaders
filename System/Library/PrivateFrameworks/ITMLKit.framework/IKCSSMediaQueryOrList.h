/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKCSSMediaQueryList.h>

@class NSMutableArray;

@interface IKCSSMediaQueryOrList : IKCSSMediaQueryList {

	NSMutableArray* _queryList;

}
-(unsigned long long)count;
-(id)init;
-(id)description;
-(id)subQueryAtIndex:(unsigned long long)arg1 ;
-(id)subQueryList;
-(void)addSubQueryList:(id)arg1 ;
-(BOOL)evaluate;
@end
