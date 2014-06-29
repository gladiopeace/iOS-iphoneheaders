/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterInputHelper.h>
#import <AVFoundation/AVAssetWriterInputMediaDataRequesterDelegate.h>

@class AVFigAssetWriterTrack, AVAssetWriterInputMediaDataRequester;

@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate> {

	AVFigAssetWriterTrack* _assetWriterTrack;
	AVAssetWriterInputMediaDataRequester* _mediaDataRequester;
	CVPixelBufferPoolRef _pixelBufferPool;

}

@property (getter=_assetWriterTrack,nonatomic,readonly) AVFigAssetWriterTrack * assetWriterTrack;              //@synthesize assetWriterTrack=_assetWriterTrack - In the implementation block
+(id)keyPathsForValuesAffectingReadyForMoreMediaData;
-(id)initWithConfigurationState:(id)arg1 ;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(id)initWithConfigurationState:(id)arg1 assetWriterTrack:(id)arg2 error:(id*)arg3 ;
-(void)prepareToEndSession;
-(bool)prepareToFinishWritingReturningError:(id*)arg1 ;
-(id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1 ;
-(bool)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(bool)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(bool)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_CM4)arg2 ;
-(void)markAsFinished;
-(id)_assetWriterTrack;
-(void)_attachToMediaDataRequester:(id)arg1 ;
-(void)_nudgeMediaDataRequesterIfAppropriate;
-(void)_detachFromMediaDataRequester:(id)arg1 ;
-(bool)mediaDataRequesterShouldRequestMediaData:(id)arg1 ;
-(int)trackID;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)status;
-(void)finalize;
@end

