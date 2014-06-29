/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UITableView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class EKEvent, NSArray, UIImage;

@interface EKAttendeesListView : UITableView <UITableViewDelegate, UITableViewDataSource> {

	EKEvent* _event;
	NSArray* _attendees;
	id _attendeeDelegate;
	bool _shouldShowStatusImages;
	UIImage* _attendingImage;
	UIImage* _maybeImage;
	UIImage* _notAttendingImage;
	UIImage* _pendingImage;

}
-(id)initWithFrame:(CGRect)arg1 event:(id)arg2 ;
-(void)setAttendeeDelegate:(id)arg1 ;
-(void)loadAttendees;
-(void)eventModified:(id)arg1 ;
-(id)_imageForStatus:(int)arg1 ;
-(id)_attendingImage;
-(id)_maybeImage;
-(id)_notAttendingImage;
-(id)_pendingImage;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void).cxx_destruct;
@end

