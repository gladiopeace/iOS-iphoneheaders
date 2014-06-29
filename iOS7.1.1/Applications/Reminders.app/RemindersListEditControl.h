/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIControl.h>

@protocol RemindersListEditControlDelegate;
@class UILabel, UIView, UIImageView;

@interface RemindersListEditControl : UIControl {

	UILabel* _label;
	UIView* _dividerLine;
	UIImageView* _chevronImageView;
	<RemindersListEditControlDelegate>* _delegate;
	float _desiredHeight;

}

@property (nonatomic,retain) <RemindersListEditControlDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float desiredHeight;                                        //@synthesize desiredHeight=_desiredHeight - In the implementation block
-(void)_touchDown;
-(void)_touchUpOutside;
-(void)setDesiredHeight:(float)arg1 ;
-(float)desiredHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(void).cxx_destruct;
-(void)_touchUpInside;
@end

