/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURLDownload, NSString;

@interface WebUIDownloadManager : NSObject {

	id _delegate;
	NSURLDownload* _download;
	NSString* _downloadPath;

}
-(void)download:(id)arg1 didFailWithError:(id)arg2 ;
-(void)downloadDidBegin:(id)arg1 ;
-(void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 ;
-(void)downloadDidFinish:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)_cleanUp;
-(void)_downloadDidFail:(id)arg1 ;
@end
