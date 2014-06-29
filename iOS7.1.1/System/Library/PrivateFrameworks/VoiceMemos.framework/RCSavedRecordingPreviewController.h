/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCAVPreviewController.h>

@class RCSavedRecording;

@interface RCSavedRecordingPreviewController : RCAVPreviewController {

	bool _postPrepareShouldPlay;
	bool _preparing;
	bool _preparingToPlay;
	SCD_Struct_RC0 _postPrepareTimeRange;
	double _postPrepareStartTime;
	RCSavedRecording* _savedRecording;

}

@property (nonatomic,retain) RCSavedRecording * savedRecording;              //@synthesize savedRecording=_savedRecording - In the implementation block
+(id)sharedRecordingPreviewController;
-(void)setCurrentTime:(double)arg1 ;
-(void).cxx_destruct;
-(void)stop;
-(void)pause;
-(void)playOrRestart;
-(void)initializeOutputRouteCategory;
-(void)playWithTimeRange:(SCD_Struct_RC0)arg1 startTime:(double)arg2 ;
-(void)_updatePreparingToPlay;
-(void)switchBackToOutputRouteCategory;
-(void)setSavedRecording:(id)arg1 ;
-(id)savedRecording;
@end

