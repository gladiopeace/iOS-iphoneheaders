/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@protocol _UISiriWaveyViewDelegate;
@class CADisplayLink, EAGLContext;

@interface _UISiriWaveyView : UIView {

	SCD_Struct_UI89 _projection;
	CADisplayLink* _displayLink;
	EAGLContext* _eaglContext;
	unsigned _framebufferHandle;
	unsigned _renderbufferHandle;
	unsigned _vertexBufferHandle;
	unsigned _textureHandle;
	unsigned _programHandle;
	int _attribPosition;
	int _uniformProjection;
	int _uniformOpacity;
	int _uniformLineWidth;
	int _uniformPowerLevel;
	int _uniformDisplayWidth;
	int _uniformTimeOffset;
	int _uniformTexture;
	int _viewWidth;
	int _viewHeight;
	float _projection11;
	double _startTime;
	float _runningPowerLevels[5];
	unsigned _powerPointer;
	bool _isInitialized;
	bool _justStarted;
	int _state;
	int _mode;
	<_UISiriWaveyViewDelegate>* _delegate;

}

@property (assign,nonatomic) <_UISiriWaveyViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int mode;                                           //@synthesize mode=_mode - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setHidden:(bool)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(void)didMoveToSuperview;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)start;
-(void)startListening;
-(float)_updateMedianWithNewValue:(float)arg1 ;
-(float)_powerLevelForMicPower:(float)arg1 ;
-(float)_currentMicPowerLevel;
-(void)_tearDownDisplayLink;
-(void)_cleanupGL;
-(void)_setupDisplayLink;
-(void)_updateCurveLayer:(id)arg1 ;
-(bool)_setupFramebuffer;
-(bool)_setupShaders;
-(bool)_setupVertexBuffer;
-(bool)_setupTexture;
-(bool)_initGL;
-(bool)_resizeFromLayer:(id)arg1 ;
-(void)_updateOrthoProjection;
-(bool)inDictationMode;
-(bool)inSiriMode;
@end

