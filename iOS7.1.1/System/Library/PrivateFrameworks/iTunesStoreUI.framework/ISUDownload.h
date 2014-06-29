/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSDownload, NSObject, NSString, NSNumber, NSURL;

@interface ISUDownload : NSObject {

	SSDownload* _download;
	NSObject<OS_dispatch_queue>* _dispatchQueue;

}

@property (nonatomic,retain) SSDownload * managedDownload; 
@property (nonatomic,readonly) NSString * artistName; 
@property (getter=isContentRestricted,nonatomic,readonly) bool contentRestricted; 
@property (nonatomic,readonly) NSString * phaseIdentifier; 
@property (nonatomic,readonly) NSNumber * storeItemIdentifier; 
@property (nonatomic,readonly) NSNumber * storePreorderIdentifier; 
@property (nonatomic,readonly) NSURL * thumbnailImageURL; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) long long bytesDownloaded; 
@property (nonatomic,readonly) long long bytesTotal; 
@property (nonatomic,readonly) double estimatedSecondsRemaining; 
@property (getter=isPurchase,nonatomic,readonly) bool purchase; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) NSString * statusDescription; 
@property (getter=isPausable,nonatomic,readonly) bool pausable; 
+(id)downloadProperties;
+(void)initialize;
+(id)downloadExternalProperties;
-(long long)bytesDownloaded;
-(long long)bytesTotal;
-(bool)isPausable;
-(id)phaseIdentifier;
-(id)storeItemIdentifier;
-(void)dealloc;
-(double)percentComplete;
-(id)title;
-(id)artistName;
-(id)initWithManagedDownload:(id)arg1 ;
-(id)managedDownload;
-(id)thumbnailImageURL;
-(id)copyLocalizedStatusString;
-(bool)isContentRestricted;
-(id)statusDescription;
-(double)estimatedSecondsRemaining;
-(bool)isPurchase;
-(void)resetPreorderState;
-(void)setManagedDownload:(id)arg1 ;
-(id)storePreorderIdentifier;
@end

