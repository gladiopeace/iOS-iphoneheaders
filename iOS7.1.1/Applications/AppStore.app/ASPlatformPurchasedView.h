/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface ASPlatformPurchasedView : UIView {

	UIView* _contentView;
	UIView* _headerView;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) UIView * contentView;                    //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * headerView;                     //@synthesize headerView=_headerView - In the implementation block
-(void)layoutSubviews;
-(id)contentView;
-(void)setContentView:(id)arg1 ;
-(id)headerView;
-(void)setHeaderView:(id)arg1 ;
-(void).cxx_destruct;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
@end

