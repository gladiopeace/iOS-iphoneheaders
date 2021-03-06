/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncEmergencyTask.h>

@protocol CPLEngineTransportRemoveLibraryTask;
@interface CPLRemoveCloudLibraryTask : CPLEngineSyncEmergencyTask {

	id<CPLEngineTransportRemoveLibraryTask> _removeLibraryTask;

}
+(BOOL)shouldCoalesceTasks;
+(id)taskIdentifier;
-(void)launch;
-(void)cancel;
-(unsigned long long)priority;
-(BOOL)shouldStopSyncSession;
@end

