/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:26 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVVideoLayer
@property (assign,nonatomic) int videoLayerGravity; 
@property (getter=isReadyForDisplay,nonatomic,readonly) char readyForDisplay; 
@property (nonatomic,readonly) CGRect videoRect; 
@required
-(CGRect)videoRect;
-(void)setVideoLayerGravity:(int)arg1;
-(void)setPlayerController:(id)arg1;
-(int)videoLayerGravity;
-(char)isReadyForDisplay;

@end

