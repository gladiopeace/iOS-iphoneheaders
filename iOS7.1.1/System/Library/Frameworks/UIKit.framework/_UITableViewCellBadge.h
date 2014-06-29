/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString;

@interface _UITableViewCellBadge : UIView {

	bool _isSelected;
	NSString* _text;
	CGSize _textSize;

}

@property (nonatomic,copy) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (assign,getter=isSelected,nonatomic) bool selected;              //@synthesize isSelected=_isSelected - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setHighlighted:(bool)arg1 ;
-(bool)isHighlighted;
-(bool)isSelected;
-(void)setSelected:(bool)arg1 ;
-(void)_sizeToFit;
-(void)setIsSelected:(bool)arg1 ;
@end

