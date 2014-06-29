/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RCTrimControllerDelegate;
@class RCSavedRecording, NSString;

@interface RCTrimController : NSObject {

	bool _isTrimming;
	float _trimmingProgress;
	<RCTrimControllerDelegate>* _delegate;
	RCSavedRecording* _recording;
	NSString* _recordingPath;
	double _startTimeInterval;
	double _endTimeInterval;
	double _minTrimmedDuration;
	double _maxTrimmedDuration;
	NSString* _confirmButtonTitle;

}

@property (assign,nonatomic,__weak) <RCTrimControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) RCSavedRecording * recording;                            //@synthesize recording=_recording - In the implementation block
@property (nonatomic,readonly) NSString * recordingPath;                                //@synthesize recordingPath=_recordingPath - In the implementation block
@property (assign,nonatomic) double startTimeInterval;                                  //@synthesize startTimeInterval=_startTimeInterval - In the implementation block
@property (assign,nonatomic) double endTimeInterval;                                    //@synthesize endTimeInterval=_endTimeInterval - In the implementation block
@property (assign,nonatomic) double minTrimmedDuration;                                 //@synthesize minTrimmedDuration=_minTrimmedDuration - In the implementation block
@property (assign,nonatomic) double maxTrimmedDuration;                                 //@synthesize maxTrimmedDuration=_maxTrimmedDuration - In the implementation block
@property (nonatomic,copy) NSString * confirmButtonTitle;                               //@synthesize confirmButtonTitle=_confirmButtonTitle - In the implementation block
@property (nonatomic,readonly) bool isTrimming;                                         //@synthesize isTrimming=_isTrimming - In the implementation block
@property (nonatomic,readonly) float trimmingProgress;                                  //@synthesize trimmingProgress=_trimmingProgress - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void).cxx_destruct;
-(bool)isTrimming;
-(id)recording;
-(id)initWithSavedRecording:(id)arg1 ;
-(id)initWithRecordingPath:(id)arg1 ;
-(void)presentInWindow:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(id)recordingPath;
-(double)startTimeInterval;
-(void)setStartTimeInterval:(double)arg1 ;
-(double)endTimeInterval;
-(void)setEndTimeInterval:(double)arg1 ;
-(double)minTrimmedDuration;
-(void)setMinTrimmedDuration:(double)arg1 ;
-(double)maxTrimmedDuration;
-(void)setMaxTrimmedDuration:(double)arg1 ;
-(id)confirmButtonTitle;
-(void)setConfirmButtonTitle:(id)arg1 ;
-(float)trimmingProgress;
@end

