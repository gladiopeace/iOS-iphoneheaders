/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailItem.h>
#import <EventKitUI/EKEventDetailTitleCellDelegate.h>

@protocol EKEventTitleDetailItemDelegate;
@class UITableViewCell, UIColor, NSObject;

@interface EKEventTitleDetailItem : EKEventDetailItem <EKEventDetailTitleCellDelegate> {

	UITableViewCell* _cell;
	UIColor* _color;
	bool _showDot;
	bool _cellNeedsUpdate;
	NSObject<EKEventTitleDetailItemDelegate>* _editDelegate;

}

@property (assign,nonatomic,__weak) NSObject<EKEventTitleDetailItemDelegate> * editDelegate;              //@synthesize editDelegate=_editDelegate - In the implementation block
-(void)setEditDelegate:(id)arg1 ;
-(id)editDelegate;
-(bool)configureWithCalendar:(id)arg1 preview:(bool)arg2 ;
-(void)setCellPosition:(int)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(bool)shouldShowEditButtonInline;
-(void)editButtonPressed;
-(void)_updateCellIfNeededForWidth:(double)arg1 ;
-(void)reset;
-(void).cxx_destruct;
@end

