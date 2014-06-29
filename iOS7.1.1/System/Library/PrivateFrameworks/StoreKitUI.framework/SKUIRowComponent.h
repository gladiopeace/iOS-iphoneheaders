/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class UIColor, NSArray;

@interface SKUIRowComponent : SKUIPageComponent {

	UIColor* _backgroundColor;
	NSArray* _childComponents;
	NSArray* _columnWidths;
	long long _missingItemCount;
	long long _numberOfColumns;

}

@property (nonatomic,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) NSArray * childComponents;              //@synthesize childComponents=_childComponents - In the implementation block
@property (nonatomic,readonly) NSArray * columnWidths;                 //@synthesize columnWidths=_columnWidths - In the implementation block
@property (nonatomic,readonly) long long numberOfColumns;              //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
-(id)backgroundColor;
-(id)description;
-(long long)numberOfColumns;
-(void).cxx_destruct;
-(id)initWithCustomPageContext:(id)arg1 ;
-(long long)componentType;
-(void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(bool)isMissingItemData;
-(id)metricsElementName;
-(id)_updateWithMissingItems:(id)arg1 ;
-(id)_childComponentWithContext:(id)arg1 ;
-(bool)_isChildMissingItemData:(id)arg1 ;
-(id)childComponents;
-(id)columnWidths;
@end

