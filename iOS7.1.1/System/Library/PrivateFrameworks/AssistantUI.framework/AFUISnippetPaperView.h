/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKit/UIView.h>

@protocol AFUISnippetPaperViewDelegate;
@class UIImageView, UIImage, UIColor;

@interface AFUISnippetPaperView : UIView {

	UIImageView* _paperImageView;
	UIImage* _paperImage;
	SCD_Struct_AF1 _gradientValues[5];
	bool _usesGradient;
	bool _hasBeveledEdge;
	bool _usingProvidedPaper;
	<AFUISnippetPaperViewDelegate>* _delegate;

}

@property (nonatomic,retain) UIColor * paperColor; 
@property (nonatomic,retain) UIImage * paperImage; 
@property (assign,nonatomic) double paperImageAlpha; 
@property (assign,nonatomic) bool usesGradient;                   //@synthesize usesGradient=_usesGradient - In the implementation block
@property (assign,nonatomic) bool hasBeveledEdge;                 //@synthesize hasBeveledEdge=_hasBeveledEdge - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void).cxx_destruct;
-(id)paperImage;
-(void)setGradientValues:(const SCD_Struct_AF1*)arg1 ;
-(void)setPaperColor:(id)arg1 ;
-(SCD_Struct_AF2)_uiGradientValueForValue:(SCD_Struct_AF1)arg1 ;
-(void)setPaperImage:(id)arg1 ;
-(id)paperColor;
-(void)setHasBeveledEdge:(bool)arg1 ;
-(void)setUsesGradient:(bool)arg1 ;
-(void)setPaperImageAlpha:(double)arg1 ;
-(double)paperImageAlpha;
-(void)setGradientStartColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(void)setGradientEndColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(bool)usesGradient;
-(bool)hasBeveledEdge;
@end

