/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartAnimationClip.h>

@interface TSCH3DChartRotationAnimationClip : TSCH3DChartAnimationClip {

	tvec3<float> mBegin;
	tvec3<float> mEnd;

}

@property (assign,nonatomic) tvec3<float> begin; 
@property (assign,nonatomic) tvec3<float> end; 
-(void)willRunWithScene:(id)arg1 context:(id)arg2 layers:(id)arg3 ;
-(void)setBegin:(tvec3<float>)arg1 ;
-(tvec3<float>)begin;
-(tvec3<float>)end;
-(id).cxx_construct;
-(void)setEnd:(tvec3<float>)arg1 ;
@end

