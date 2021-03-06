/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentParticipant.h>

@class NSDate;

@interface EKPersistentAttendee : EKPersistentParticipant

@property (assign,nonatomic) int participantStatus; 
@property (assign,nonatomic) int participantRole; 
@property (assign,nonatomic) int participantType; 
@property (assign,nonatomic) int pendingStatus; 
@property (nonatomic,copy) NSDate * lastModified; 
@property (assign,nonatomic) BOOL commentChanged; 
@property (assign,nonatomic) BOOL statusChanged; 
+(id)defaultPropertiesToLoad;
+(id)relations;
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
+(id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(id)initWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(int)participantRole;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
-(void)setParticipantRole:(int)arg1 ;
-(int)pendingStatus;
-(void)setPendingStatus:(int)arg1 ;
-(void)setLastModified:(NSDate *)arg1 ;
-(void)_setFlag:(unsigned)arg1 value:(BOOL)arg2 ;
-(BOOL)_valueForFlag:(unsigned)arg1 ;
-(id)initWithAddress:(id)arg1 name:(id)arg2 ;
-(void)setCommentChanged:(BOOL)arg1 ;
-(BOOL)commentChanged;
-(void)setStatusChanged:(BOOL)arg1 ;
-(BOOL)statusChanged;
-(int)entityType;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)participantType;
-(int)participantStatus;
-(id)owner;
-(void)setParticipantType:(int)arg1 ;
-(void)setParticipantStatus:(int)arg1 ;
-(NSDate *)lastModified;
-(void)setOwner:(id)arg1 ;
@end

