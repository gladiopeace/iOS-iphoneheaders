/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DTexturesMaterial.h>

@interface TSCH3DEnvironmentMaterial : TSCH3DTexturesMaterial {

	bool mDecalMode;

}

@property (assign,nonatomic) bool decalMode; 
+(id)instanceWithArchive:(const Chart3DEnvironmentMaterialArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(Chart3DEnvironmentMaterialArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DEnvironmentMaterialArchive*)arg1 unarchiver:(id)arg2 ;
-(bool)decalMode;
-(MaterialShaderVariables)defaultShaderVariables;
-(void)setDecalMode:(bool)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
@end

