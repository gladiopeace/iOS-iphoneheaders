/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVCaptureAudioChannelInternal_FigRecorder;

@interface AVCaptureAudioChannel_FigRecorder : NSObject {

	AVCaptureAudioChannelInternal_FigRecorder* _internal;

}

@property (nonatomic,readonly) float averagePowerLevel; 
@property (nonatomic,readonly) float peakHoldLevel; 
-(float)averagePowerLevel;
-(float)peakHoldLevel;
-(void)dealloc;
-(char)isKindOfClass:(Class)arg1 ;
-(void)invalidate;
-(id)initWithConnection:(id)arg1 ;
@end

