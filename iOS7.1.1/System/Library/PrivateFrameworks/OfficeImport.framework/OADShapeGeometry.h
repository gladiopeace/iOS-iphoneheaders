/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface OADShapeGeometry : NSObject {

	bool mIsEscher;
	NSMutableDictionary* mAdjustValues;

}
-(void)dealloc;
-(id)init;
-(id)adjustValues;
-(bool)isEscher;
-(int)adjustValueAtIndex:(unsigned)arg1 ;
-(void)setIsEscher:(bool)arg1 ;
-(bool)hasAdjustValueAtIndex:(unsigned)arg1 ;
-(void)setAdjustValue:(int)arg1 atIndex:(unsigned)arg2 ;
@end

