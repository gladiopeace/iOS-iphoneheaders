/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString, ICSDateValue;

@interface ICSUserAddress : ICSProperty

@property (assign) bool rsvp; 
@property (retain) NSString * cn; 
@property (assign) int cutype; 
@property (retain) NSString * dir; 
@property (assign) int partstat; 
@property (assign) int schedulestatus; 
@property (assign) int scheduleagent; 
@property (assign) int scheduleforcesend; 
@property (assign) int role; 
@property (retain) ICSDateValue * partstatModified; 
@property (assign) bool x_apple_self_invited; 
@property (retain) NSString * email; 
+(id)URLForNoMail;
+(int)roleFromICSString:(id)arg1 ;
+(int)calendarUserFromICSString:(id)arg1 ;
+(int)participationStatusFromICSString:(id)arg1 ;
+(int)scheduleStatusFromICSString:(id)arg1 ;
+(int)scheduleAgentFromICSString:(id)arg1 ;
+(int)scheduleForceSendFromICSString:(id)arg1 ;
+(id)ICSStringFromCalendarUser:(int)arg1 ;
+(id)ICSStringFromParticipationStatus:(int)arg1 ;
+(id)ICSStringFromScheduleAgent:(int)arg1 ;
+(id)ICSStringFromScheduleStatus:(int)arg1 ;
+(id)ICSStringFromScheduleForceSend:(int)arg1 ;
+(id)ICSStringFromRole:(int)arg1 ;
-(void)setURL:(id)arg1 ;
-(void)fixAddress;
-(id)cn;
-(int)cutype;
-(int)partstat;
-(int)role;
-(int)scheduleagent;
-(bool)rsvp;
-(id)partstatModified;
-(id)initWithEmailAddress:(id)arg1 ;
-(void)setCn:(id)arg1 ;
-(void)setCutype:(int)arg1 ;
-(void)setPartstat:(int)arg1 ;
-(void)setRole:(int)arg1 ;
-(void)setScheduleagent:(int)arg1 ;
-(void)setRsvp:(bool)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)displayName;
-(void)setEmail:(id)arg1 ;
-(id)emailAddress;
-(id)email;
-(id)dir;
-(void)setDir:(id)arg1 ;
-(bool)isEmailAddress;
-(bool)isHTTPAddress;
-(bool)isHTTPSAddress;
-(bool)hasEmailAddress;
-(void)setSchedulestatus:(int)arg1 ;
-(int)schedulestatus;
-(void)setScheduleforcesend:(int)arg1 ;
-(int)scheduleforcesend;
-(void)setPartstatModified:(id)arg1 ;
-(void)setX_apple_self_invited:(bool)arg1 ;
-(bool)x_apple_self_invited;
-(void)setX_calendarserver_email:(id)arg1 ;
-(id)x_calendarserver_email;
@end

