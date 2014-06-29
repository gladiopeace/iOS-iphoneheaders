/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaPredicate.h>

@class MPMediaPredicate;

@interface MPMediaConditionalPredicate : MPMediaPredicate {

	MPMediaPredicate* _conditionPredicate;
	MPMediaPredicate* _thenPredicate;
	MPMediaPredicate* _elsePredicate;

}

@property (nonatomic,readonly) MPMediaPredicate * conditionPredicate;              //@synthesize conditionPredicate=_conditionPredicate - In the implementation block
@property (nonatomic,readonly) MPMediaPredicate * thenPredicate;                   //@synthesize thenPredicate=_thenPredicate - In the implementation block
@property (nonatomic,readonly) MPMediaPredicate * elsePredicate;                   //@synthesize elsePredicate=_elsePredicate - In the implementation block
+(id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3 ;
-(id)ML3PredicateForContainer;
-(id)ML3PredicateForTrack;
-(id)_ML3PredicateForEntityTypeSelector:(SEL)arg1 ;
-(void).cxx_destruct;
-(id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3 ;
-(id)conditionPredicate;
-(id)thenPredicate;
-(id)elsePredicate;
@end

