/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, UIColor, NSArray;

@interface LabelListView : UIView {

	NSMutableArray* _labels;
	UIColor* _textColor;
	UIColor* _shadowColor;
	int _textAlignment;
	UIEdgeInsets _insets;

}

@property (nonatomic,readonly) NSArray * labels;                 //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;              //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) int textAlignment;                  //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                //@synthesize insets=_insets - In the implementation block
+(float)heightForWidth:(float)arg1 strings:(id)arg2 fonts:(id)arg3 ;
-(void)addLabelWithText:(id)arg1 accessibilityText:(id)arg2 font:(id)arg3 ;
-(void)layoutToFitSize:(CGSize)arg1 ;
-(void)removeAllLabels;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextAlignment:(int)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(UIColor *)shadowColor;
-(UIColor *)textColor;
-(int)textAlignment;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(NSArray *)labels;
@end

