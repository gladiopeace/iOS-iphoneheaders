/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class UIColor;

@interface SKUIColorScheme : NSObject <NSCopying, NSSecureCoding> {

	UIColor* _backgroundColor;
	UIColor* _highlightedTextColor;
	UIColor* _primaryTextColor;
	UIColor* _secondaryTextColor;

}

@property (nonatomic,readonly) long long schemeStyle; 
@property (nonatomic,copy) UIColor * backgroundColor;                   //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * highlightedTextColor;              //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (nonatomic,copy) UIColor * primaryTextColor;                  //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,copy) UIColor * secondaryTextColor;                //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
+(bool)supportsSecureCoding;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setHighlightedTextColor:(id)arg1 ;
-(id)highlightedTextColor;
-(void).cxx_destruct;
-(id)primaryTextColor;
-(id)initWithColorSchemeDictionary:(id)arg1 ;
-(long long)schemeStyle;
-(void)setPrimaryTextColor:(id)arg1 ;
-(id)secondaryTextColor;
-(void)setSecondaryTextColor:(id)arg1 ;
@end

