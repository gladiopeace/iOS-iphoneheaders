/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@interface RefreshITunesMatchDownloadOperation : ISOperation {

	long long _downloadID;

}

@property (readonly) long long downloadIdentifier; 
-(BOOL)_refreshDownload:(id)arg1 error:(id*)arg2 ;
-(id)_newPurchaseForDownload:(id)arg1 ;
-(BOOL)_applyResultsOfOperation:(id)arg1 toDownload:(id)arg2 error:(id*)arg3 ;
-(long long)downloadIdentifier;
-(id)initWithDownloadIdentifier:(long long)arg1 ;
-(void)run;
@end

