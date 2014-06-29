/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUCompletionQueryDataSource.h>

@interface MusicQueryDataSource : MPUCompletionQueryDataSource
-(void)dealloc;
-(id)initWithQuery:(id)arg1 entityType:(long long)arg2 ;
-(bool)entityIsNowPlayingAtIndex:(unsigned long long)arg1 ;
-(id)playbackContextForIndex:(unsigned long long)arg1 ;
-(id)entityCountFormat;
-(bool)_updateQueryPredicatesAndOrdering;
-(bool)queryIsNowPlayingAtIndex:(unsigned long long)arg1 ;
-(id)_queryForNowPlayingComparisonAtIndex:(unsigned long long)arg1 ;
-(void)_defaultsDidChangeNotification;
@end

