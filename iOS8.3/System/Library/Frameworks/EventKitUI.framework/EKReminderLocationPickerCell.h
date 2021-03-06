/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:47:08 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol EKReminderLocationPickerCellButtonHandler, EKStyleProvider;
@class UIImageView, UIButton;

@interface EKReminderLocationPickerCell : UITableViewCell {

	UIImageView* _spinner;
	UIImageView* _checkmark;
	UIButton* _failureButton;
	UIButton* _contactsButton;
	id<EKReminderLocationPickerCellButtonHandler> _buttonHandler;
	id<EKStyleProvider> _styleProvider;
	int _locationPickerCellAccessoryType;

}

@property (assign,nonatomic) int locationPickerCellAccessoryType;              //@synthesize locationPickerCellAccessoryType=_locationPickerCellAccessoryType - In the implementation block
-(id)_exclamationGlyphImage;
-(id)_failImage;
-(id)_failPressedImage;
-(id)initWithStyle:(int)arg1 buttonHandler:(id)arg2 styleProvider:(id)arg3 ;
-(void)setLocationPickerCellAccessoryType:(int)arg1 ;
-(int)locationPickerCellAccessoryType;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
@end

