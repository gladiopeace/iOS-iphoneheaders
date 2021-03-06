/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol NSURLSessionDelegate, OS_dispatch_queue;
#import <CFNetwork/CFNetwork-Structs.h>
@class __NSCFURLSessionConfiguration, NSOperationQueue, NSString, NSObject, __NSCFSessionBridge;

@interface __NSCFURLSession : NSObject {

	__NSCFURLSessionConfiguration* _nsCFConfig;
	BOOL _invalid;
	NSOperationQueue* _delegateQueue;
	<NSURLSessionDelegate>* _delegate;
	NSString* _sessionDescription;
	NSObject<OS_dispatch_queue>* _workQueue;
	__NSCFSessionBridge* _connectionSession;
	__NSCFURLSession* _extraRetain;
	NSOperationQueue* _realDelegateQueue;

}

@property (readonly) NSOperationQueue * delegateQueue;                       //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) <NSURLSessionDelegate> * delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (copy) __NSCFURLSessionConfiguration * configuration; 
@property (copy) NSString * sessionDescription;                              //@synthesize sessionDescription=_sessionDescription - In the implementation block
@property (retain) NSObject<OS_dispatch_queue> * workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (retain) __NSCFSessionBridge * connectionSession;                  //@synthesize connectionSession=_connectionSession - In the implementation block
@property (assign) BOOL invalid;                                             //@synthesize invalid=_invalid - In the implementation block
@property (retain) __NSCFURLSession * extraRetain;                           //@synthesize extraRetain=_extraRetain - In the implementation block
@property (retain) NSOperationQueue * realDelegateQueue;                     //@synthesize realDelegateQueue=_realDelegateQueue - In the implementation block
+(id)sessionWithConfiguration:(id)arg1 ;
+(id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
+(const ClassicConnectionSessionRef)defaultClassicConnectionSession;
+(id)sharedSession;
+(void)_releaseProcessAssertionForSessionIdentifier:(id)arg1 ;
+(void)_sendPendingCallbacksForSessionIdentifier:(id)arg1 ;
-(BOOL)can_delegate_dataTask_didReceiveResponse;
-(void)delegate_dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(BOOL)can_delegate_dataTask_didBecomeDownloadTask;
-(void)delegate_dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2 ;
-(BOOL)can_delegate_task_willPerformHTTPRedirection;
-(void)delegate_task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(BOOL)can_delegate_didReceiveChallenge;
-(void)delegate_didReceiveChallenge:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(BOOL)can_delegate_task_didReceiveChallenge;
-(void)delegate_task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(BOOL)can_delegate_dataTask_willCacheResponse;
-(void)delegate_dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)addDelegateBlock:(/*^block*/ id)arg1 ;
-(BOOL)can_delegate_task_didCompleteWithError;
-(void)delegate_task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(BOOL)can_delegate_dataTask_didReceiveData;
-(void)delegate_dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(BOOL)can_delegate_task_needNewBodyStream;
-(void)delegate_task:(id)arg1 needNewBodyStream:(/*^block*/ id)arg2 ;
-(BOOL)can_delegate_task_didSendBodyData;
-(void)delegate_task:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4 ;
-(BOOL)can_delegate_downloadTaskNeedsDownloadDirectory;
-(id)delegate_downloadTaskNeedsDownloadDirectory:(id)arg1 ;
-(BOOL)can_delegate_downloadTask_didWriteData;
-(void)delegate_downloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(BOOL)can_delegate_downloadTask_didFinishDownloadingToURL;
-(void)delegate_downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(BOOL)can_delegate_downloadTask_didReceiveResponse;
-(void)delegate_downloadTask:(id)arg1 didReceiveResponse:(id)arg2 ;
-(BOOL)can_delegate_downloadTask_didResumeAtOffset;
-(void)delegate_downloadTask:(id)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3 ;
-(BOOL)can_delegate_didFinishEventsForBackgroundURLSession;
-(void)delegate_didFinishEventsForBackgroundURLSession;
-(BOOL)isBackgroundSession;
-(id)connectionSession;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)_onqueue_completeInvalidationFinal;
-(void)_onqueue_completeInvalidation:(BOOL)arg1 ;
-(void)_onqueue_withTasks:(/*^block*/ id)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(id)downloadTaskWithRequest:(id)arg1 ;
-(id)downloadTaskWithRequest:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(id)getConfiguration;
-(void)invalidateAndCancel;
-(void)finishTasksAndInvalidate;
-(void)resetWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)flushWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)getTasksWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)dataTaskWithHTTPGetRequest:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(id)dataTaskWithHTTPGetRequest:(id)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 ;
-(id)dataTaskWithURL:(id)arg1 ;
-(id)dataTaskWithURL:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 ;
-(id)uploadTaskWithStreamedRequest:(id)arg1 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(id)downloadTaskWithURL:(id)arg1 ;
-(id)downloadTaskWithResumeData:(id)arg1 ;
-(id)downloadTaskWithURL:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(id)downloadTaskWithResumeData:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)setConnectionSession:(id)arg1 ;
-(BOOL)invalid;
-(void)setInvalid:(BOOL)arg1 ;
-(id)extraRetain;
-(void)setExtraRetain:(id)arg1 ;
-(id)realDelegateQueue;
-(void)setRealDelegateQueue:(id)arg1 ;
-(id)delegateQueue;
-(id)sessionDescription;
-(void)setSessionDescription:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)configuration;
-(void)setConfiguration:(id)arg1 ;
-(id)workQueue;
-(void)setWorkQueue:(id)arg1 ;
@end

