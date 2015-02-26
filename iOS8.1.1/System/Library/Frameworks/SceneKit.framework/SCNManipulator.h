/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:54 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNAuthoringEnvironment, SCNNode;

@interface SCNManipulator : NSObject {

	SCNAuthoringEnvironment* _authoringEnvironment;
	SCNNode* _target;

}

@property (readonly) SCNAuthoringEnvironment * authoringEnvironment; 
@property (assign,nonatomic) SCNNode * target;                                    //@synthesize target=_target - In the implementation block
-(SCNAuthoringEnvironment *)authoringEnvironment;
-(void)_setAuthoringEnvironment:(id)arg1 ;
-(BOOL)mouseDragged:(SCD_Struct_SC3)arg1 ;
-(void)setTarget:(SCNNode *)arg1 ;
-(SCNNode *)target;
-(BOOL)mouseDown:(SCD_Struct_SC3)arg1 ;
-(BOOL)mouseUp:(SCD_Struct_SC3)arg1 ;
-(void)draw;
-(BOOL)mouseMoved:(SCD_Struct_SC3)arg1 ;
@end
