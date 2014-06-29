/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <CoreFoundation/NSCoding.h>

@class PKPhysicsBody;

@interface PKPhysicsJoint : NSObject <NSCoding> {

	bool _inUse;
	PKPhysicsBody* _bodyA;
	PKPhysicsBody* _bodyB;

}

@property (assign,nonatomic) unsigned* _joint : 2Joint; 
@property (nonatomic,readonly) unsigned* _jointDef : 2JointDef; 
@property (nonatomic,retain) PKPhysicsBody * bodyA;                          //@synthesize bodyA=_bodyA - In the implementation block
@property (nonatomic,retain) PKPhysicsBody * bodyB;                          //@synthesize bodyB=_bodyB - In the implementation block
-(bool)_inUse;
-(void)set_inUse:(bool)arg1 ;
-(unsigned*)_joint;
-(void)set_joint:(unsigned*)arg1 ;
-(unsigned*)_jointDef;
-(void)create;
-(void)setBodyA:(id)arg1 ;
-(void)setBodyB:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void).cxx_destruct;
-(id)bodyA;
-(id)bodyB;
@end

