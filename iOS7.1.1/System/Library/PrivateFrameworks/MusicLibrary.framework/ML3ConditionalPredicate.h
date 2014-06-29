/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3Predicate.h>

@class ML3Predicate;

@interface ML3ConditionalPredicate : ML3Predicate {

	ML3Predicate* _conditionPredicate;
	ML3Predicate* _thenPredicate;
	ML3Predicate* _elsePredicate;

}

@property (nonatomic,readonly) ML3Predicate * conditionPredicate;              //@synthesize conditionPredicate=_conditionPredicate - In the implementation block
@property (nonatomic,readonly) ML3Predicate * thenPredicate;                   //@synthesize thenPredicate=_thenPredicate - In the implementation block
@property (nonatomic,readonly) ML3Predicate * elsePredicate;                   //@synthesize elsePredicate=_elsePredicate - In the implementation block
+(id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void).cxx_destruct;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)databaseStatementParameters;
-(id)predicateOptimizedForEntityClass:(Class)arg1 ;
-(bool)isDynamicForEntityClass:(Class)arg1 ;
-(id)spotlightPredicate;
-(id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3 ;
-(id)conditionPredicate;
-(id)thenPredicate;
-(id)elsePredicate;
@end

