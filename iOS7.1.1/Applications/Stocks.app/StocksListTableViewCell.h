/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, StocksListBoxView, UIImageView, UIView, Stock;

@interface StocksListTableViewCell : UITableViewCell {

	UILabel* _symbolLabel;
	UILabel* _priceLabel;
	UILabel* _boxLabel;
	StocksListBoxView* _boxView;
	UIImageView* _changeSignView;
	UIImageView* _percentSignView;
	UIView* _rowSeparatorView;
	Stock* _stock;
	int _rowDataType;

}

@property (nonatomic,retain) Stock * stock;                //@synthesize stock=_stock - In the implementation block
@property (assign,nonatomic) int rowDataType;              //@synthesize rowDataType=_rowDataType - In the implementation block
-(void)setRowDataType:(int)arg1 ;
-(void)setShowsRowSeparator:(BOOL)arg1 ;
-(CGRect)changeButtonRect;
-(void)setBoxContentsAlpha:(float)arg1 includeChangeSign:(BOOL)arg2 ;
-(void)updateValues;
-(int)rowDataType;
-(void)setBoxValueFromRowDataType;
-(id)percentSignSmall:(BOOL)arg1 ;
-(id)changeSignNegative:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)scriptingInfoWithChildren;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void).cxx_destruct;
-(void)setStock:(id)arg1 ;
-(id)stock;
@end

