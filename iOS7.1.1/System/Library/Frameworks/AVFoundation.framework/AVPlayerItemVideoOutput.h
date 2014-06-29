/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemVideoOutputInternal;

@interface AVPlayerItemVideoOutput : AVPlayerItemOutput {

	AVPlayerItemVideoOutputInternal* _videoOutputInternal;

}

@property (nonatomic,readonly) <AVPlayerItemOutputPullDelegate> * delegate; 
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * delegateQueue; 
-(bool)suppressesPlayerRendering;
-(OpaqueFigVisualContextRef)_visualContext;
-(void)_setTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)_attachToPlayerItem:(id)arg1 ;
-(void)_detachFromPlayerItem;
-(id)initWithPixelBufferAttributes:(id)arg1 ;
-(void)_dispatchOutputMediaDataWillChange;
-(bool)hasNewPixelBufferForItemTime:(SCD_Struct_CM4)arg1 ;
-(void)_stopObservingTimebaseNotificationsForTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)_startObservingTimebaseNotificationsForTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)requestNotificationOfMediaDataChangeWithAdvanceInterval:(double)arg1 ;
-(CVBufferRef)copyPixelBufferForItemTime:(SCD_Struct_CM4)arg1 itemTimeForDisplay:(SCD_Struct_CM4*)arg2 ;
-(void)_setTagBuffersWithConversionInformation;
-(void)_dispatchOutputSequenceWasFlushed;
-(id)delegateQueue;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setSuppressesPlayerRendering:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(void)finalize;
@end

