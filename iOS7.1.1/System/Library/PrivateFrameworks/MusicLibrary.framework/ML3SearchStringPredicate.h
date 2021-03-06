/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3Predicate.h>

@class NSArray, NSString;

@interface ML3SearchStringPredicate : ML3Predicate {

	NSArray* _properties;
	NSString* _searchString;

}

@property (nonatomic,copy) NSArray * properties;                 //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) NSString * searchString;              //@synthesize searchString=_searchString - In the implementation block
+(id)predicateWithConcatenatedProperties:(id)arg1 searchString:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)properties;
-(void).cxx_destruct;
-(void)setProperties:(id)arg1 ;
-(void)setSearchString:(id)arg1 ;
-(id)searchString;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)databaseStatementParameters;
-(bool)isDynamicForEntityClass:(Class)arg1 ;
-(id)initWithConcatenatedProperties:(id)arg1 searchString:(id)arg2 ;
@end

