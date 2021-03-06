/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSULRUCache, NSArray, NSMutableDictionary, NSMutableArray, NSString;

@interface TSWPFontCache : NSObject {

	TSULRUCache* _fontCache;
	NSArray* _familyNames;
	NSMutableDictionary* _familyDisplayNames;
	NSArray* _familyFonts;
	NSMutableArray* _cachedAvailableMembers;
	NSString* _cachedMembersFamilyName;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedCache;
+(id)_singletonAlloc;
-(CTFontRef)createFontWithName:(id)arg1 size:(double)arg2 ;
-(id)displayNameForFontFamily:(id)arg1 ;
-(void)p_FontWasDownloaded:(id)arg1 ;
-(id)p_excludedFamilyNames;
-(id)sortedFontFamilies;
-(id)sortedFontFamilyEntriesForStylesheet:(id)arg1 ;
-(id)availableMembersOfFontFamily:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

