/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ODDIteratorAttributes : NSObject {

	int mAxis;
	int mPointType;
	bool mHideLastTransition;
	int mStart;
	unsigned mCount;
	int mStep;

}
-(unsigned)count;
-(int)axis;
-(void)setCount:(unsigned)arg1 ;
-(int)start;
-(void)setStart:(int)arg1 ;
-(void)setAxis:(int)arg1 ;
-(int)pointType;
-(void)setPointType:(int)arg1 ;
-(bool)hideLastTransition;
-(void)setHideLastTransition:(bool)arg1 ;
-(int)step;
-(void)setStep:(int)arg1 ;
@end

