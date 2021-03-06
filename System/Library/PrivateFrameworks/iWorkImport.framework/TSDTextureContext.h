/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol TSDAnimationSession;
@interface TSDTextureContext : NSObject <NSCopying> {

	id<TSDAnimationSession> _session;
	unsigned _isMagicMove : 1;
	unsigned _shouldAddFinal : 1;
	unsigned _shouldAddMasks : 1;
	unsigned _shouldAddReversedFinal : 1;
	unsigned _shouldAddMagicMoveObjectOnly : 1;
	unsigned _shouldNotAddContainedReps : 1;
	unsigned _shouldNotAddShapeAttributes : 1;
	unsigned _shouldNotAddText : 1;
	unsigned _shouldNotCacheTexture : 1;
	unsigned _shouldSeparateReflection : 1;
	unsigned _shouldSeparateShadow : 1;
	unsigned _shouldSeparateStroke : 1;
	unsigned _shouldSeparateText : 1;
	unsigned _shouldIgnoreScaleInSourceImage : 1;
	unsigned _shouldDistortToFit : 1;
	unsigned _shouldForceTextureGeneration : 1;
	BOOL _shouldAddNoShapeAttributes;

}

@property (assign,nonatomic) id<TSDAnimationSession> session;                  //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL isMagicMove;                                 //@synthesize isMagicMove=_isMagicMove - In the implementation block
@property (assign,nonatomic) BOOL shouldAddFinal;                              //@synthesize shouldAddFinal=_shouldAddFinal - In the implementation block
@property (assign,nonatomic) BOOL shouldAddReversedFinal;                      //@synthesize shouldAddReversedFinal=_shouldAddReversedFinal - In the implementation block
@property (assign,nonatomic) BOOL shouldAddMagicMoveObjectOnly;                //@synthesize shouldAddMagicMoveObjectOnly=_shouldAddMagicMoveObjectOnly - In the implementation block
@property (assign,nonatomic) BOOL shouldDistortToFit;                          //@synthesize shouldDistortToFit=_shouldDistortToFit - In the implementation block
@property (assign,nonatomic) BOOL shouldNotAddContainedReps;                   //@synthesize shouldNotAddContainedReps=_shouldNotAddContainedReps - In the implementation block
@property (assign,nonatomic) BOOL shouldNotAddShapeAttributes;                 //@synthesize shouldAddNoShapeAttributes=_shouldAddNoShapeAttributes - In the implementation block
@property (assign,nonatomic) BOOL shouldNotAddText;                            //@synthesize shouldNotAddText=_shouldNotAddText - In the implementation block
@property (assign,nonatomic) BOOL shouldNotCacheTexture;                       //@synthesize shouldNotCacheTexture=_shouldNotCacheTexture - In the implementation block
@property (assign,nonatomic) BOOL shouldSeparateReflection;                    //@synthesize shouldSeparateReflection=_shouldSeparateReflection - In the implementation block
@property (assign,nonatomic) BOOL shouldSeparateShadow;                        //@synthesize shouldSeparateShadow=_shouldSeparateShadow - In the implementation block
@property (assign,nonatomic) BOOL shouldSeparateStroke;                        //@synthesize shouldSeparateStroke=_shouldSeparateStroke - In the implementation block
@property (assign,nonatomic) BOOL shouldSeparateText;                          //@synthesize shouldSeparateText=_shouldSeparateText - In the implementation block
@property (assign,nonatomic) BOOL shouldForceTextureGeneration;                //@synthesize shouldForceTextureGeneration=_shouldForceTextureGeneration - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreScaleInSourceImage;              //@synthesize shouldIgnoreScaleInSourceImage=_shouldIgnoreScaleInSourceImage - In the implementation block
@property (assign,nonatomic) BOOL shouldAddMasks;                              //@synthesize shouldAddMasks=_shouldAddMasks - In the implementation block
+(id)contextWithSession:(id)arg1 ;
+(id)contextWithTextureContext:(id)arg1 ;
+(id)context;
-(BOOL)isMagicMove;
-(void)setIsMagicMove:(BOOL)arg1 ;
-(BOOL)shouldNotCacheTexture;
-(BOOL)shouldDistortToFit;
-(BOOL)shouldNotAddContainedReps;
-(BOOL)shouldIgnoreScaleInSourceImage;
-(BOOL)shouldSeparateShadow;
-(BOOL)shouldSeparateReflection;
-(BOOL)shouldAddMagicMoveObjectOnly;
-(BOOL)shouldSeparateStroke;
-(BOOL)shouldAddMasks;
-(BOOL)shouldAddFinal;
-(void)setShouldAddFinal:(BOOL)arg1 ;
-(void)setShouldAddMagicMoveObjectOnly:(BOOL)arg1 ;
-(void)setShouldAddMasks:(BOOL)arg1 ;
-(BOOL)shouldAddReversedFinal;
-(void)setShouldAddReversedFinal:(BOOL)arg1 ;
-(void)setShouldDistortToFit:(BOOL)arg1 ;
-(void)setShouldNotAddContainedReps:(BOOL)arg1 ;
-(BOOL)shouldNotAddShapeAttributes;
-(void)setShouldNotAddShapeAttributes:(BOOL)arg1 ;
-(BOOL)shouldNotAddText;
-(void)setShouldNotAddText:(BOOL)arg1 ;
-(void)setShouldNotCacheTexture:(BOOL)arg1 ;
-(void)setShouldSeparateReflection:(BOOL)arg1 ;
-(void)setShouldSeparateShadow:(BOOL)arg1 ;
-(void)setShouldSeparateStroke:(BOOL)arg1 ;
-(BOOL)shouldSeparateText;
-(void)setShouldSeparateText:(BOOL)arg1 ;
-(BOOL)shouldForceTextureGeneration;
-(void)setShouldForceTextureGeneration:(BOOL)arg1 ;
-(void)setShouldIgnoreScaleInSourceImage:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<TSDAnimationSession>)session;
-(void)setSession:(id<TSDAnimationSession>)arg1 ;
@end

