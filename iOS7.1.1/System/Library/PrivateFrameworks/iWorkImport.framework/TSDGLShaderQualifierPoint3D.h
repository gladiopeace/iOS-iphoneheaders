/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierPoint3D : TSDGLShaderQualifier {

	SCD_Struct_TS483 _GLPoint3DValue;
	SCD_Struct_TS483 _proposedGLPoint3DValue;

}

@property (getter=LPoint3DValue,nonatomic,readonly) SCD_Struct_TS483 GLPoint3DValue;              //@synthesize GLPoint3DValue=_GLPoint3DValue - In the implementation block
@property (assign,nonatomic) SCD_Struct_TS483 proposedGLPoint3DValue;                             //@synthesize proposedGLPoint3DValue=_proposedGLPoint3DValue - In the implementation block
-(void)setGLUniformWithShader:(id)arg1 ;
-(SCD_Struct_TS483)GLPoint3DValue;
-(void)setProposedGLPoint3DValue:(SCD_Struct_TS483)arg1 ;
-(SCD_Struct_TS483)proposedGLPoint3DValue;
-(id)description;
@end

