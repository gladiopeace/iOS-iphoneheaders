/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUITableViewCell.h>

@class UILabel, NSString;

@interface SKUIProductPageInAppPurchaseTableCell : SKUITableViewCell {

	UILabel* _indexLabel;
	UILabel* _nameLabel;
	UILabel* _priceLabel;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,copy) NSString * indexString; 
@property (nonatomic,copy) NSString * priceString; 
@property (nonatomic,copy) NSString * productName; 
@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(bool)arg1 animated:(bool)arg2 ;
-(void)setSelected:(bool)arg1 animated:(bool)arg2 ;
-(void).cxx_destruct;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(id)productName;
-(id)indexString;
-(id)priceString;
-(void)setIndexString:(id)arg1 ;
-(void)setPriceString:(id)arg1 ;
-(void)setProductName:(id)arg1 ;
@end

