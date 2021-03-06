/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/NSCopying.h>

@protocol EKTravelAdvice;
@class NSString, NSDate, NSTimeZone, NSURL;

@interface EKCalendarItemAlertInfo : NSObject <NSCopying> {

	BOOL _allDay;
	BOOL _tentative;
	BOOL _acknowledged;
	BOOL _isOffsetFromTravelTimeStart;
	BOOL _hasGeoLocationCoordinates;
	BOOL _hasOrganizerThatIsNotCurrentUser;
	NSString* _publisherBulletinID;
	NSString* _title;
	NSString* _location;
	NSDate* _eventDate;
	NSDate* _endDate;
	NSTimeZone* _eventTimeZone;
	NSURL* _action;
	NSURL* _entityID;
	long long _proximity;
	NSString* _externalID;
	NSString* _dismissalID;
	NSString* _alarmID;
	NSString* _startLocationRouting;
	NSString* _organizerEmailAddress;
	id<EKTravelAdvice> _latestTravelAdvice;
	NSDate* _lastFireTimeOfAlertOffsetFromTravelTime;
	NSDate* _firstDateAlertedForTravelAdvice;
	SCD_Struct_EK20 _geoLocationCoordinates;

}

@property (nonatomic,readonly) NSString * recordID; 
@property (nonatomic,readonly) NSString * publisherBulletinID;                              //@synthesize publisherBulletinID=_publisherBulletinID - In the implementation block
@property (nonatomic,readonly) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * location;                                         //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSDate * eventDate;                                          //@synthesize eventDate=_eventDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                            //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSTimeZone * eventTimeZone;                                  //@synthesize eventTimeZone=_eventTimeZone - In the implementation block
@property (nonatomic,readonly) NSURL * action;                                              //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSURL * entityID;                                            //@synthesize entityID=_entityID - In the implementation block
@property (nonatomic,readonly) BOOL allDay;                                                 //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,readonly) BOOL tentative;                                              //@synthesize tentative=_tentative - In the implementation block
@property (nonatomic,readonly) long long proximity;                                         //@synthesize proximity=_proximity - In the implementation block
@property (nonatomic,readonly) NSString * externalID;                                       //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) BOOL acknowledged;                                           //@synthesize acknowledged=_acknowledged - In the implementation block
@property (nonatomic,readonly) NSString * dismissalID;                                      //@synthesize dismissalID=_dismissalID - In the implementation block
@property (nonatomic,readonly) NSString * alarmID;                                          //@synthesize alarmID=_alarmID - In the implementation block
@property (nonatomic,readonly) BOOL isOffsetFromTravelTimeStart;                            //@synthesize isOffsetFromTravelTimeStart=_isOffsetFromTravelTimeStart - In the implementation block
@property (assign,nonatomic) BOOL hasGeoLocationCoordinates;                                //@synthesize hasGeoLocationCoordinates=_hasGeoLocationCoordinates - In the implementation block
@property (assign,nonatomic) SCD_Struct_EK20 geoLocationCoordinates;                        //@synthesize geoLocationCoordinates=_geoLocationCoordinates - In the implementation block
@property (nonatomic,retain) NSString * startLocationRouting;                               //@synthesize startLocationRouting=_startLocationRouting - In the implementation block
@property (assign,nonatomic) BOOL hasOrganizerThatIsNotCurrentUser;                         //@synthesize hasOrganizerThatIsNotCurrentUser=_hasOrganizerThatIsNotCurrentUser - In the implementation block
@property (nonatomic,retain) NSString * organizerEmailAddress;                              //@synthesize organizerEmailAddress=_organizerEmailAddress - In the implementation block
@property (nonatomic,retain) id<EKTravelAdvice> latestTravelAdvice;                         //@synthesize latestTravelAdvice=_latestTravelAdvice - In the implementation block
@property (nonatomic,retain) NSDate * lastFireTimeOfAlertOffsetFromTravelTime;              //@synthesize lastFireTimeOfAlertOffsetFromTravelTime=_lastFireTimeOfAlertOffsetFromTravelTime - In the implementation block
@property (nonatomic,retain) NSDate * firstDateAlertedForTravelAdvice;                      //@synthesize firstDateAlertedForTravelAdvice=_firstDateAlertedForTravelAdvice - In the implementation block
-(NSURL *)entityID;
-(NSString *)externalID;
-(BOOL)acknowledged;
-(long long)proximity;
-(NSString *)alarmID;
-(id)initWithTitle:(id)arg1 location:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 allDay:(BOOL)arg6 tentative:(BOOL)arg7 publisherBulletinID:(id)arg8 entityID:(id)arg9 action:(id)arg10 proximity:(long long)arg11 externalID:(id)arg12 acknowledged:(BOOL)arg13 dismissalID:(id)arg14 alarmID:(id)arg15 isOffsetFromTravelTimeStart:(BOOL)arg16 ;
-(void)setHasGeoLocationCoordinates:(BOOL)arg1 ;
-(void)setGeoLocationCoordinates:(SCD_Struct_EK20)arg1 ;
-(void)setHasOrganizerThatIsNotCurrentUser:(BOOL)arg1 ;
-(void)setOrganizerEmailAddress:(NSString *)arg1 ;
-(void)setStartLocationRouting:(NSString *)arg1 ;
-(NSTimeZone *)eventTimeZone;
-(NSString *)publisherBulletinID;
-(BOOL)tentative;
-(NSString *)dismissalID;
-(BOOL)isOffsetFromTravelTimeStart;
-(BOOL)hasGeoLocationCoordinates;
-(SCD_Struct_EK20)geoLocationCoordinates;
-(NSString *)startLocationRouting;
-(BOOL)hasOrganizerThatIsNotCurrentUser;
-(NSString *)organizerEmailAddress;
-(id<EKTravelAdvice>)latestTravelAdvice;
-(void)setLatestTravelAdvice:(id<EKTravelAdvice>)arg1 ;
-(NSDate *)lastFireTimeOfAlertOffsetFromTravelTime;
-(void)setLastFireTimeOfAlertOffsetFromTravelTime:(NSDate *)arg1 ;
-(NSDate *)firstDateAlertedForTravelAdvice;
-(void)setFirstDateAlertedForTravelAdvice:(NSDate *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)action;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)location;
-(NSString *)recordID;
-(NSDate *)eventDate;
-(BOOL)allDay;
-(NSDate *)endDate;
@end

