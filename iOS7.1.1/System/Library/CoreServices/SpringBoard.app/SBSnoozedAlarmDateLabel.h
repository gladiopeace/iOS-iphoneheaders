/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UILabel.h>
#import <SpringBoard/SBBulletinDateLabel.h>

@protocol SBDateLabelDelegate;
@class NSTimer;

@interface SBSnoozedAlarmDateLabel : UILabel <SBBulletinDateLabel> {

	double _fireTime;
	NSTimer* _tickTimer;
	BOOL _allDay;
	BOOL isTimestamp;
	<SBDateLabelDelegate>* _delegate;
	int _labelType;

}

@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                   //@synthesize allDay=_allDay - In the implementation block
@property (assign,nonatomic) <SBDateLabelDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int labelType;                                 //@synthesize labelType=_labelType - In the implementation block
@property (assign,nonatomic) BOOL isTimestamp; 
-(id)_formatDuration:(double)arg1 ;
-(void)_tickTimerFired:(id)arg1 ;
-(void)setStartDate:(id)arg1 withTimeZone:(id)arg2 ;
-(void)setEndDate:(id)arg1 withTimeZone:(id)arg2 ;
-(void)startCoalescingUpdates;
-(void)stopCoalescingUpdates;
-(int)labelType;
-(void)setLabelType:(int)arg1 ;
-(BOOL)isTimestamp;
-(void)setIsTimestamp:(BOOL)arg1 ;
-(void)_invalidateTimer;
-(BOOL)isAllDay;
-(void)setAllDay:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)prepareForReuse;
-(void)_updateText;
@end

