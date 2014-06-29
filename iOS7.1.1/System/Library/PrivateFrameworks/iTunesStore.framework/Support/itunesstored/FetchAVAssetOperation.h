/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/DownloadStepOperation.h>

@class DownloadAsset, NSData, NSString, NSArray, Download, AVAssetDownloadSession, DownloadStepResults, NSDictionary;

@interface FetchAVAssetOperation : DownloadStepOperation {

	DownloadAsset* _asset;
	NSData* _clientAuditTokenData;
	NSString* _clientBundleIdentifier;
	NSArray* _cookies;
	Download* _download;
	AVAssetDownloadSession* _downloadSession;
	DownloadStepResults* _fetchResults;
	BOOL _isPrepared;
	NSDictionary* _purchaseBundle;
	BOOL _verifiesHash;

}

@property (retain) NSData * clientAuditTokenData; 
@property (copy) NSString * clientBundleIdentifier; 
@property (@dynamic) <FetchAVAssetOperationDelegate> * delegate; 
-(BOOL)_shouldRetryForError:(id)arg1 ;
-(void)prepareUsingDownloadsSession:(id)arg1 ;
-(id)clientBundleIdentifier;
-(id)_contentInfoDictionary;
-(void)_setPrepared:(BOOL)arg1 ;
-(void)_updateAssetWithDownloadToken:(unsigned long long)arg1 ;
-(void)_downloadCompleteNotification:(id)arg1 ;
-(void)_fileSizeAvailableNotification:(id)arg1 ;
-(void)_snapshotProgress:(id)arg1 ;
-(BOOL)_shouldResetFileForError:(id)arg1 ;
-(id)_newHashArrayWithData:(id)arg1 ;
-(void)_stopWithError:(id)arg1 ;
-(void)setClientBundleIdentifier:(id)arg1 ;
-(void)_downloadFailedNotification:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(id)clientAuditTokenData;
-(void)setClientAuditTokenData:(id)arg1 ;
@end

