/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSUProgress.h>

@class TSUBasicProgressStorage;

@interface TSUBasicProgress : TSUProgress {

	TSUBasicProgressStorage* mStorage;

}

@property (assign) double value; 
@property (getter=isIndeterminate) bool indeterminate; 
-(id)initWithMaxValue:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setValue:(double)arg1 ;
-(double)value;
-(bool)isIndeterminate;
-(void)setIndeterminate:(bool)arg1 ;
-(double)maxValue;
@end

