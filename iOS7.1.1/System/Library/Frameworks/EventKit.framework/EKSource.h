/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class NSString, NSSet, NSNumber, EKSourceConstraints;

@interface EKSource : EKObject

@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) int sourceType; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) NSSet * calendars; 
@property (nonatomic,copy) NSNumber * defaultAlarmOffset; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (getter=isEnabled,nonatomic,readonly) bool enabled; 
@property (nonatomic,readonly) bool isFacebookSource; 
@property (nonatomic,readonly) EKSourceConstraints * constraints; 
@property (nonatomic,readonly) int displayOrderForNewCalendar; 
@property (assign,nonatomic) bool onlyCreatorCanModify; 
@property (nonatomic,readonly) NSSet * allCalendars; 
+(id)sourceWithEventStore:(id)arg1 ;
-(bool)commit:(id*)arg1 ;
-(id)calendars;
-(id)calendarsForEntityType:(unsigned long long)arg1 ;
-(id)readWriteCalendarsForEntityType:(unsigned long long)arg1 ;
-(id)externalModificationTag;
-(void)setExternalModificationTag:(id)arg1 ;
-(id)_persistentItem;
-(bool)isFacebookSource;
-(bool)onlyCreatorCanModify;
-(id)allCalendars;
-(id)defaultAlarmOffset;
-(void)setDefaultAlarmOffset:(id)arg1 ;
-(void)setOnlyCreatorCanModify:(bool)arg1 ;
-(int)displayOrderForNewCalendar;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(bool)isEnabled;
-(id)title;
-(id)constraints;
-(int)sourceType;
-(void)setExternalID:(id)arg1 ;
-(id)externalID;
-(id)sourceIdentifier;
-(bool)remove:(id*)arg1 ;
@end

