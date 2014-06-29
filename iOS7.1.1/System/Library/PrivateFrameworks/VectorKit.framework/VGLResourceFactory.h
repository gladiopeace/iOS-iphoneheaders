/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSMutableSet, NSMutableArray, NSMutableDictionary;

@interface VGLResourceFactory : NSObject {

	recursive_mutex _mutex;
	NSMutableSet* _activeResources;
	NSMutableArray* _unusedResources;
	NSMutableDictionary* _programFactories;
	NSMutableDictionary* _shaderCache;

}
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
-(void).cxx_destruct;
-(id)vertexShaderWithName:(id)arg1 ;
-(id)fragmentShaderWithName:(id)arg1 ;
-(id)newResourceWithType:(int)arg1 count:(int)arg2 ;
-(void)deleteUnusedResources;
-(id)programFactoryWithCohort:(id)arg1 ;
-(void)moveUnusedResourceImpl:(id)arg1 ;
-(void)deleteActiveResources;
@end

