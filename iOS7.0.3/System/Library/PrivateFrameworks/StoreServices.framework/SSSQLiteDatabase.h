/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <StoreServices/StoreServices-Structs.h>
@class NSObject, NSString;

@interface SSSQLiteDatabase : NSObject {

	sqlite3Ref _db;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSString* _databasePath;
	BOOL _readOnly;
	BOOL _isInTransaction;
	/*^block*/ id _setupBlock;
	CFDictionaryRef _statementCache;
	BOOL _takesTaskCompletionAssertions;
	SBSProcessAssertionRef _taskAssertion;
	int _taskAssertionCount;

}

@property (nonatomic,copy) id setupBlock;                           //@synthesize setupBlock=_setupBlock - In the implementation block
@property (assign) BOOL takesTaskCompletionAssertions; 
+(BOOL)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 ;
+(void)_stepStatement:(sqlite3_stmtRef)arg1 hasRow:(BOOL*)arg2 didFinish:(BOOL*)arg3 ;
+(BOOL)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 ;
+(void)_setTakesTaskCompletionAssertions:(BOOL)arg1 ;
-(void)dealloc;
-(void)performTransactionWithBlock:(/*^block*/ id)arg1 ;
-(int)userVersion;
-(BOOL)setUserVersion:(int)arg1 ;
-(int)_openDatabase;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)setSetupBlock:(/*^block*/ id)arg1 ;
-(void)prepareStatementForSQL:(id)arg1 cache:(BOOL)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(BOOL)executeSQL:(id)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)dispatchBlockAsync:(/*^block*/ id)arg1 ;
-(void)_beginTaskCompletionAssertion;
-(void)_endTaskCompletionAssertion;
-(void)_accessDatabaseUsingBlock:(/*^block*/ id)arg1 ;
-(void)_resetCorruptDatabase;
-(sqlite3_stmtRef)_statementForSQL:(id)arg1 cache:(BOOL)arg2 ;
-(BOOL)setUserVersion:(int)arg1 forDatabase:(id)arg2 ;
-(int)userVersionForDatabase:(id)arg1 ;
-(int)_openFlags;
-(int)_resetAndReopenDatabaseWithPath:(id)arg1 ;
-(BOOL)_resetDatabaseWithPath:(id)arg1 ;
-(void)accessDatabaseUsingBlock:(/*^block*/ id)arg1 ;
-(int)countChanges;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/ id)arg2 ;
-(void)dispatchBlockSync:(/*^block*/ id)arg1 ;
-(id)newDispatchSourceWithType:(dispatch_source_type_sRef)arg1 ;
-(void)beginTaskCompletionAssertion;
-(void)endTaskCompletionAssertion;
-(void)setTakesTaskCompletionAssertions:(BOOL)arg1 ;
-(BOOL)takesTaskCompletionAssertions;
-(/*^block*/ id)setupBlock;
@end

