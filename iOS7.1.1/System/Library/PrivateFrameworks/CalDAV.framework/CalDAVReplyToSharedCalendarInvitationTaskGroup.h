/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CalDAV/CoreDAVPostTaskDelegate.h>

@class CalDAVCalendarServerInviteNotificationItem, NSURL;

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {

	CalDAVCalendarServerInviteNotificationItem* _invitation;
	bool _acceptInvitation;
	NSURL* _calendarHomeURL;
	NSURL* _sharedAs;

}

@property (assign,nonatomic,@dynamic) <CoreDAVTaskGroupDelegate> * delegate; 
@property (nonatomic,retain) NSURL * sharedAs;                                            //@synthesize sharedAs=_sharedAs - In the implementation block
@property (retain) CalDAVCalendarServerInviteNotificationItem * invitation;               //@synthesize invitation=_invitation - In the implementation block
@property (assign) bool acceptInvitation;                                                 //@synthesize acceptInvitation=_acceptInvitation - In the implementation block
@property (retain) NSURL * calendarHomeURL;                                               //@synthesize calendarHomeURL=_calendarHomeURL - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setAcceptInvitation:(bool)arg1 ;
-(void)setSharedAs:(id)arg1 ;
-(id)generateReply;
-(id)initWithInvitation:(id)arg1 acceptInvitation:(bool)arg2 atCalendarHomeURL:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5 ;
-(id)sharedAs;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(id)invitation;
-(void)setInvitation:(id)arg1 ;
-(id)calendarHomeURL;
-(void)setCalendarHomeURL:(id)arg1 ;
-(bool)acceptInvitation;
@end

