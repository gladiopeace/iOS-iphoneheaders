/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@class NSArray;

@interface TSCH3DChartVertexShadowsRenderProcessor : TSCH3DRetargetRenderProcessor {

	NSArray* mShadowsEffects;

}
-(long long)attribute:(id)arg1 resource:(id)arg2 specs:(const AttributeSpecs*)arg3 ;
-(long long)texture:(id)arg1 attributes:(const TextureAttributes*)arg2 ;
-(void)submit:(const PrimitiveInfo*)arg1 ;
-(id)p_effects;
-(void)dealloc;
-(id)init;
@end

