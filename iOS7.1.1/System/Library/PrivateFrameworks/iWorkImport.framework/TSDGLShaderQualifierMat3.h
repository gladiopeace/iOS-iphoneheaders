/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierMat3 : TSDGLShaderQualifier {

	CGAffineTransform _affineTransform;
	CGAffineTransform _proposedAffineTransform;

}

@property (nonatomic,readonly) CGAffineTransform affineTransform;                    //@synthesize affineTransform=_affineTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform proposedAffineTransform;              //@synthesize proposedAffineTransform=_proposedAffineTransform - In the implementation block
-(void)setGLUniformWithShader:(id)arg1 ;
-(id)initWithAffineTransform:(CGAffineTransform)arg1 ;
-(void)setProposedAffineTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)proposedAffineTransform;
-(id)description;
-(CGAffineTransform)affineTransform;
@end

