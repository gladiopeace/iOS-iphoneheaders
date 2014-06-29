/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:12:34 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoding.framework/XPCServices/IMTranscoderAgent.xpc/IMTranscoderAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMTranscoderAgent/IMTranscoderAgent-Structs.h>
@class NSData;

@interface IMEmbeddedHardwareJPEGTranscoder : NSObject {

	IOSurfaceRef _ioSurfaceRef;
	NSData* _imageData;
	CFDictionaryRef _imageProperties;
	BOOL _canHardwareScaleImage;

}
-(BOOL)scaleImageToFitLargestDimension:(id)arg1 outputData:(id*)arg2 ;
-(id)initWithImageData:(id)arg1 imageSource:(CGImageSourceRef)arg2 ;
-(BOOL)_isJPEGImage:(CGImageSourceRef)arg1 ;
-(BOOL)_decodeImageToIOSurface;
-(void)dealloc;
@end

