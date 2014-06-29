/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDPathSource.h>
#import <iWorkImport/TSDMixing.h>

@class TSDBezierPath;

@interface TSDBezierPathSource : TSDPathSource <TSDMixing> {

	TSDBezierPath* mPath;
	bool mIsRectangular;
	CGSize mNaturalSize;

}

@property (assign,nonatomic) CGSize naturalSize; 
+(id)pathSourceWithBezierPath:(id)arg1 ;
-(void)saveToArchive:(PathSourceArchive*)arg1 ;
-(id)initWithArchive:(const PathSourceArchive*)arg1 andBezierArchive:(const BezierPathSourceArchive*)arg2 ;
-(void)saveToArchive:(PathSourceArchive*)arg1 andBezierArchive:(BezierPathSourceArchive*)arg2 ;
-(id)initWithArchive:(const PathSourceArchive*)arg1 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)initWithBezierPath:(id)arg1 ;
-(id)bezierPathWithoutFlips;
-(bool)isRectangularForever;
-(void)p_setBezierPath:(id)arg1 ;
-(CGAffineTransform)transformToNaturalSize;
-(id)initWithNaturalSize:(CGSize)arg1 ;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(CGSize)naturalSize;
-(bool)isRectangular;
-(bool)isCircular;
@end

