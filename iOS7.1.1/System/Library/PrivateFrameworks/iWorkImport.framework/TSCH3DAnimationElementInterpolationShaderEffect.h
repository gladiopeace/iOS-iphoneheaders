/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DShaderEffect.h>

@class NSString;

@interface TSCH3DAnimationElementInterpolationShaderEffect : TSCH3DShaderEffect {

	NSString* mFunctionName;

}

@property (nonatomic,readonly) NSString * functionName; 
+(id)effectWithInterpolationFunctionName:(id)arg1 ;
+(void)setInterpolationRange:(box<glm::detail::tvec1<float> >)arg1 effectsStates:(id)arg2 ;
+(id)variableElementInterpolationRange;
-(void)addVariables:(id)arg1 ;
-(void)inject:(id)arg1 ;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 ;
-(id)variableElementInterpolationRange;
-(id)initWithInterpolationFunctionName:(id)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)functionName;
@end

