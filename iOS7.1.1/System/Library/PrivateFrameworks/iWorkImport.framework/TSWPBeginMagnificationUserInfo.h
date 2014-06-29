/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSWPRep;

@interface TSWPBeginMagnificationUserInfo : NSObject {

	TSWPRep* _target;
	CGPoint _magnificationPoint;
	CGPoint _offset;
	bool _animated;

}

@property (assign,nonatomic) TSWPRep * target;                        //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) CGPoint magnificationPoint;              //@synthesize magnificationPoint=_magnificationPoint - In the implementation block
@property (assign,nonatomic) CGPoint offset;                          //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) bool animated;                           //@synthesize animated=_animated - In the implementation block
-(void)setTarget:(id)arg1 ;
-(id)target;
-(bool)animated;
-(void)setAnimated:(bool)arg1 ;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(id).cxx_construct;
-(void)setMagnificationPoint:(CGPoint)arg1 ;
-(CGPoint)magnificationPoint;
@end

