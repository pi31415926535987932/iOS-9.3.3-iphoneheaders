/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PRAutocorrectionContext : NSObject {

	unsigned long long _modificationMask;

}
+(id)autocorrectionContextOfType:(unsigned long long)arg1 ;
-(void)addInputCharacter:(unsigned short)arg1 geometryModel:(void*)arg2 geometryData:(id)arg3 ;
-(id)currentModifications;
-(id)addedModifications;
-(id)removedModifications;
-(void)addInputCharacter:(unsigned short)arg1 geometryData:(id)arg2 ;
-(void)setModificationMask:(unsigned long long)arg1 ;
-(unsigned long long)modificationMask;
-(id)guesses;
-(void)setValidSequenceCorrectionThreshold:(double)arg1 ;
-(double)validSequenceCorrectionThreshold;
-(void)reset;
-(id)prefixes;
-(id)completions;
@end
