/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@class ML3MusicLibrary, NSOutputStream;

@interface ML3ExportSession : NSData {

	ML3MusicLibrary* _library;
	NSOutputStream* _outputStream;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                  //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
-(id)end;
-(id)initWithLibrary:(id)arg1 outputStream:(id)arg2 ;
-(id)begin:(unsigned)arg1 ;
-(id)exportTrackAdded:(unsigned long long)arg1 ;
-(id)exportTrackDeleted:(unsigned long long)arg1 ;
-(id)exportPlaylistAdded:(unsigned long long)arg1 ;
-(id)exportPlaylistDeleted:(unsigned long long)arg1 ;
-(id)exportTrackUpdated:(unsigned long long)arg1 ;
-(NSOutputStream *)outputStream;
-(ML3MusicLibrary *)library;
@end

