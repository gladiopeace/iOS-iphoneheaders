/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@interface MNJunctionElement : NSObject {

	CGPoint _leftBasePoint;
	CGPoint _rightBasePoint;
	float _angle;

}

@property (assign) CGPoint leftBasePoint;               //@synthesize leftBasePoint=_leftBasePoint - In the implementation block
@property (assign) CGPoint rightBasePoint;              //@synthesize rightBasePoint=_rightBasePoint - In the implementation block
@property (assign) float angle;                         //@synthesize angle=_angle - In the implementation block
-(CGPoint)leftBasePoint;
-(CGPoint)rightBasePoint;
-(CGPoint)leftEdgePointAtDistanceFromBase:(float)arg1 ;
-(CGPoint)rightEdgePointAtDistanceFromBase:(float)arg1 ;
-(void)setLeftBasePoint:(CGPoint)arg1 ;
-(void)setRightBasePoint:(CGPoint)arg1 ;
-(void)setAngle:(float)arg1 ;
-(float)angle;
@end

