/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <mediaremoted/MRDNowPlayingDataSource.h>

@class NSString;

@interface MRDMediaServerNowPlayingDataSource : MRDNowPlayingDataSource {

	NSString* _cachedNowPlayingAppDisplayID;
	int _cachedNowPlayingAppPID;
	BOOL _cachedNowPlayingAppIsPlaying;

}
-(id)nowPlayingApplicationDisplayID;
-(int)nowPlayingApplicationPID;
-(BOOL)nowPlayingApplicationIsPlaying;
-(void)_registerAVSystemControllerNotifications;
-(void)_unregisterAVSystemControllerNotifications;
-(id)_mediaServerController;
-(void)_nowPlayingAppDidChangeNotification:(id)arg1 ;
-(void)_nowPlayingAppIsPlayingDidChangeNotification:(id)arg1 ;
-(void)_mediaServerDiedNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

