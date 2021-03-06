/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VideoCaptureProtocol
@optional
-(int)setCamera:(unsigned)arg1;
-(int)getCamera:(unsigned*)arg1;
-(int)setCameraType:(int)arg1;
-(int)getCameraType:(int*)arg1;
-(int)setFrameRatePercentage:(double)arg1 newFramerate:(int*)arg2;
-(int)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(bool)arg3;

@required
-(int)startPreview;
-(int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
-(int)stop:(bool)arg1;
-(int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
-(int)copyColorInfo:(const _CFDictionary*)arg1;
-(bool)isPreviewRunning;
@end

