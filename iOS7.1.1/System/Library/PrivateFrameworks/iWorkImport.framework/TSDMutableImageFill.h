/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDImageFill.h>

@class TSPData, TSUColor;

@interface TSDMutableImageFill : TSDImageFill

@property (nonatomic,@dynamic,retain) TSPData * imageData; 
@property (assign,nonatomic,@dynamic) int technique; 
@property (nonatomic,@dynamic,copy) TSUColor * tintColor; 
@property (assign,nonatomic,@dynamic) CGSize fillSize; 
-(void)setFillSize:(CGSize)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setImageData:(id)arg1 ;
-(void)setTechnique:(int)arg1 ;
@end

