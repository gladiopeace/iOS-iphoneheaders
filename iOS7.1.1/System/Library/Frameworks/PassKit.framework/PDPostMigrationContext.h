/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:29:07 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface PDPostMigrationContext : NSObject {

	NSMutableArray* _databasePopulationOperations;
	NSMutableArray* _postMigrationOperations;

}
-(BOOL)hasDatabasePopulationOperations;
-(void)performDatabasePopulationOperationsWithLocalPasses:(id)arg1 ;
-(void)performPostMigrationOperations;
-(void)addDatabasePopulationOperation:(/*^block*/ id)arg1 ;
-(void)addPostMigrationOperation:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)init;
@end

