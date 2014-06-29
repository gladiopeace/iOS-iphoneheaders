/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <AccessibilitySettings/ASTGestureRecorderViewDataSource.h>
#import <AccessibilitySettings/ASTGestureRecorderFingerPathCollectionDelegate.h>

@protocol ASTGestureRecorderViewControllerDelegate;
@class ASTGestureRecorderStyleProvider, ASTGestureRecorderFingerPathCollection, NSMutableArray, ASTGestureRecorderView;

@interface ASTGestureRecorderViewController : UIViewController <ASTGestureRecorderViewDataSource, ASTGestureRecorderFingerPathCollectionDelegate> {

	bool _shouldPreventFurtherRecording;
	bool _trackingTouches;
	bool _inReplayMode;
	ASTGestureRecorderStyleProvider* _styleProvider;
	<ASTGestureRecorderViewControllerDelegate>* _delegate;
	ASTGestureRecorderFingerPathCollection* _fingerPathCollection;
	ASTGestureRecorderFingerPathCollection* _dynamicFingerPathCollection;
	double _trackingTouchesDidStartTimeInterval;
	unsigned long long _replayTimestampIndex;
	unsigned long long _replayTimestampsCount;
	NSMutableArray* _replayDynamicFingerPaths;

}

@property (nonatomic,retain) ASTGestureRecorderStyleProvider * styleProvider;                                   //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) <ASTGestureRecorderViewControllerDelegate> * delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ASTGestureRecorderView * gestureRecorderView; 
@property (getter=isEmpty,nonatomic,readonly) bool empty; 
@property (nonatomic,retain) ASTGestureRecorderFingerPathCollection * fingerPathCollection;                     //@synthesize fingerPathCollection=_fingerPathCollection - In the implementation block
@property (nonatomic,retain) ASTGestureRecorderFingerPathCollection * dynamicFingerPathCollection;              //@synthesize dynamicFingerPathCollection=_dynamicFingerPathCollection - In the implementation block
@property (assign,nonatomic) bool shouldPreventFurtherRecording;                                                //@synthesize shouldPreventFurtherRecording=_shouldPreventFurtherRecording - In the implementation block
@property (assign,getter=isTrackingTouches,nonatomic) bool trackingTouches;                                     //@synthesize trackingTouches=_trackingTouches - In the implementation block
@property (assign,nonatomic) double trackingTouchesDidStartTimeInterval;                                        //@synthesize trackingTouchesDidStartTimeInterval=_trackingTouchesDidStartTimeInterval - In the implementation block
@property (assign,getter=isInReplayMode,nonatomic) bool inReplayMode;                                           //@synthesize inReplayMode=_inReplayMode - In the implementation block
@property (assign,nonatomic) unsigned long long replayTimestampIndex;                                           //@synthesize replayTimestampIndex=_replayTimestampIndex - In the implementation block
@property (assign,nonatomic) unsigned long long replayTimestampsCount;                                          //@synthesize replayTimestampsCount=_replayTimestampsCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * replayDynamicFingerPaths;                                         //@synthesize replayDynamicFingerPaths=_replayDynamicFingerPaths - In the implementation block
-(void)reloadAllFingerPaths;
-(void)preventFurtherRecording;
-(unsigned long long)replayTimestampsCount;
-(bool)isTrackingTouches;
-(void)_clearWeakReferencesWithOutlets;
-(id)fingerPathCollection;
-(id)dynamicFingerPathCollection;
-(void)deleteAllFingerPaths;
-(void)setFingerPathCollection:(id)arg1 ;
-(unsigned long long)replayTimestampIndex;
-(bool)shouldPreventFurtherRecording;
-(void)setReplayTimestampIndex:(unsigned long long)arg1 ;
-(void)setDynamicFingerPathCollection:(id)arg1 ;
-(void)setReplayDynamicFingerPaths:(id)arg1 ;
-(void)replayRecordedGesture;
-(void)setInReplayMode:(bool)arg1 ;
-(void)setReplayTimestampsCount:(unsigned long long)arg1 ;
-(id)gestureRecorderView;
-(id)replayDynamicFingerPaths;
-(void)_exitReplayMode;
-(unsigned long long)numberOfDynamicFingerPathsInGestureRecorderView:(id)arg1 ;
-(id)recordedGesturePropertyListRepresentationWithName:(id)arg1 ;
-(unsigned long long)numberOfStaticFingerPathsInGestureRecorderView:(id)arg1 ;
-(id)gestureRecorderView:(id)arg1 staticFingerPathAtIndex:(unsigned long long)arg2 ;
-(id)gestureRecorderView:(id)arg1 dynamicFingerPathAtIndex:(unsigned long long)arg2 ;
-(void)setShouldPreventFurtherRecording:(bool)arg1 ;
-(void)setTrackingTouches:(bool)arg1 ;
-(void)_didFinishReplayingRecordedGesture;
-(void)_didStartRecordingAtomicFingerPath;
-(void)setTrackingTouchesDidStartTimeInterval:(double)arg1 ;
-(void)_updateDynamicFingerPathsWithTouches:(id)arg1 ;
-(void)_freezeAllDynamicFingerPaths;
-(double)trackingTouchesDidStartTimeInterval;
-(double)_maximumDurationOfRecordedGesture;
-(void)_didStopRecordingAtomicFingerPath;
-(void)hideStaticView;
-(void)gestureRecorderFingerPathCollection:(id)arg1 didInsertFingerPathAtIndex:(unsigned long long)arg2 ;
-(void)gestureRecorderFingerPathCollection:(id)arg1 didUpdateFingerPathAtIndex:(unsigned long long)arg2 ;
-(bool)isInReplayMode;
-(void)_advanceReplay;
-(void)_releaseOutlets;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(bool)isEmpty;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)loadView;
@end

