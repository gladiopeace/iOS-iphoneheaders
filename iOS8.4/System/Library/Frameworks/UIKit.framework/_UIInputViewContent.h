/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIInputView;

@interface _UIInputViewContent : UIView {

	double _contentHeight;
	double _contentWidth;
	UIInputView* _inputView;
	int _unclippableCorners;

}

@property (assign,nonatomic) int _unclippableCorners;              //@synthesize unclippableCorners=_unclippableCorners - In the implementation block
-(void)addSubview:(id)arg1 ;
-(CGSize)_contentSize;
-(BOOL)_isToolbar;
-(CGSize)_sizeFittingContentViews;
-(id)initWithFrame:(CGRect)arg1 inputView:(id)arg2 ;
-(void)_setToolbarBackgroundImage:(id)arg1 ;
-(void)_setToolbarBackgroundViewWithImage:(id)arg1 ;
-(void)_updateCornerClipping;
-(int)_unclippableCorners;
-(void)set_unclippableCorners:(int)arg1 ;
@end
