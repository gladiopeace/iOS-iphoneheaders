/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface ADResourceDownloader : NSObject {

	BOOL _allowsConcurrentDownloads;
	NSMutableArray* _activeJobs;
	NSMutableArray* _downloadQueue;

}

@property (assign,nonatomic) BOOL allowsConcurrentDownloads;              //@synthesize allowsConcurrentDownloads=_allowsConcurrentDownloads - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeJobs;                 //@synthesize activeJobs=_activeJobs - In the implementation block
@property (nonatomic,retain) NSMutableArray * downloadQueue;              //@synthesize downloadQueue=_downloadQueue - In the implementation block
-(void)downloadRequestJob:(id)arg1 ;
-(id)downloadQueue;
-(id)activeJobs;
-(BOOL)allowsConcurrentDownloads;
-(void)_processNextJob;
-(id)jobForConnection:(id)arg1 ;
-(void)setAllowsConcurrentDownloads:(BOOL)arg1 ;
-(void)insertJobBarrier:(/*^block*/ id)arg1 ;
-(void)cancelRequestForURL:(id)arg1 ;
-(void)setActiveJobs:(id)arg1 ;
-(void)setDownloadQueue:(id)arg1 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)cancelRequest:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)cancelAllRequests;
@end

