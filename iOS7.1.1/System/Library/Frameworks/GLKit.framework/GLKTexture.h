/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GLKit/GLKit-Structs.h>
@class NSData, NSString;

@interface GLKTexture : NSObject {

	NSData* imageData;
	CGImageBlockSetRef _blockSet;
	CFDataRef _cfData;
	unsigned _width;
	unsigned _height;
	unsigned orientation;
	unsigned numMipMapLevels;
	unsigned bitsPerPixel;
	unsigned _rowBytes;
	unsigned nComponents;
	unsigned nPrimarySurfaces;
	unsigned nSurfaces;
	int loadMode;
	int texelFormat;
	int _dataCategory;
	unsigned _index;
	unsigned GLTextureName;
	unsigned bindTarget;
	unsigned textureTarget;
	unsigned internalFormat;
	unsigned format;
	unsigned type;
	int _unpackAlignment;
	bool _requestIssuedForAlphaPremultiplication;
	bool _requestIssuedForMipmapGeneration;
	bool _requestIssuedToReorientToGL;
	bool _requestIssuedToInterpretGrayAsAlpha;
	bool _requestIssuedForSRGB;
	bool _hasPremultipliedAlpha;
	bool isPowerOfTwo;
	bool _isCubeMap;
	bool isMipmapped;
	bool isVerticalFlipped;
	bool hasAlpha;
	bool reOrient;
	unsigned _primarySurfaceLength;
	NSString* _label;

}

