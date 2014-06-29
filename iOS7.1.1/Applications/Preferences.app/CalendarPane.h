/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSEditingPane.h>
#import <EventKitUI/EKCalendarChooserDelegate.h>

@class EKCalendarChooser;

@interface CalendarPane : PSEditingPane <EKCalendarChooserDelegate> {

	EKCalendarChooser* _chooser;

}

@property (nonatomic,retain) EKCalendarChooser * chooser;              //@synthesize chooser=_chooser - In the implementation block
-(id)chooser;
-(void)setChooser:(id)arg1 ;
-(void)calendarChooserSelectionDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end

