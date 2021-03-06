/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <cloudphotod/CPLCloudKitTransportTask.h>
#import <cloudphotod/CPLEngineTransportDownloadBatchTask.h>

@class CKServerChangeToken, NSURL, NSString;

@interface CPLCloudKitDownloadBatchTask : CPLCloudKitTransportTask <CPLEngineTransportDownloadBatchTask> {

	/*^block*/id _completionHandler;
	CKServerChangeToken* _syncAnchor;
	NSURL* _destinationURL;

}

@property (nonatomic,copy,readonly) CKServerChangeToken * syncAnchor;              //@synthesize syncAnchor=_syncAnchor - In the implementation block
@property (nonatomic,copy) NSURL * destinationURL;                                 //@synthesize destinationURL=_destinationURL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char foreground; 
-(id)initForSyncAnchor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(void)run;
-(CKServerChangeToken *)syncAnchor;
@end

