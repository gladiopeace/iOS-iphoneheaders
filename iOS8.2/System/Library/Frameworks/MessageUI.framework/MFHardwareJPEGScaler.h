/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSData;

@interface MFHardwareJPEGScaler : NSObject {

	IOSurfaceRef _ioSurfaceRef;
	NSData* _imageData;
	CFDictionaryRef _imageProperties;
	char _canHardwareScaleImage;

}
-(id)initWithImageData:(id)arg1 imageSource:(CGImageSourceRef)arg2 ;
-(char)_isJPEGImage:(CGImageSourceRef)arg1 ;
-(char)_decodeImageToIOSurface;
-(char)scaleImageToFitLargestDimension:(id)arg1 dataConsumer:(id)arg2 ;
-(void)dealloc;
@end

