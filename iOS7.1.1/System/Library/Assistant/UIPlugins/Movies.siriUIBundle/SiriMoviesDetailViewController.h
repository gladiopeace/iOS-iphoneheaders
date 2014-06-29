/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>

@class SiriMoviesDetailView, SiriMoviesDetailContainerView, SiriUISnippetViewController, MPMoviePlayerController, NSString, SAMovieV2MovieDetailSnippet;

@interface SiriMoviesDetailViewController : SiriUISnippetViewController {

	SiriMoviesDetailView* _detailView;
	SiriMoviesDetailContainerView* _detailContainerView;
	SiriUISnippetViewController* _showtimesViewController;
	MPMoviePlayerController* _trailerPlayerController;
	NSString* _savedAudioSessionCategory;
	unsigned long long _savedAudioSessionCategoryOptions;

}

@property (nonatomic,retain) SAMovieV2MovieDetailSnippet * snippet; 
@property (setter=_setTrailerPlayerController:,getter=_trailerPlayerController,nonatomic,retain) MPMoviePlayerController * trailerPlayerController;                                  //@synthesize trailerPlayerController=_trailerPlayerController - In the implementation block
@property (setter=_setSavedAudioSessionCategory:,getter=_savedAudioSessionCategory,nonatomic,retain) NSString * savedAudioSessionCategory;                                           //@synthesize savedAudioSessionCategory=_savedAudioSessionCategory - In the implementation block
@property (assign,setter=_setSavedAudioSessionCategoryOptions:,getter=_savedAudioSessionCategoryOptions,nonatomic) unsigned long long savedAudioSessionCategoryOptions;              //@synthesize savedAudioSessionCategoryOptions=_savedAudioSessionCategoryOptions - In the implementation block
-(id)_trailerPlayerController;
-(void)_rotateTrailerViewIfNecessary:(id)arg1 ;
-(void)watchTrailerButtonTapped:(id)arg1 ;
-(void)rentOnItunesButtonTapped:(id)arg1 ;
-(void)_setSavedAudioSessionCategory:(id)arg1 ;
-(void)_setTrailerPlayerController:(id)arg1 ;
-(bool)_shouldPlayHighResolutionTrailer;
-(void)_setSavedAudioSessionCategoryOptions:(unsigned long long)arg1 ;
-(unsigned long long)_savedAudioSessionCategoryOptions;
-(void)_moviePlayerMediaTypesAvailable:(id)arg1 ;
-(void)_restoreAudioPlaybackCategoryAndOptions;
-(void)_updateMovieAudioPlaybackCategory;
-(id)initWithMovieDetailSnippet:(id)arg1 ;
-(void)_stopTrailer;
-(void)_moviePlayerPlaybackDidFinish:(id)arg1 ;
-(id)_savedAudioSessionCategory;
-(void)buyOnItunesButtonTapped:(id)arg1 ;
-(void)showtimesButtonTapped:(id)arg1 ;
-(void)reviewsButtonTapped:(id)arg1 ;
-(void)_startTrailer;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void).cxx_destruct;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)viewDidPresent;
@end