@property (readonly) NSData * imageData; 
@property (assign,nonatomic) unsigned GLTextureName; 
@property (assign,nonatomic) unsigned bindTarget; 
@property (assign,nonatomic) unsigned textureTarget; 
@property (assign,nonatomic) unsigned internalFormat; 
@property (assign,nonatomic) unsigned format; 
@property (assign,nonatomic) unsigned type; 
@property (assign,nonatomic) int texelFormat; 
@property (assign,nonatomic) unsigned width;                         //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned height;                        //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned orientation; 
@property (assign,nonatomic) unsigned numMipMapLevels; 
@property (assign,nonatomic) unsigned bitsPerPixel; 
@property (assign,nonatomic) unsigned rowBytes;                      //@synthesize rowBytes=_rowBytes - In the implementation block
@property (assign,nonatomic) unsigned nComponents; 
@property (assign,nonatomic) unsigned nPrimarySurfaces; 
@property (assign,nonatomic) unsigned nSurfaces; 
@property (assign,nonatomic) int loadMode; 
@property (assign,nonatomic) int dataCategory;                       //@synthesize dataCategory=_dataCategory - In the implementation block
@property (assign,nonatomic) unsigned index;                         //@synthesize index=_index - In the implementation block
@property (readonly) bool hasPremultipliedAlpha;                     //@synthesize hasPremultipliedAlpha=_hasPremultipliedAlpha - In the implementation block
@property (assign,nonatomic) bool isPowerOfTwo; 
@property (assign,nonatomic) bool isCubeMap;                         //@synthesize isCubeMap=_isCubeMap - In the implementation block
@property (assign,nonatomic) bool isMipmapped; 
@property (assign,nonatomic) bool isVerticalFlipped; 
@property (assign,nonatomic) bool hasAlpha; 
@property (assign,nonatomic) bool reOrient; 
@property (nonatomic,copy) NSString * label;                         //@synthesize label=_label - In the implementation block
-(void)updateRequestedOperationsFromOptions:(id)arg1 ;
-(bool)loadWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(bool)loadPVRTCData:(id)arg1 error:(id*)arg2 ;
-(bool)loadCGImage:(CGImageRef)arg1 options:(id)arg2 error:(id*)arg3 ;
-(int)loadMode;
-(int)dataCategory;
-(bool)isCubeMap;
-(unsigned)nComponents;
-(int)texelFormat;
-(unsigned)internalFormat;
-(bool)isPowerOfTwo;
-(bool)isVerticalFlipped;
-(unsigned)bindTarget;
-(bool)determinePVRFormat:(unsigned)arg1 ;
-(void*)alignmentFix:(unsigned long long)arg1 data:(const void*)arg2 ;
-(bool)shouldApplyReorientToGL;
-(bool)shouldApplyPremultiplication;
-(bool)determineCGImageBlockFormatWithComponentType:(int)arg1 andPixelSize:(unsigned long long)arg2 andColorModel:(int)arg3 ;
-(bool)decodeCGImageImageProvider:(CGImageRef)arg1 CGImageProvider:(CGImageProviderRef)arg2 ;
-(bool)decodeCGImageDataProvider:(CGImageRef)arg1 ;
-(bool)decodeCGImage:(CGImageRef)arg1 ;
-(bool)canHonorSRGBrequest;
-(bool)reorientToGL:(void*)arg1 source:(void*)arg2 withWidth:(unsigned)arg3 withHeight:(unsigned)arg4 withRowBytes:(unsigned)arg5 error:(id*)arg6 ;
-(bool)premultiplyWithAlpha:(void*)arg1 source:(void*)arg2 withWidth:(unsigned)arg3 withHeight:(unsigned)arg4 withRowBytes:(unsigned)arg5 error:(id*)arg6 ;
-(bool)_uploadToGLTexture:(unsigned)arg1 data:(id)arg2 width:(int)arg3 height:(int)arg4 dataCategory:(int)arg5 cubeMapIndex:(int)arg6 mipMapIndex:(int)arg7 error:(id*)arg8 ;
-(unsigned)rowBytes;
-(id)initWithData:(id)arg1 forceCubeMap:(bool)arg2 wasCubeMap:(bool*)arg3 cubeMapIndex:(int)arg4 options:(id)arg5 error:(id*)arg6 ;
-(id)initWithCGImage:(CGImageRef)arg1 forceCubeMap:(bool)arg2 wasCubeMap:(bool*)arg3 cubeMapIndex:(int)arg4 options:(id)arg5 error:(id*)arg6 ;
-(id)initWithDecodedData:(id)arg1 width:(unsigned)arg2 height:(unsigned)arg3 rowBytes:(unsigned)arg4 texture:(id)arg5 cubeMapIndex:(int)arg6 options:(id)arg7 error:(id*)arg8 ;
-(bool)uploadToGLTexture:(unsigned)arg1 error:(id*)arg2 ;
-(unsigned)GLTextureName;
-(void)setGLTextureName:(unsigned)arg1 ;
-(void)setLoadMode:(int)arg1 ;
-(void)setDataCategory:(int)arg1 ;
-(void)setBindTarget:(unsigned)arg1 ;
-(void)setInternalFormat:(unsigned)arg1 ;
-(void)setTexelFormat:(int)arg1 ;
-(unsigned)numMipMapLevels;
-(void)setNumMipMapLevels:(unsigned)arg1 ;
-(void)setRowBytes:(unsigned)arg1 ;
-(void)setNComponents:(unsigned)arg1 ;
-(unsigned)nPrimarySurfaces;
-(void)setNPrimarySurfaces:(unsigned)arg1 ;
-(unsigned)nSurfaces;
-(void)setNSurfaces:(unsigned)arg1 ;
-(bool)hasPremultipliedAlpha;
-(void)setIsPowerOfTwo:(bool)arg1 ;
-(void)setIsCubeMap:(bool)arg1 ;
-(bool)isMipmapped;
-(void)setIsMipmapped:(bool)arg1 ;
-(void)setIsVerticalFlipped:(bool)arg1 ;
-(bool)reOrient;
-(void)setReOrient:(bool)arg1 ;
-(bool)hasAlpha;
-(void)setHasAlpha:(bool)arg1 ;
-(unsigned)textureTarget;
-(void)setTextureTarget:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)orientation;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(unsigned)width;
-(id)label;
-(unsigned)height;
-(void)setLabel:(id)arg1 ;
-(unsigned)index;
-(void)setOrientation:(unsigned)arg1 ;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(unsigned)bitsPerPixel;
-(void)setBitsPerPixel:(unsigned)arg1 ;
-(id)imageData;
-(unsigned)format;
-(void)setFormat:(unsigned)arg1 ;
@end

