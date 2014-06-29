/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSOperationQueue : NSObject {

	id _private;
	void* _reserved;

}
+(id)currentQueue;
+(id)mainQueue;
+(bool)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)executeAndWaitForBlock:(/*^block*/ id)arg1 ;
-(void)addOperations:(id)arg1 waitUntilFinished:(bool)arg2 ;
-(id)__;
-(void)__:(id)arg1 ;
-(long long)maxConcurrentOperationCount;
-(bool)overcommitsOperations;
-(void)setOvercommitsOperations:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(bool)isSuspended;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setMaxConcurrentOperationCount:(long long)arg1 ;
-(void)cancelAllOperations;
-(void)waitUntilAllOperationsAreFinished;
-(void)addOperationWithBlock:(/*^block*/ id)arg1 ;
-(void)addOperation:(id)arg1 ;
-(id)operations;
-(unsigned long long)operationCount;
-(void)setSuspended:(bool)arg1 ;
@end

