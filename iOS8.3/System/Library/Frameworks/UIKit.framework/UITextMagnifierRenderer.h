/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:55 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@interface UITextMagnifierRenderer : UIView {

	int m_autoscrollDirections;
	int m_magnifierMethod;

}

@property (assign,nonatomic) int autoscrollDirections; 
@property (assign,nonatomic) int magnifierMethod; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setAutoscrollDirections:(int)arg1 ;
-(void)drawMagnifier:(CGRect)arg1 ;
-(int)autoscrollDirections;
-(void)drawAutoscroller:(CGRect)arg1 ;
-(int)magnifierMethod;
-(void)setMagnifierMethod:(int)arg1 ;
@end
