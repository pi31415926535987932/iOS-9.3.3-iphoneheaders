/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSString;

@interface ICLetterpressImageCacheKey : NSObject <NSCopying> {

	double _scale;
	UIColor* _tintColor;
	NSString* _name;

}

@property (nonatomic,readonly) double scale;                     //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
-(id)initWithName:(id)arg1 tintColor:(id)arg2 scale:(double)arg3 ;
@end
