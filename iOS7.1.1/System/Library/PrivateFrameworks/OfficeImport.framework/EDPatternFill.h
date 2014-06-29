/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDFill.h>

@class EDColorReference;

@interface EDPatternFill : EDFill {

	int mType;
	EDColorReference* mBackColorReference;
	EDColorReference* mForeColorReference;

}
+(id)patternFillWithType:(int)arg1 foreColorReference:(id)arg2 backColorReference:(id)arg3 resources:(id)arg4 ;
+(id)patternFillWithType:(int)arg1 resources:(id)arg2 ;
+(id)patternFillWithType:(int)arg1 foreColor:(id)arg2 resources:(id)arg3 ;
+(id)patternFillWithType:(int)arg1 foreColor:(id)arg2 backColor:(id)arg3 resources:(id)arg4 ;
-(id)foreColorReference;
-(id)backColorReference;
-(id)initWithType:(int)arg1 foreColorReference:(id)arg2 backColorReference:(id)arg3 resources:(id)arg4 ;
-(void)setType:(int)arg1 ;
-(void)setForeColorReference:(id)arg1 ;
-(void)setBackColorReference:(id)arg1 ;
-(void)setForeColor:(id)arg1 ;
-(void)setBackColor:(id)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)type;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)isEmpty;
-(id)foreColor;
-(id)backColor;
-(id)initWithResources:(id)arg1 ;
-(bool)isEqualToPatternFill:(id)arg1 ;
-(id)initWithType:(int)arg1 foreColor:(id)arg2 backColor:(id)arg3 resources:(id)arg4 ;
@end

