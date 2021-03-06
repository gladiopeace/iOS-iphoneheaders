/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class NSMutableArray, NSString, SKUISegmentedControlViewElement, NSArray;

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

@property (nonatomic,readonly) SKUISegmentedControlViewElement * viewElement; 
@property (nonatomic,readonly) long long menuStyle;                                        //@synthesize menuStyle=_menuStyle - In the implementation block
@property (nonatomic,readonly) NSString * menuTitle;                                       //@synthesize menuTitle=_menuTitle - In the implementation block
@property (nonatomic,readonly) float menuTitleFontSize;                                    //@synthesize menuTitleFontSize=_menuTitleFontSize - In the implementation block
@property (nonatomic,readonly) long long menuTitleFontWeight;                              //@synthesize menuTitleFontWeight=_menuTitleFontWeight - In the implementation block
@property (nonatomic,readonly) long long defaultSelectedIndex;                             //@synthesize defaultSelectedIndex=_defaultSelectedIndex - In the implementation block
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,readonly) NSArray * allTitles; 
@property (nonatomic,readonly) NSString * titleForMoreItem;                                //@synthesize titleForMoreItem=_titleForMoreItem - In the implementation block
-(long long)numberOfItems;
-(NSString *)menuTitle;
-(long long)defaultSelectedIndex;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(long long)componentType;
-(id)childComponentsForIndex:(long long)arg1 ;
-(id)initWithRoomSortData:(id)arg1 ;
-(void)_setChildComponents:(id)arg1 forIndex:(long long)arg2 ;
-(long long)menuStyle;
-(id)_componentWithContext:(id)arg1 ;
-(NSArray *)allTitles;
-(id)sortURLForIndex:(long long)arg1 ;
-(id)titleForIndex:(long long)arg1 ;
-(float)menuTitleFontSize;
-(long long)menuTitleFontWeight;
-(NSString *)titleForMoreItem;
@end

