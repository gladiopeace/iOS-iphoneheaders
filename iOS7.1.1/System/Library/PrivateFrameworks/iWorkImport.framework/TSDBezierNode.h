/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSDBezierNode : NSObject {

	CGPoint mIn;
	CGPoint mNode;
	CGPoint mOut;
	int mReflectedState;
	bool mSelected;
	int mType;

}

@property (assign,nonatomic) CGPoint nodePoint; 
@property (assign,nonatomic) CGPoint inControlPoint; 
@property (assign,nonatomic) CGPoint outControlPoint; 
@property (assign,nonatomic) int reflectedState; 
@property (nonatomic,readonly) bool isCollapsed; 
@property (assign,nonatomic) int type; 
@property (assign,getter=isSelected,nonatomic) bool selected; 
+(id)bezierNodeWithPoint:(CGPoint)arg1 ;
+(id)bezierNodeWithPoint:(CGPoint)arg1 inControlPoint:(CGPoint)arg2 outControlPoint:(CGPoint)arg3 ;
-(CGPoint)inControlPoint;
-(CGPoint)nodePoint;
-(CGPoint)outControlPoint;
-(void)setNodePoint:(CGPoint)arg1 ;
-(void)setInControlPoint:(CGPoint)arg1 ;
-(void)setOutControlPoint:(CGPoint)arg1 ;
-(void)setReflectedState:(int)arg1 ;
-(int)reflectedState;
-(id)reflectedStateString;
-(void)balanceControlPoints;
-(void)setInControlPoint:(CGPoint)arg1 reflect:(int)arg2 constrain:(bool)arg3 ;
-(void)setOutControlPoint:(CGPoint)arg1 reflect:(int)arg2 constrain:(bool)arg3 ;
-(void)setInControlPointFromReflection:(CGPoint)arg1 constrain:(bool)arg2 ;
-(void)collapse;
-(void)updateReflectedState;
-(void)swapControlPoints;
-(bool)underPoint:(CGPoint)arg1 withTransform:(CGAffineTransform)arg2 andTolerance:(double)arg3 returningType:(long long*)arg4 ;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)moveToPoint:(CGPoint)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)isSelected;
-(void)setSelected:(bool)arg1 ;
-(void)setNode:(CGPoint)arg1 ;
-(id)typeString;
-(bool)isCollapsed;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
@end

