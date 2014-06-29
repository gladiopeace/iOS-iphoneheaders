/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EKEventOccurrenceInfo, EKEvent, EKCalendarEventInvitationNotification, NSDictionary;

@interface InboxRepliedSectionItem : NSObject {

	EKEventOccurrenceInfo* _occurrenceInfo;
	EKEvent* _event;
	EKCalendarEventInvitationNotification* _notification;
	NSDictionary* _cellFrameDictionary;

}

@property (nonatomic,retain) EKEventOccurrenceInfo * occurrenceInfo;                            //@synthesize occurrenceInfo=_occurrenceInfo - In the implementation block
@property (nonatomic,retain) EKEvent * event;                                                   //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) EKCalendarEventInvitationNotification * notification;              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,retain) NSDictionary * cellFrameDictionary;                                //@synthesize cellFrameDictionary=_cellFrameDictionary - In the implementation block
-(id)cellFrameDictionary;
-(void)setCellFrameDictionary:(id)arg1 ;
-(id)initWithOccurrenceInfo:(id)arg1 ;
-(id)occurrenceInfo;
-(void)setOccurrenceInfo:(id)arg1 ;
-(id)description;
-(void)setEvent:(id)arg1 ;
-(id)event;
-(void).cxx_destruct;
-(void)setNotification:(id)arg1 ;
-(id)notification;
@end

