/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:17:00 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSData;

@interface MRDInitiatePlaybackMessage : NSObject {

	NSString* _bundleID;
	NSData* _indexPathData;

}

@property (nonatomic,readonly) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSData * indexPathData;              //@synthesize indexPathData=_indexPathData - In the implementation block
-(id)indexPathData;
-(id)initWithBundleID:(id)arg1 indexPathData:(id)arg2 ;
-(id)bundleID;
-(void)dealloc;
@end

