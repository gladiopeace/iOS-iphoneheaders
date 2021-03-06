/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:58 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
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
-(long long)downloadIdentifier;
-(void)setDownloadIdentifier:(long long)arg1 ;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setChangeType:(int)arg1 ;
-(int)changeType;
@end

