/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSURLConnectionInternal.h>
#import <Foundation/NSURLConnectionRequired.h>
#import <Foundation/SSDownloadManagerObserver.h>
#import <Foundation/SSDownloadHandlerDelegate.h>

@class NSMutableArray, NSCountedSet, SSDownloadHandler, NSAsyncSSDownloadManager, NSTimer;

@interface NSURLConnectionInternalBackgroundDownload : NSURLConnectionInternal <NSURLConnectionRequired, SSDownloadManagerObserver, SSDownloadHandlerDelegate> {

	CFRunLoopSourceRef _source;
	NSMutableArray* _pendingOps;
	NSCountedSet* _runloops;
	SSDownloadHandler* _handler;
	NSAsyncSSDownloadManager* _manager;
	long long _downloadIdent;
	long long _ctLast;
	bool _terminated;
	NSTimer* _deferredStartTimer;

}
+(id)sharedDownloadManagerForMediaKind:(id)arg1 persistenceIdentifier:(id)arg2 ;
+(void)_enableLogging;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)initWithInfo:(const InternalInit*)arg1 ;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)invokeForDelegate:(/*^block*/ id)arg1 ;
-(void)setDelegateQueue:(id)arg1 ;
-(void)_updateDownloadState:(id)arg1 ;
-(void)_invokeInvocation:(id)arg1 withConnection:(id)arg2 ;
-(void)_preTerminalInvocation:(id)arg1 ;
-(void)_postTerminalInvocation:(id)arg1 ;
-(void)_sendTerminalErrorToDelegate:(id)arg1 ;
-(void)setHandlerForDownload:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_managerFailedToStartInTime;
-(void)_createNewDownload;
-(void)_updateClientWithCurrentWrites:(id)arg1 ;
-(void)_sendTerminalDidFinishToDelegate:(id)arg1 ;
-(void)downloadHandlerDidDisconnect:(id)arg1 ;
-(void)downloadHandler:(id)arg1 cancelSession:(id)arg2 ;
-(bool)downloadHandler:(id)arg1 pauseSession:(id)arg2 ;
-(void)downloadHandler:(id)arg1 handleAuthenticationSession:(id)arg2 ;
-(void)_sourcePerform;
-(long long)_getDownloadIdent;
-(void)dealloc;
-(id)description;
-(void)cancel;
-(void)start;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)_invalidate;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
@end

