/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DAnimationInterpolation.h>

@class NSString;

@interface TSCH3DAnimationNamedFunctionInterpolation : TSCH3DAnimationInterpolation {

	NSString* mName;
	/*function pointer*/ void* mFunction;
	NSString* mShaderFunction;

}

@property (nonatomic,readonly) NSString * shaderFunction; 
+(id)functionWithName:(id)arg1 function:(/*function pointer*/ void*)arg2 shaderFunction:(id)arg3 ;
-(id)initWithName:(id)arg1 function:(/*function pointer*/ void*)arg2 shaderFunction:(id)arg3 ;
-(box<glm::detail::tvec1<float> >)rangeForIndex:(const tvec2<int>*)arg1 ;
-(float)interpolate:(float)arg1 index:(const tvec2<int>*)arg2 ;
-(id)shaderFunction;
-(void)dealloc;
-(id)description;
-(id)name;
@end

