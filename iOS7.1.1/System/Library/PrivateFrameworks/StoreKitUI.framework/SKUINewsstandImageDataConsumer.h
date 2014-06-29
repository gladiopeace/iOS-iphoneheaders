/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageDataConsumer.h>
#import <CoreFoundation/NSCopying.h>

@class UIColor, SKUIColorScheme;

@interface SKUINewsstandImageDataConsumer : SKUIImageDataConsumer <NSCopying> {

	UIColor* _backgroundColor;
	SKUIColorScheme* _colorScheme;
	CGSize _iconSize;
	long long _bindingEdge;
	long long _bindingType;

}

@property (nonatomic,readonly) CGSize iconSize;                          //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) long long bindingEdge;                      //@synthesize bindingEdge=_bindingEdge - In the implementation block
@property (assign,nonatomic) long long bindingType;                      //@synthesize bindingType=_bindingType - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
+(id)smartBannerConsumer;
+(id)cardConsumer;
+(id)consumerWithSize:(CGSize)arg1 ;
+(id)giftComposeConsumer;
+(id)giftResultConsumer;
+(id)giftThemeConsumer;
+(id)lockupConsumerWithSize:(long long)arg1 ;
+(id)chartsConsumer;
+(id)mixedChartsConsumer;
+(id)roomConsumer;
+(id)wishlistConsumer;
+(id)productPageConsumer;
+(id)newsstandRoomConsumer;
+(id)swooshConsumer;
+(id)newsstandSwooshConsumer;
+(id)updatesConsumer;
+(id)purchasedConsumer;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)_borderImage;
-(void).cxx_destruct;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(id)imageForImage:(id)arg1 ;
-(id)imageForColor:(id)arg1 ;
-(CGSize)iconSize;
-(id)imageForSize:(CGSize)arg1 ;
-(long long)bindingEdge;
-(void)setBindingEdge:(long long)arg1 ;
-(long long)bindingType;
-(void)setBindingType:(long long)arg1 ;
@end

