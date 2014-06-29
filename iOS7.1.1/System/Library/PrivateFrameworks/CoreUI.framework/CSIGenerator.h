/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString, NSMutableArray, CUIPSDGradient, CUIShapeEffectPreset, NSDate;

@interface CSIGenerator : NSObject {

	CGSize _size;
	NSString* _name;
	NSMutableArray* _slices;
	NSMutableArray* _bitmaps;
	NSMutableArray* _metrics;
	bool _isFPOHint;
	bool _isExcludedFromFilter;
	short _colorSpaceID;
	short _layout;
	unsigned _scaleFactor;
	CUIPSDGradient* _gradient;
	CUIShapeEffectPreset* _effectPreset;
	int _blendMode;
	double _opacity;
	NSDate* _modtime;

}

@property (nonatomic,copy) NSString * name;                                                                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) bool isRenditionFPO;                                                              //@synthesize isFPOHint=_isFPOHint - In the implementation block
@property (assign,getter=isExcludedFromContrastFilter,nonatomic) bool excludedFromContrastFilter;              //@synthesize isExcludedFromFilter=_isExcludedFromFilter - In the implementation block
@property (assign,nonatomic) short colorSpaceID;                                                               //@synthesize colorSpaceID=_colorSpaceID - In the implementation block
@property (assign,nonatomic) unsigned scaleFactor;                                                             //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,retain) CUIPSDGradient * gradient;                                                        //@synthesize gradient=_gradient - In the implementation block
@property (nonatomic,retain) CUIShapeEffectPreset * effectPreset;                                              //@synthesize effectPreset=_effectPreset - In the implementation block
@property (assign,nonatomic) int blendMode;                                                                    //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) double opacity;                                                                   //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,copy) NSDate * modtime;                                                                   //@synthesize modtime=_modtime - In the implementation block
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(id)name;
-(unsigned)scaleFactor;
-(void)setGradient:(id)arg1 ;
-(id)gradient;
-(void)setEffectPreset:(id)arg1 ;
-(id)modtime;
-(void)_addNodes:(id)arg1 toNodeList:(csigradientdatanode*)arg2 ;
-(void)formatCSIHeader:(csiheader*)arg1 ;
-(void)writeHeader:(csiheader*)arg1 toData:(id)arg2 ;
-(unsigned long long)writeResourcesToData:(id)arg1 ;
-(unsigned long long)writeGradientToData:(id)arg1 ;
-(unsigned long long)writeBitmap:(id)arg1 toData:(id)arg2 compress:(bool)arg3 ;
-(id)initWithCanvasSize:(CGSize)arg1 sliceCount:(unsigned)arg2 layout:(short)arg3 ;
-(id)initWithShapeEffectPreset:(id)arg1 forScaleFactor:(unsigned)arg2 ;
-(void)addBitmap:(id)arg1 ;
-(void)addSliceRect:(CGRect)arg1 ;
-(void)addMetrics:(SCD_Struct_CS4)arg1 ;
-(id)CSIRepresentationWithCompression:(bool)arg1 ;
-(bool)isRenditionFPO;
-(void)setIsRenditionFPO:(bool)arg1 ;
-(bool)isExcludedFromContrastFilter;
-(void)setExcludedFromContrastFilter:(bool)arg1 ;
-(short)colorSpaceID;
-(void)setColorSpaceID:(short)arg1 ;
-(void)setScaleFactor:(unsigned)arg1 ;
-(id)effectPreset;
-(void)setModtime:(id)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
@end

