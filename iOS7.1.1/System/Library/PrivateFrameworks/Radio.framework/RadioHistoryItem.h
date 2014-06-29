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

@class NSDate, NSString, RadioTrack;

@interface RadioHistoryItem : NSObject <NSCopying, NSMutableCopying> {

	NSDate* _datePlayed;
	NSString* _externalIdentifier;
	RadioTrack* _track;
	long long _type;

}

@property (nonatomic,readonly) NSDate * datePlayed;                        //@synthesize datePlayed=_datePlayed - In the implementation block
@property (nonatomic,readonly) NSString * externalIdentifier;              //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (nonatomic,readonly) RadioTrack * track;                         //@synthesize track=_track - In the implementation block
@property (nonatomic,readonly) long long type;                             //@synthesize type=_type - In the implementation block
-(id)track;
-(id)externalIdentifier;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(void).cxx_destruct;
-(id)datePlayed;
@end

