/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class NSMutableArray, NSString, NSArray;

@interface SKUIMenuPageComponent : SKUIPageComponent {

	NSMutableArray* _childrenComponents;
	long long _defaultSelectedIndex;
	long long _menuStyle;
	NSString* _menuTitle;
	float _menuTitleFontSize;
	long long _menuTitleFontWeight;
	NSMutableArray* _sortURLStrings;
	NSString* _titleForMoreItem;
	NSMutableArray* _titles;

}

@property (nonatomic,readonly) long long menuStyle;                         //@synthesize menuStyle=_menuStyle - In the implementation block
@property (nonatomic,readonly) NSString * menuTitle;                        //@synthesize menuTitle=_menuTitle - In the implementation block
@property (nonatomic,readonly) float menuTitleFontSize;                     //@synthesize menuTitleFontSize=_menuTitleFontSize - In the implementation block
@property (nonatomic,readonly) long long menuTitleFontWeight;               //@synthesize menuTitleFontWeight=_menuTitleFontWeight - In the implementation block
@property (nonatomic,readonly) long long defaultSelectedIndex;              //@synthesize defaultSelectedIndex=_defaultSelectedIndex - In the implementation block
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,readonly) NSArray * allTitles; 
@property (nonatomic,readonly) NSString * titleForMoreItem;                 //@synthesize titleForMoreItem=_titleForMoreItem - In the implementation block
-(id)allTitles;
-(long long)numberOfItems;
-(id)menuTitle;
-(void).cxx_destruct;
-(long long)defaultSelectedIndex;
-(id)initWithCustomPageContext:(id)arg1 ;
-(long long)componentType;
-(id)childComponentsForIndex:(long long)arg1 ;
-(id)initWithRoomSortData:(id)arg1 ;
-(void)_setChildComponents:(id)arg1 forIndex:(long long)arg2 ;
-(id)_componentWithContext:(id)arg1 ;
-(id)sortURLForIndex:(long long)arg1 ;
-(id)titleForIndex:(long long)arg1 ;
-(long long)menuStyle;
-(float)menuTitleFontSize;
-(long long)menuTitleFontWeight;
-(id)titleForMoreItem;
@end

