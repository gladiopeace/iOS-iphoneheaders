/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ApplicationWorkspaceChange : NSObject {

	NSString* _bundleID;
	int _changeType;
	long long _downloadID;

}

@property (assign,nonatomic) int changeType;                            //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) long long downloadIdentifier;              //@synthesize downloadID=_downloadID - In the implementation block
-(void)setDownloadIdentifier:(long long)arg1 ;
-(void)setChangeType:(int)arg1 ;
-(long long)downloadIdentifier;
-(void)dealloc;
-(id)bundleIdentifier;
-(int)changeType;
-(void)setBundleIdentifier:(id)arg1 ;
@end
