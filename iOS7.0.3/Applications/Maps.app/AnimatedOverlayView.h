/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UITextField, UIView;

@interface AnimatedOverlayView : UIView {

	UITextField* _associatedTextField;
	UIView* _clippingView;
	UITextField* _textField;
	BOOL _isAnimating;

}

@property (nonatomic,retain) UITextField * associatedTextField;              //@synthesize associatedTextField=_associatedTextField - In the implementation block
@property (nonatomic,retain) UIView * clippingView;                          //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,retain) UITextField * textField;                        //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) BOOL isAnimating;                               //@synthesize isAnimating=_isAnimating - In the implementation block
-(void)setAssociatedTextField:(id)arg1 ;
-(void)orientationWillChangeToInterfaceOrientation:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 associatedTextField:(id)arg2 ;
-(id)clippingView;
-(void)setClippingView:(id)arg1 ;
-(id)associatedTextField;
-(void)setTextField:(id)arg1 ;
-(void)dealloc;
-(BOOL)isAnimating;
-(id)textField;
-(void)setIsAnimating:(BOOL)arg1 ;
@end

