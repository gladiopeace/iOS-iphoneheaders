/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface EKPersistentSharee : EKPersistentObject <NSCopying>

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * externalID; 
@property (assign,nonatomic) int shareeStatus; 
@property (assign,nonatomic) int shareeAccessLevel; 
+(id)defaultPropertiesToLoad;
+(id)relations;
+(id)shareeWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3 ;
+(id)shareeWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3 ;
-(id)initWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(int)shareeStatus;
-(void)setShareeStatus:(int)arg1 ;
-(int)shareeAccessLevel;
-(void)setShareeAccessLevel:(int)arg1 ;
-(int)entityType;
-(id)init;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)UUID;
-(id)displayName;
-(void)setEmailAddress:(id)arg1 ;
-(id)emailAddress;
-(void)setExternalID:(id)arg1 ;
-(id)externalID;
-(void)setDisplayName:(id)arg1 ;
-(id)owner;
-(id)firstName;
-(id)lastName;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
-(void)setOwner:(id)arg1 ;
@end

