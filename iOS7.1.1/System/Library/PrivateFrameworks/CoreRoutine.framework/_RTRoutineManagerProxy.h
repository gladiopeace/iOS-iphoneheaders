/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRoutine/RTFrameworkProtocol.h>

@class RTRoutineManager;

@interface _RTRoutineManagerProxy : NSObject <RTFrameworkProtocol> {

	RTRoutineManager* _routineManager;

}

@property (assign,nonatomic,__weak) RTRoutineManager * routineManager;              //@synthesize routineManager=_routineManager - In the implementation block
-(void).cxx_destruct;
-(void)setRoutineManager:(id)arg1 ;
-(id)initWithRoutineManager:(id)arg1 ;
-(id)routineManager;
@end

