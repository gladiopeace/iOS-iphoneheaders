/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MSPowerBudgetDelegate, OS_dispatch_queue;
@class NSString, MSPBTimerContext, NSObject;

@interface MSPowerBudget : NSObject {

	bool _workQueueIsFileTransferAllowed;
	bool _workQueueIsExternalPowered;
	bool _workQueueIsForeground;
	<MSPowerBudgetDelegate>* _delegate;
	double _maxActiveTimeAfterPush;
	double _maxActiveTimeAfterLossOfForeground;
	double _maxActiveTimeAfterGlobalResetSync;
	NSString* _focusAlbumGUID;
	NSString* _focusAssetCollectionGUID;
	NSString* _personID;
	MSPBTimerContext* _workQueuePushTimerContext;
	MSPBTimerContext* _workQueuePostForegroundTimerContext;
	MSPBTimerContext* _workQueueGlobalResetSyncTimerContext;
	NSObject<OS_dispatch_queue>* _workQueue;

}

@property (assign,nonatomic,__weak) <MSPowerBudgetDelegate> * delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double maxActiveTimeAfterPush;                                                            //@synthesize maxActiveTimeAfterPush=_maxActiveTimeAfterPush - In the implementation block
@property (assign,nonatomic) double maxActiveTimeAfterLossOfForeground;                                                //@synthesize maxActiveTimeAfterLossOfForeground=_maxActiveTimeAfterLossOfForeground - In the implementation block
@property (assign,nonatomic) double maxActiveTimeAfterGlobalResetSync;                                                 //@synthesize maxActiveTimeAfterGlobalResetSync=_maxActiveTimeAfterGlobalResetSync - In the implementation block
@property (nonatomic,retain) NSString * focusAlbumGUID;                                                                //@synthesize focusAlbumGUID=_focusAlbumGUID - In the implementation block
@property (nonatomic,retain) NSString * focusAssetCollectionGUID;                                                      //@synthesize focusAssetCollectionGUID=_focusAssetCollectionGUID - In the implementation block
@property (nonatomic,retain) NSString * personID;                                                                      //@synthesize personID=_personID - In the implementation block
@property (getter=isFileTransferAllowed,nonatomic,readonly) bool fileTransferAllowed; 
@property (getter=hasForegroundFocus,nonatomic,readonly) bool foregroundFocus; 
@property (nonatomic,readonly) bool hasActiveTimers; 
@property (assign,setter=workQueueSetFileTransferAllowed:,nonatomic) bool workQueueIsFileTransferAllowed;              //@synthesize workQueueIsFileTransferAllowed=_workQueueIsFileTransferAllowed - In the implementation block
@property (assign,setter=workQueueSetExternalPowered:,nonatomic) bool workQueueIsExternalPowered;                      //@synthesize workQueueIsExternalPowered=_workQueueIsExternalPowered - In the implementation block
@property (assign,setter=workQueueSetForeground:,nonatomic) bool workQueueIsForeground;                                //@synthesize workQueueIsForeground=_workQueueIsForeground - In the implementation block
@property (nonatomic,retain) MSPBTimerContext * workQueuePushTimerContext;                                             //@synthesize workQueuePushTimerContext=_workQueuePushTimerContext - In the implementation block
@property (nonatomic,retain) MSPBTimerContext * workQueuePostForegroundTimerContext;                                   //@synthesize workQueuePostForegroundTimerContext=_workQueuePostForegroundTimerContext - In the implementation block
@property (nonatomic,retain) MSPBTimerContext * workQueueGlobalResetSyncTimerContext;                                  //@synthesize workQueueGlobalResetSyncTimerContext=_workQueueGlobalResetSyncTimerContext - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * workQueue;                                                  //@synthesize workQueue=_workQueue - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void).cxx_destruct;
-(id)workQueue;
-(void)setFocusAlbumGUID:(id)arg1 ;
-(void)setFocusAssetCollectionGUID:(id)arg1 ;
-(void)shutDown;
-(id)focusAssetCollectionGUID;
-(void)setWorkQueue:(id)arg1 ;
-(id)focusAlbumGUID;
-(void)workQueueSetPushTimerDate:(id)arg1 ;
-(void)workQueueSetPostForegroundTimerDate:(id)arg1 ;
-(void)workQueueSetGlobalResetSyncTimerDate:(id)arg1 ;
-(void)workQueueRecomputeFileTransferAllowed;
-(id)workQueuePushTimerContext;
-(void)setWorkQueuePushTimerContext:(id)arg1 ;
-(void)workQueueCommitPersistedValues;
-(id)workQueuePostForegroundTimerContext;
-(void)setWorkQueuePostForegroundTimerContext:(id)arg1 ;
-(id)workQueueGlobalResetSyncTimerContext;
-(void)setWorkQueueGlobalResetSyncTimerContext:(id)arg1 ;
-(bool)workQueueIsExternalPowered;
-(bool)workQueueIsForeground;
-(void)setIsFileTransferAllowed:(bool)arg1 ;
-(double)workQueueMaxActiveTimeAfterPush;
-(void)workQueueSetForeground:(bool)arg1 ;
-(double)workQueueMaxActiveTimeAfterLossOfForeground;
-(double)workQueueMaxActiveTimeAfterGlobalResetSync;
-(void)workQueueSetExternalPowered:(bool)arg1 ;
-(double)maxActiveTimeAfterPush;
-(void)setMaxActiveTimeAfterPush:(double)arg1 ;
-(double)maxActiveTimeAfterGlobalResetSync;
-(void)setMaxActiveTimeAfterGlobalResetSync:(double)arg1 ;
-(double)maxActiveTimeAfterLossOfForeground;
-(void)setMaxActiveTimeAfterLossOfForeground:(double)arg1 ;
-(bool)isFileTransferAllowed;
-(bool)hasForegroundFocus;
-(bool)hasActiveTimers;
-(void)workQueueSetIsFileTransferAllowed:(bool)arg1 ;
-(void)didReceivePushNotification;
-(void)didBeginForegroundFocus;
-(void)didEndForegroundFocus;
-(void)didReceiveGlobalResetSync;
-(void)didBeginExternalPower;
-(void)didEndExternalPower;
-(void)_postForegroundTimerDidExpire:(id)arg1 ;
-(void)_globalResetSyncTimerDidExpire:(id)arg1 ;
-(bool)workQueueIsFileTransferAllowed;
-(void)workQueueSetFileTransferAllowed:(bool)arg1 ;
-(id)personID;
-(void)setPersonID:(id)arg1 ;
@end

