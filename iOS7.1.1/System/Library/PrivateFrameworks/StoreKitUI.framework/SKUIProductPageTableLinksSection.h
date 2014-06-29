/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class NSMutableArray, SKUIProductPageItem, SKUIColorScheme;

@interface SKUIProductPageTableLinksSection : SKUIProductPageTableSection {

	NSMutableArray* _actions;
	SKUIProductPageItem* _item;
	NSMutableArray* _titles;
	SKUIColorScheme* _colorScheme;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
-(void).cxx_destruct;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithItem:(id)arg1 clientContext:(id)arg2 ;
-(id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2 ;
@end

