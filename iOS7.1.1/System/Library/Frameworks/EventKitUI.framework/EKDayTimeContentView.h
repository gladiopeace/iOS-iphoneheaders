/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@class EKDayTimeView;

@interface EKDayTimeContentView : UIView {

	EKDayTimeView* _owner;
	NSRange _hourRange;

}

@property (assign,nonatomic) EKDayTimeView * owner;              //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) NSRange hourRange;                  //@synthesize hourRange=_hourRange - In the implementation block
-(void)setHourRange:(NSRange)arg1 ;
-(NSRange)hourRange;
-(void)drawRect:(CGRect)arg1 ;
-(id)owner;
-(void)setOwner:(id)arg1 ;
@end

