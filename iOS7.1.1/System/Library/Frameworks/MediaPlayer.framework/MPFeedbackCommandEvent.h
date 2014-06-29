/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPFeedbackCommandEvent : MPRemoteCommandEvent {

	bool _negative;

}

@property (getter=isNegative,nonatomic,readonly) bool negative;              //@synthesize negative=_negative - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(bool)isNegative;
@end

