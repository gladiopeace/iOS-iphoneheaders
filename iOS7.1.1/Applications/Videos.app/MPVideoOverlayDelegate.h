/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPVideoOverlayDelegate <NSObject>
@optional
-(void)overlayDidBeginScrubbing:(id)arg1;
-(void)overlayDidEndScrubbing:(id)arg1;
-(void)overlayTappedBackButton:(id)arg1;
-(void)overlayTappedFullscreenButton:(id)arg1;
-(void)overlay:(id)arg1 didBeginUserEvent:(int)arg2;
-(void)overlay:(id)arg1 didCancelUserEvent:(int)arg2;
-(void)overlay:(id)arg1 didEndUserEvent:(int)arg2;
-(void)overlayTappedScaleModeButton:(id)arg1;
-(void)overlayDidDismissAlternateTracksPopover:(id)arg1;
@end

