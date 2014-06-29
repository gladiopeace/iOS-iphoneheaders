/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

@class AVAssetTrackInternal, AVAsset;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVAssetTrackInternal* _track;

}

@property (nonatomic,readonly) AVAsset * asset; 
@property (nonatomic,readonly) int trackID; 
+(id)mediaTypesForMediaCharacteristics;
+(id)keyPathsForValuesAffectingTimeRange;
-(bool)_hasMultipleEdits;
-(bool)_hasScaledEdits;
-(float)preferredVolume;
-(int)naturalTimeScale;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(long long)statusOfValueForKey:(id)arg1 ;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 ;
-(id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2 ;
-(bool)hasMediaCharacteristics:(id)arg1 ;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(int)playabilityValidationResult;
-(bool)isSelfContained;
-(long long)totalSampleDataLength;
-(id)mediaCharacteristics;
-(float)estimatedDataRate;
-(id)extendedLanguageTag;
-(id)segments;
-(id)segmentForTrackTime:(SCD_Struct_CM4)arg1 ;
-(SCD_Struct_CM4)samplePresentationTimeForTrackTime:(SCD_Struct_CM4)arg1 ;
-(bool)isExcludedFromAutoselectionInTrackGroup;
-(id)associatedTracksOfType:(id)arg1 ;
-(id)_firstAssociatedTrackWithAssociationType:(id)arg1 ;
-(id)_pairedForcedOnlySubtitlesTrack;
-(id)_trackReferences;
-(id)_assetTrackInspector;
-(bool)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned)arg1 flagsMask:(unsigned)arg2 ;
-(SCD_Struct_CM4)minFrameDuration;
-(id)_fallbackTrack;
-(id)_followingTrackAmongTracks:(id)arg1 ;
-(id)_mostCloselyAssociatedTrackAmongTracks:(id)arg1 ;
-(id)availableTrackAssociationTypes;
-(bool)hasMediaCharacteristic:(id)arg1 ;
-(int)trackID;
-(bool)isPlayable;
-(id)loudnessInfo;
-(void)dealloc;
-(long long)layer;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)isEnabled;
-(id)locale;
-(CGSize)dimensions;
-(id)asset;
-(id)languageCode;
-(CGSize)naturalSize;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)formatDescriptions;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(float)nominalFrameRate;
-(SCD_Struct_CM5)timeRange;
-(bool)hasProtectedContent;
-(id)metadata;
-(CGAffineTransform)preferredTransform;
-(id)commonMetadata;
-(id)mediaType;
-(void)finalize;
@end

