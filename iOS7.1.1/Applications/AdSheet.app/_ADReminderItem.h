/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate;

@interface _ADReminderItem : NSObject {

	NSString* _title;
	NSString* _notes;
	NSString* _location;
	BOOL _hasCoordinates;
	double _degreesLatitude;
	double _degreesLongitude;
	NSDate* _dueDate;

}
-(id)EKReminderInEventStore:(id)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
@end

