/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface TSDFPSCounter : NSObject {

	NSMutableArray* _dateArray;

}
-(void)addFrame;
-(id)fpsGraphString;
-(void)addFrameAtDrawTime:(double)arg1 duration:(double)arg2 ;
-(id)p_fpsSummaryStringIncludingGraph:(bool)arg1 ;
-(id)p_getFPSInfo:(bool)arg1 ;
-(void)addFrameAtDrawTime:(double)arg1 ;
-(id)fpsSummaryString;
-(void)writeFPSInfoToLog:(id)arg1 identifier:(id)arg2 type:(id)arg3 direction:(id)arg4 duration:(double)arg5 graphing:(bool)arg6 slide:(long long)arg7 ;
-(void)dealloc;
-(id)init;
-(void)reset;
@end

