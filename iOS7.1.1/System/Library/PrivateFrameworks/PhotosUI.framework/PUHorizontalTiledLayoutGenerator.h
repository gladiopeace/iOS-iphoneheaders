/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTiledLayoutGenerator.h>

@interface PUHorizontalTiledLayoutGenerator : PUTiledLayoutGenerator {

	CGPoint _origin;
	double _referenceHeight;

}

@property (assign,nonatomic) double referenceHeight;              //@synthesize referenceHeight=_referenceHeight - In the implementation block
-(void)setReferenceHeight:(double)arg1 ;
-(void)willParseTiles;
-(bool)parseNextTiles;
-(double)referenceDistanceForMagneticGuidelines;
-(bool)_parseSpecialSequence;
-(bool)_parseSpecialTileTriplet;
-(bool)_parseTileTriplet;
-(bool)_parseTilePair;
-(bool)_parseSingleTile;
-(bool)_scanTripletWithLargeLead:(SCD_Struct_PU12*)arg1 ;
-(bool)_scanSpecialSequenceBlock:(SCD_Struct_PU12*)arg1 ;
-(bool)_addSpecialSequenceBlock:(SCD_Struct_PU12*)arg1 ;
-(bool)_scanNonPanoramaSequence:(SCD_Struct_PU12*)arg1 count:(long long)arg2 ;
-(double)referenceHeight;
-(bool)_addColumnWithTiles:(SCD_Struct_PU12*)arg1 imageFrames:(CGRect*)arg2 count:(long long)arg3 ;
-(bool)_addColumnWithContiguousTiles:(SCD_Struct_PU12*)arg1 count:(long long)arg2 ;
-(bool)_hasLeftSuboptimalColumn;
-(bool)_parseSpecialSubsequenceWithColumnRequired:(bool)arg1 columnParsed:(bool*)arg2 ;
-(bool)_scanSpecialSequenceColumn:(SCD_Struct_PU12*)arg1 count:(long long*)arg2 ;
-(bool)_isAtEndOfColumn;
-(void)_enumerateColumnFramesWithContiguousTiles:(SCD_Struct_PU12*)arg1 count:(long long)arg2 useMagneticGuidelines:(bool)arg3 block:(/*^block*/ id)arg4 ;
@end

