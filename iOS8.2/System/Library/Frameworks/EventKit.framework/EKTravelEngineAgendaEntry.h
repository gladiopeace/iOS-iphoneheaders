/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, EKTravelAgendaItem, EKTravelAdvisor;

@interface EKTravelEngineAgendaEntry : NSObject {

	char _dismissed;
	NSString* _eventExternalURL;
	EKTravelAgendaItem* _agendaItem;
	EKTravelAdvisor* _advisor;

}

@property (nonatomic,retain) NSString * eventExternalURL;                  //@synthesize eventExternalURL=_eventExternalURL - In the implementation block
@property (nonatomic,retain) EKTravelAgendaItem * agendaItem;              //@synthesize agendaItem=_agendaItem - In the implementation block
@property (assign,nonatomic) char dismissed;                               //@synthesize dismissed=_dismissed - In the implementation block
@property (nonatomic,retain) EKTravelAdvisor * advisor;                    //@synthesize advisor=_advisor - In the implementation block
-(EKTravelAgendaItem *)agendaItem;
-(void)setAgendaItem:(EKTravelAgendaItem *)arg1 ;
-(void)setDismissed:(char)arg1 ;
-(EKTravelAdvisor *)advisor;
-(void)setEventExternalURL:(NSString *)arg1 ;
-(NSString *)eventExternalURL;
-(void)setAdvisor:(EKTravelAdvisor *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(char)dismissed;
@end

