/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIWindow.h>

@class MPMovieTVHUDView, MPVideoView;

@interface MPTVOutWindow : UIWindow {

	MPMovieTVHUDView* _hudView;
	MPVideoView* _videoView;

}
-(id)videoView;
-(void)_playbackStateChanged:(id)arg1 ;
-(bool)setVideoView:(id)arg1 ;
-(bool)_setupTargetScreen:(id)arg1 ;
-(void)_screenModeDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
@end

