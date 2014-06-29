/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:10:32 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <storebookkeeperd/SBKUniversalPlaybackPositionMediaItem.h>

@class ML3Track;

@interface SBDPlaybackPositionML3TrackMediaItem : NSObject <SBKUniversalPlaybackPositionMediaItem> {

	ML3Track* _track;
	long long _persistentID;

}

@property (readonly) long long persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (readonly) ML3Track * track;                    //@synthesize track=_track - In the implementation block
-(id)track;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(id)description;
-(void).cxx_destruct;
-(long long)persistentID;
-(id)initWithPersistentID:(long long)arg1 inLibrary:(id)arg2 ;
@end

