/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDTexturedRectangle, TSDGLEdgeDistanceFieldTraceEffect, TSDGLDataBuffer, TSDGLShader;

@interface KNBuildTraceDrawObject : NSObject {

	BOOL _isExtraObject;
	TSDTexturedRectangle* _tr;
	TSDGLEdgeDistanceFieldTraceEffect* _traceEffect;
	TSDGLDataBuffer* _dataBuffer;
	TSDGLShader* _extraObjectShader;
	SCD_Struct_TS471 _extraObjectTextureSize;
	tquat<float> _color;
	CGPoint _timing;
	CATransform3D _MVPMatrix;

}

@property (nonatomic,retain) TSDTexturedRectangle * tr;                                    //@synthesize tr=_tr - In the implementation block
@property (nonatomic,retain) TSDGLEdgeDistanceFieldTraceEffect * traceEffect;              //@synthesize traceEffect=_traceEffect - In the implementation block
@property (nonatomic,retain) TSDGLDataBuffer * dataBuffer;                                 //@synthesize dataBuffer=_dataBuffer - In the implementation block
@property (assign,nonatomic) CATransform3D MVPMatrix;                                      //@synthesize MVPMatrix=_MVPMatrix - In the implementation block
@property (assign,nonatomic) tquat<float> color;                                           //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) CGPoint timing;                                               //@synthesize timing=_timing - In the implementation block
@property (assign,nonatomic) BOOL isExtraObject;                                           //@synthesize isExtraObject=_isExtraObject - In the implementation block
@property (assign,nonatomic) TSDGLShader * extraObjectShader;                              //@synthesize extraObjectShader=_extraObjectShader - In the implementation block
@property (assign,nonatomic) SCD_Struct_TS471 extraObjectTextureSize;                      //@synthesize extraObjectTextureSize=_extraObjectTextureSize - In the implementation block
+(id)traceDrawObject;
-(TSDGLDataBuffer *)dataBuffer;
-(void)setDataBuffer:(TSDGLDataBuffer *)arg1 ;
-(TSDTexturedRectangle *)tr;
-(void)setTr:(TSDTexturedRectangle *)arg1 ;
-(TSDGLEdgeDistanceFieldTraceEffect *)traceEffect;
-(void)setTraceEffect:(TSDGLEdgeDistanceFieldTraceEffect *)arg1 ;
-(CATransform3D)MVPMatrix;
-(void)setMVPMatrix:(CATransform3D)arg1 ;
-(BOOL)isExtraObject;
-(void)setIsExtraObject:(BOOL)arg1 ;
-(TSDGLShader *)extraObjectShader;
-(void)setExtraObjectShader:(TSDGLShader *)arg1 ;
-(SCD_Struct_TS471)extraObjectTextureSize;
-(void)setExtraObjectTextureSize:(SCD_Struct_TS471)arg1 ;
-(void)dealloc;
-(tquat<float>)color;
-(void)setColor:(tquat<float>)arg1 ;
-(CGPoint)timing;
-(void)setTiming:(CGPoint)arg1 ;
@end
