/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>
#import <EventKitUI/EKCellShortener.h>

@class UITableViewCell;

@interface EKEventEditedByDetailItem : EKEventDetailItem <EKCellShortener> {

	UITableViewCell* _cell;

}
-(bool)configureWithCalendar:(id)arg1 preview:(bool)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(void)shortenCell:(id)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1 ;
-(void)reset;
-(void).cxx_destruct;
@end

