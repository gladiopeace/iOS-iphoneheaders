/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:44:48 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSError;

@interface PLCPLDownloadContext : NSObject {

	char _completed;
	NSString* _taskIdentifier;
	NSString* _resourceTypeDescription;
	NSError* _error;
	double _progress;
	double _updateLastQueuedTime;

}

@property (retain) NSString * taskIdentifier;                       //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (retain) NSString * resourceTypeDescription;              //@synthesize resourceTypeDescription=_resourceTypeDescription - In the implementation block
@property (assign) double progress;                                 //@synthesize progress=_progress - In the implementation block
@property (assign) char completed;                                  //@synthesize completed=_completed - In the implementation block
@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (assign) double updateLastQueuedTime;                     //@synthesize updateLastQueuedTime=_updateLastQueuedTime - In the implementation block
-(char)completed;
-(void)setCompleted:(char)arg1 ;
-(double)updateLastQueuedTime;
-(void)setUpdateLastQueuedTime:(double)arg1 ;
-(NSString *)resourceTypeDescription;
-(void)dealloc;
-(id)description;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(void)setResourceTypeDescription:(NSString *)arg1 ;
-(NSError *)error;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSString *)taskIdentifier;
@end

