/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointSpring : SKPhysicsJoint {

	double _damping;
	double _frequency;

}

@property (assign,nonatomic) double damping;                //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double frequency;              //@synthesize frequency=_frequency - In the implementation block
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(CGPoint)arg3 anchorB:(CGPoint)arg4 ;
+(id)allocWithZone:(NSZone)arg1 ;
-(void)setDamping:(double)arg1 ;
-(double)damping;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
@end

