/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/TKTonePickerStyleProvider.h>

@class UIFont, UIColor;

@interface ABFaceTimeTonePickerStyleProvider : NSObject <TKTonePickerStyleProvider> {

	UIFont* _tonePickerCellTextFont;
	UIColor* _tonePickerCellHighlightedTextColor;
	UIFont* _tonePickerHeaderTextFont;
	UIColor* _tonePickerHeaderTextShadowColor;
	UIOffset _tonePickerHeaderTextShadowOffset;
	UIEdgeInsets _tonePickerHeaderTextPaddingInsets;

}

@property (nonatomic,readonly) UIFont * tonePickerCellTextFont;                             //@synthesize tonePickerCellTextFont=_tonePickerCellTextFont - In the implementation block
@property (nonatomic,readonly) UIColor * tonePickerCellHighlightedTextColor;                //@synthesize tonePickerCellHighlightedTextColor=_tonePickerCellHighlightedTextColor - In the implementation block
@property (nonatomic,readonly) UIFont * tonePickerHeaderTextFont;                           //@synthesize tonePickerHeaderTextFont=_tonePickerHeaderTextFont - In the implementation block
@property (nonatomic,readonly) UIColor * tonePickerHeaderTextShadowColor;                   //@synthesize tonePickerHeaderTextShadowColor=_tonePickerHeaderTextShadowColor - In the implementation block
@property (nonatomic,readonly) UIOffset tonePickerHeaderTextShadowOffset;                   //@synthesize tonePickerHeaderTextShadowOffset=_tonePickerHeaderTextShadowOffset - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets tonePickerHeaderTextPaddingInsets;              //@synthesize tonePickerHeaderTextPaddingInsets=_tonePickerHeaderTextPaddingInsets - In the implementation block
@property (nonatomic,readonly) bool tonePickerUsesOpaqueBackground; 
@property (nonatomic,readonly) long long tonePickerTableViewSeparatorStyle; 
@property (nonatomic,readonly) UIColor * tonePickerCellTextColor; 
@property (nonatomic,readonly) UIColor * tonePickerCellBackgroundColor; 
@property (nonatomic,readonly) bool wantsCustomTonePickerHeaderView; 
@property (nonatomic,readonly) UIColor * tonePickerHeaderTextColor; 
-(bool)tonePickerUsesOpaqueBackground;
-(long long)tonePickerTableViewSeparatorStyle;
-(id)tonePickerCellTextFont;
-(id)tonePickerCellTextColor;
-(id)tonePickerCellHighlightedTextColor;
-(id)tonePickerCellBackgroundColor;
-(id)newBackgroundViewForSelectedTonePickerCell:(bool)arg1 ;
-(id)newAccessoryDisclosureIndicatorViewForTonePickerCell;
-(bool)wantsCustomTonePickerHeaderView;
-(id)tonePickerHeaderTextFont;
-(id)tonePickerHeaderTextColor;
-(id)tonePickerHeaderTextShadowColor;
-(UIOffset)tonePickerHeaderTextShadowOffset;
-(UIEdgeInsets)tonePickerHeaderTextPaddingInsets;
@end

