/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:01:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLayer;

@interface PLAVPlayerView : UIView {

	unsigned _scaleMode;

}

@property (nonatomic,retain) AVPlayer * player; 
@property (assign,nonatomic) unsigned scaleMode;                          //@synthesize scaleMode=_scaleMode - In the implementation block
@property (nonatomic,readonly) CGRect videoRect; 
@property (nonatomic,retain,readonly) AVPlayerLayer * layer; 
+(Class)layerClass;
-(void)setScaleMode:(unsigned)arg1 ;
-(void)setScaleMode:(unsigned)arg1 duration:(double)arg2 ;
-(unsigned)scaleMode;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(CGRect)videoRect;
-(AVPlayer *)player;
@end

