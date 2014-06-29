/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaEntity.h>

@class NSString, MPMediaItemArtwork, NSDate, NSArray;

@interface MPMediaItem : MPMediaEntity

@property (nonatomic,readonly) bool mediaTypeCanSeedGenius; 
@property (nonatomic,readonly) NSString * albumArtist; 
@property (nonatomic,readonly) NSString * albumTitle; 
@property (nonatomic,readonly) NSString * artist; 
@property (nonatomic,readonly) MPMediaItemArtwork * artwork; 
@property (nonatomic,readonly) double bookmarkTime; 
@property (nonatomic,readonly) NSString * composer; 
@property (nonatomic,readonly) NSString * genre; 
@property (nonatomic,readonly) bool isRental; 
@property (nonatomic,readonly) bool isITunesU; 
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) double playbackDuration; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double stopTime; 
@property (nonatomic,readonly) NSString * podcastTitle; 
@property (assign,nonatomic) unsigned long long rating; 
@property (nonatomic,readonly) NSDate * releaseDate; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) unsigned long long year; 
@property (assign,nonatomic) unsigned long long skipCount; 
@property (assign,nonatomic) unsigned long long playCount; 
@property (assign,nonatomic) unsigned long long skipCountSinceSync; 
@property (assign,nonatomic) unsigned long long playCountSinceSync; 
@property (nonatomic,copy) NSDate * lastPlayedDate; 
@property (nonatomic,copy) NSDate * lastSkippedDate; 
@property (nonatomic,copy) NSDate * dateAccessed; 
@property (assign,nonatomic) bool hasBeenPlayed; 
@property (nonatomic,readonly) bool rememberBookmarkTime; 
@property (nonatomic,readonly) unsigned long long albumTrackNumber; 
@property (nonatomic,readonly) unsigned long long discNumber; 
@property (nonatomic,readonly) double effectiveStopTime; 
@property (nonatomic,readonly) NSString * effectiveAlbumArtist; 
@property (nonatomic,readonly) bool isUsableAsRepresentativeItem; 
@property (nonatomic,readonly) NSArray * chapters; 
+(id)propertyForSAMPSearchProperty:(id)arg1 ;
+(id)SAMPSearchPropertyForProperty:(id)arg1 ;
+(id)MPSD_mediaItemPropertiesForDownloadability;
+(id)titlePropertyForGroupingType:(long long)arg1 ;
+(void)_createFilterableDictionary;
+(bool)canFilterByProperty:(id)arg1 ;
+(id)persistentIDPropertyForGroupingType:(long long)arg1 ;
+(bool)_isValidItemProperty:(id)arg1 ;
+(id)fallbackTitlePropertyForGroupingType:(long long)arg1 ;
+(id)dynamicProperties;
-(id)MPU_directStoreURL;
-(id)MPU_containerLibraryLinkURL;
-(id)MPU_libraryLinkKind;
-(id)MPU_libraryLinkArtist;
-(id)MPU_libraryLinkPlaylistName;
-(id)MPU_libraryLinkURL:(bool)arg1 ;
-(id)MPU_libraryLinkURL;
-(id)SAMPMediaItemRepresentation;
-(id)SAMPMediaEntityRepresentation;
-(bool)MPSD_isDownloadable;
-(bool)MPSD_isDownloadInProgress;
-(bool)mediaTypeCanSeedGenius;
-(id)representativeItem;
-(double)stopTime;
-(void)setRating:(unsigned long long)arg1 ;
-(id)artist;
-(id)albumArtist;
-(unsigned long long)albumTrackNumber;
-(id)composer;
-(unsigned long long)discNumber;
-(id)genre;
-(double)bookmarkTime;
-(bool)isITunesU;
-(id)artwork;
-(unsigned long long)rating;
-(id)initWithPersistentID:(unsigned long long)arg1 ;
-(id)_directStoreURL;
-(id)_libraryLinkURL;
-(double)playbackDuration;
-(id)chaptersOfType:(long long)arg1 ;
-(id)_libraryLinkKind;
-(id)_libraryLinkArtist;
-(id)_libraryLinkPlaylistName;
-(Class)itemArrayCoderPIDDataCodingClass;
-(id)valuesForProperties:(id)arg1 ;
-(bool)didSkipWithPlayedToTime:(double)arg1 ;
-(void)markNominalAmountHasBeenPlayed;
-(void)noteWasPlayedToTime:(double)arg1 skipped:(bool)arg2 ;
-(void)incrementSkipCount;
-(void)incrementPlayCountForPlayingToEnd;
-(bool)incrementPlayCountForStopTime:(double)arg1 ;
-(void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(/*^block*/ id)arg1 ;
-(id)_bestStoreURL;
-(id)albumTitle;
-(bool)isRental;
-(double)effectiveStopTime;
-(id)podcastTitle;
-(id)releaseDate;
-(id)predicateForProperty:(id)arg1 ;
-(unsigned long long)playCount;
-(void)setPlayCount:(unsigned long long)arg1 ;
-(unsigned long long)playCountSinceSync;
-(void)setPlayCountSinceSync:(unsigned long long)arg1 ;
-(id)lastPlayedDate;
-(void)setLastPlayedDate:(id)arg1 ;
-(id)dateAccessed;
-(void)setDateAccessed:(id)arg1 ;
-(unsigned long long)skipCount;
-(void)setSkipCount:(unsigned long long)arg1 ;
-(unsigned long long)skipCountSinceSync;
-(void)setSkipCountSinceSync:(unsigned long long)arg1 ;
-(id)lastSkippedDate;
-(void)setLastSkippedDate:(id)arg1 ;
-(bool)hasBeenPlayed;
-(void)setHasBeenPlayed:(bool)arg1 ;
-(bool)rememberBookmarkTime;
-(id)chapterOfType:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)chapterOfType:(long long)arg1 atTime:(double)arg2 ;
-(unsigned long long)countOfChaptersOfType:(long long)arg1 ;
-(void)gaplessHeuristicInfo:(unsigned*)arg1 durationInSamples:(unsigned long long*)arg2 lastPacketsResync:(unsigned long long*)arg3 encodingDelay:(unsigned*)arg4 encodingDrain:(unsigned*)arg5 ;
-(bool)isUsableAsRepresentativeItem;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)didReceiveMemoryWarning;
-(id)title;
-(unsigned long long)year;
-(double)startTime;
-(id)valueForProperty:(id)arg1 ;
-(bool)existsInLibrary;
-(id)effectiveAlbumArtist;
-(id)chapters;
-(void)populateLocationPropertiesWithPath:(id)arg1 ;
-(unsigned long long)mediaType;
@end

