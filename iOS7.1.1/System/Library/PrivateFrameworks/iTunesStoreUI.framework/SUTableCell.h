/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIColor, SUTableCellContentView, SUItemOfferButton, UIBezierPath, SUCellConfiguration;

@interface SUTableCell : UITableViewCell {

	UIColor* _bottomBorderColor;
	SUTableCellContentView* _configurationView;
	unsigned _hideHighlight : 1;
	SUItemOfferButton* _itemOfferButton;
	SCD_Struct_SU4 _position;
	UIColor* _topBorderColor;
	long long _editState;

}

@property (nonatomic,retain) UIColor * bottomBorderColor;                        //@synthesize bottomBorderColor=_bottomBorderColor - In the implementation block
@property (assign,nonatomic) int clipCorners; 
@property (nonatomic,readonly) UIBezierPath * clippingPath; 
@property (nonatomic,retain) SUCellConfiguration * configuration; 
@property (assign,nonatomic) bool drawAsDisabled; 
@property (assign,nonatomic) bool highlightsOnlyContentView; 
@property (nonatomic,readonly) SUItemOfferButton * itemOfferButton; 
@property (assign,nonatomic) SCD_Struct_SU4 position;                            //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) bool showHighlight; 
@property (nonatomic,retain) UIColor * topBorderColor;                           //@synthesize topBorderColor=_topBorderColor - In the implementation block
@property (assign,nonatomic) bool usesSubviews; 
@property (assign,nonatomic) long long editState;                                //@synthesize editState=_editState - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setPosition:(SCD_Struct_SU4)arg1 ;
-(bool)_canDrawContent;
-(SCD_Struct_SU4)position;
-(void)setEditing:(bool)arg1 animated:(bool)arg2 ;
-(void)setHighlighted:(bool)arg1 animated:(bool)arg2 ;
-(void)setSelected:(bool)arg1 animated:(bool)arg2 ;
-(void)setShowingDeleteConfirmation:(bool)arg1 ;
-(void)setConfiguration:(id)arg1 ;
-(int)clipCorners;
-(void)setClipCorners:(int)arg1 ;
-(id)configuration;
-(bool)highlightsOnlyContentView;
-(bool)drawAsDisabled;
-(void)setDrawAsDisabled:(bool)arg1 ;
-(void)setHighlightsOnlyContentView:(bool)arg1 ;
-(bool)usesSubviews;
-(id)copyPurchaseAnimationView;
-(void)setEditState:(long long)arg1 ;
-(id)clippingPath;
-(id)itemOfferButton;
-(void)setBottomBorderColor:(id)arg1 ;
-(void)setShowHighlight:(bool)arg1 ;
-(void)setTopBorderColor:(id)arg1 ;
-(void)setUsesSubviews:(bool)arg1 ;
-(bool)showHighlight;
-(id)bottomBorderColor;
-(id)topBorderColor;
-(long long)editState;
@end

