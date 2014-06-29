/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>

@class NSArray;

@interface EKEventAvailabilityEditItem : EKEventEditItem {

	int _availability;
	unsigned long long _supportedAvailabilities;
	NSArray* _choices;
	unsigned long long _availabilityIndexInChoices;

}
-(bool)saveAndDismissWithForce:(bool)arg1 ;
-(bool)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2 ;
-(void)refreshFromCalendarItemAndStore;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3 ;
-(bool)editItemViewControllerCommit:(id)arg1 ;
-(void).cxx_destruct;
@end
