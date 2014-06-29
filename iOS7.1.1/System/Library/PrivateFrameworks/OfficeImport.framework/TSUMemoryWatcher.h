/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSUFlushingManager;

@interface TSUMemoryWatcher : NSObject {

	TSUFlushingManager* _flushingManager;
	bool _going;
	bool _stop;

}
-(void)dealloc;
-(id)initWithFlushingManager:(id)arg1 ;
-(void)beginObserving;
-(void)stopObserving;
-(void)_periodicallySimulateMemoryWarning:(id)arg1 ;
-(void)_simulateMemoryWarning:(id)arg1 ;
@end

