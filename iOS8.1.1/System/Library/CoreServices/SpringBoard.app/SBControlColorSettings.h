/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class UIColor;

@interface SBControlColorSettings : NSObject {

	UIColor* _tintColor;
	UIColor* _selectedTintColor;
	UIColor* _textColor;
	UIColor* _selectedTextColor;

}

@property (nonatomic,retain,readonly) UIColor * tintColor;                      //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain,readonly) UIColor * selectedTintColor;              //@synthesize selectedTintColor=_selectedTintColor - In the implementation block
@property (nonatomic,retain,readonly) UIColor * textColor;                      //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain,readonly) UIColor * selectedTextColor;              //@synthesize selectedTextColor=_selectedTextColor - In the implementation block
+(id)settingsWithTintColor:(id)arg1 selectedTintColor:(id)arg2 textColor:(id)arg3 selectedTextColor:(id)arg4 ;
-(UIColor *)selectedTintColor;
-(id)initWithTintColor:(id)arg1 selectedTintColor:(id)arg2 textColor:(id)arg3 selectedTextColor:(id)arg4 ;
-(void)dealloc;
-(UIColor *)tintColor;
-(UIColor *)textColor;
-(UIColor *)selectedTextColor;
@end

