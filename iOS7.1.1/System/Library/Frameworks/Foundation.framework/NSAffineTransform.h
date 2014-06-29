/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@interface NSAffineTransform : NSObject <NSCopying, NSCoding> {

	SCD_Struct_NS7 _transformStruct;

}
+(id)transform;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(id)CA_addValue:(id)arg1 multipliedBy:(int)arg2 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(Object*)CA_copyRenderValue;
-(void)invert;
-(id)initWithTransform:(id)arg1 ;
-(void)rotateByRadians:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)scaleBy:(double)arg1 ;
-(void)translateXBy:(double)arg1 yBy:(double)arg2 ;
-(CGSize)transformSize:(CGSize)arg1 ;
-(void)scaleXBy:(double)arg1 yBy:(double)arg2 ;
-(SCD_Struct_NS7)transformStruct;
-(void)setTransformStruct:(SCD_Struct_NS7)arg1 ;
-(CGPoint)transformPoint:(CGPoint)arg1 ;
-(void)prependTransform:(id)arg1 ;
-(void)appendTransform:(id)arg1 ;
-(void)rotateByDegrees:(double)arg1 ;
@end

