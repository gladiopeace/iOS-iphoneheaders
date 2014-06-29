/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPViewController.h>

@interface MPAbstractAlternateTracksViewController : MPViewController {

	unsigned long long _selectedTracks[2];
	unsigned long long _previousTracks[2];

}
-(id)alternateTracks;
-(void)saveChanges;
-(unsigned long long)countOfGroups;
-(id)arrayForGroup:(long long)arg1 ;
-(unsigned long long)indexForGroup:(long long)arg1 ;
-(unsigned long long)typeForGroup:(long long)arg1 ;
-(void)addLoadingUI;
-(void)removeLoadingUI;
-(void)_alternateTypesChangedNotification:(id)arg1 ;
-(bool)_hasAudioGroup;
-(bool)_hasSubtitlesGroup;
-(void)dealloc;
-(void)reloadData;
-(id)init;
@end

