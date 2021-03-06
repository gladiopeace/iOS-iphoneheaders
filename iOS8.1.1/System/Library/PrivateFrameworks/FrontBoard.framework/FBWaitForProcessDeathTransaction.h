/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FBTransaction.h>
#import <FrontBoard/FBProcessObserver.h>

@class FBProcessManager, FBProcess, BSWatchdog, NSString;

@interface FBWaitForProcessDeathTransaction : FBTransaction <FBProcessObserver> {

	FBProcessManager* _manager;
	FBProcess* _process;
	double _timeout;
	BSWatchdog* _watchdog;

}

@property (nonatomic,retain,readonly) FBProcess * process;              //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) double timeout;                          //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(FBProcess *)process;
-(void)_didComplete;
-(id)_customizedDescriptionProperties;
-(void)processDidExit:(id)arg1 ;
-(void)_begin;
-(id)initWithProcess:(id)arg1 timeout:(double)arg2 ;
-(id)initWithProcess:(id)arg1 ;
-(double)timeout;
@end

