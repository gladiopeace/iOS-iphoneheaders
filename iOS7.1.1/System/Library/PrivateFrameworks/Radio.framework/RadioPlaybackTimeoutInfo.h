/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@class NSMutableDictionary;

@interface RadioPlaybackTimeoutInfo : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* _playbackTimeoutIdentifierToTimeoutNumber;

}
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(void).cxx_destruct;
-(id)_playbackTimeoutIdentifierForBase:(id)arg1 playbackType:(long long)arg2 ;
-(double)dockedPlaybackTimeoutForPlaybackType:(long long)arg1 ;
-(double)lockedPlaybackTimeoutForPlaybackType:(long long)arg1 ;
-(double)pausedPlaybackTimeoutForPlaybackType:(long long)arg1 ;
-(double)unlockedPlaybackTimeoutForPlaybackType:(long long)arg1 ;
@end

