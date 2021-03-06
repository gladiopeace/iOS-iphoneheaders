/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaPredicate.h>

@interface MPMediaPersistentIDsPredicate : MPMediaPredicate {

	long long* _persistentIDs;
	BOOL _shouldContain;
	unsigned _count;

}

@property (nonatomic,readonly) unsigned count;                              //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) const long long* persistentIDs;              //@synthesize persistentIDs=_persistentIDs - In the implementation block
@property (nonatomic,readonly) BOOL shouldContain;                          //@synthesize shouldContain=_shouldContain - In the implementation block
+(id)predicateWithPersistentIDs:(const long long*)arg1 count:(unsigned)arg2 shouldContain:(BOOL)arg3 ;
-(const long long*)persistentIDs;
-(id)ML3PredicateForTrack;
-(id)ML3PredicateForContainer;
-(id)_ML3PredicateForEntityClass:(Class)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(BOOL)shouldContain;
@end

