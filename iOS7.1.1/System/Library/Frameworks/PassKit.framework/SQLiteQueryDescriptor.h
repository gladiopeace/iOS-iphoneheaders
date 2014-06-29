/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:29:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/passd-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray, SQLitePredicate;

@interface SQLiteQueryDescriptor : NSObject <NSCopying> {

	Class _entityClass;
	int _limitCount;
	NSArray* _orderingDirections;
	NSArray* _orderingProperties;
	SQLitePredicate* _predicate;
	BOOL _returnsDistinctEntities;

}

@property (assign,nonatomic) Class entityClass;                         //@synthesize entityClass=_entityClass - In the implementation block
@property (assign,nonatomic) int limitCount;                            //@synthesize limitCount=_limitCount - In the implementation block
@property (nonatomic,copy) NSArray * orderingDirections;                //@synthesize orderingDirections=_orderingDirections - In the implementation block
@property (nonatomic,copy) NSArray * orderingProperties;                //@synthesize orderingProperties=_orderingProperties - In the implementation block
@property (assign,nonatomic) BOOL returnsDistinctEntities;              //@synthesize returnsDistinctEntities=_returnsDistinctEntities - In the implementation block
@property (nonatomic,copy) SQLitePredicate * predicate;                 //@synthesize predicate=_predicate - In the implementation block
-(id)_newSelectSQLWithProperties:(id)arg1 columns:(id)arg2 ;
-(void)setOrderingProperties:(id)arg1 ;
-(id)orderingProperties;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setPredicate:(id)arg1 ;
-(id)predicate;
-(Class)entityClass;
-(void)setEntityClass:(Class)arg1 ;
-(void)setOrderingDirections:(id)arg1 ;
-(int)limitCount;
-(void)setLimitCount:(int)arg1 ;
-(id)orderingDirections;
-(BOOL)returnsDistinctEntities;
-(void)setReturnsDistinctEntities:(BOOL)arg1 ;
@end

