/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:21:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface RUHistoryTableHeaderView : UIView {

	UILabel* _textLabel;
	UILabel* _detailTextLabel;

}
+(float)defaultHeightForTraitCollection:(id)arg1 headerType:(unsigned)arg2 ;
+(id)_textLabelFontWithEmphasis:(char)arg1 ;
+(id)_detailTextLabelFont;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 emphasizedText:(id)arg2 detailText:(id)arg3 ;
@end
