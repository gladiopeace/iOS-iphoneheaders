/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:30 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBLockScreenBulletinCell.h>
#import <SpringBoard/SBDateLabelDelegate.h>

@class SBSnoozedAlarmDateLabel;

@interface SBLockScreenSnoozedAlarmCell : SBLockScreenBulletinCell <SBDateLabelDelegate> {

	SBSnoozedAlarmDateLabel* _countdownLabel;

}
+(char)wantsUnlockActionText;
+(float)rowHeight;
-(void)dateLabelDidChange:(id)arg1 ;
-(void)setContentAlpha:(float)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setFireDate:(id)arg1 ;
@end

