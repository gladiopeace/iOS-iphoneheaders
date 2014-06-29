/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUCompletionQueryDataSource.h>

@class MPMediaItemCollection;

@interface VideosTVSeasonEpisodesDataSource : MPUCompletionQueryDataSource {

	MPMediaItemCollection* _tvSeason;

}
-(id)initWithTVSeason:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(unsigned)numberOfSections;
-(void).cxx_destruct;
-(BOOL)shouldLoadCompletionArtwork;
-(id)sectionEntities;
-(BOOL)shouldAutomaticallyLoadCompletions;
-(id)entities;
@end

