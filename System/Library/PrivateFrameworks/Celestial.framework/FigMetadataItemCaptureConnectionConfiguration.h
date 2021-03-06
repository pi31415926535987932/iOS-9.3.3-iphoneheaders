/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureConnectionConfiguration.h>

@interface FigMetadataItemCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {

	opaqueCMFormatDescriptionRef _formatDescription;
	OpaqueCMClockRef _clock;
	int _sourceSubType;

}

@property (nonatomic,retain) opaqueCMFormatDescriptionRef formatDescription;              //@synthesize formatDescription=_formatDescription - In the implementation block
@property (nonatomic,retain) OpaqueCMClockRef clock;                                      //@synthesize clock=_clock - In the implementation block
@property (assign,nonatomic) int sourceSubType;                                           //@synthesize sourceSubType=_sourceSubType - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)sourceSubType;
-(void)setFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(OpaqueCMClockRef)clock;
-(void)setClock:(OpaqueCMClockRef)arg1 ;
-(void)setSourceSubType:(int)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(opaqueCMFormatDescriptionRef)formatDescription;
@end

