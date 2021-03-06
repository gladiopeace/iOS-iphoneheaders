/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaQueryQueueFeeder.h>

@interface MusicQueryQueueFeeder : MPMediaQueryQueueFeeder
-(id)mix;
-(void)setMix:(id)arg1 ;
-(id)playbackInfoAtIndex:(unsigned long long)arg1 ;
-(bool)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(bool)arg2 ;
-(Class)itemClass;
-(id)errorResolverForItem:(id)arg1 ;
-(unsigned long long)realRepeatType;
-(unsigned long long)realShuffleType;
-(id)init;
-(bool)_reloadWithPlaybackContext:(id)arg1 keepPlayingCurrentItemIfPossible:(bool)arg2 ;
@end

