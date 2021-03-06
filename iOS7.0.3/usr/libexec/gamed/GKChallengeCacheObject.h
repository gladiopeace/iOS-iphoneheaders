/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKListEntryCacheObject.h>
#import <gamed/GKCacheObjectImageProtocol.h>

@class NSString, NSDate, NSOrderedSet, NSSet;

@interface GKChallengeCacheObject : GKListEntryCacheObject <GKCacheObjectImageProtocol>

@property (nonatomic,@dynamic,retain) NSString * challengeID; 
@property (nonatomic,@dynamic,retain) NSString * bundleID; 
@property (nonatomic,@dynamic,retain) NSString * message; 
@property (nonatomic,@dynamic,retain) NSString * issuingPlayerID; 
@property (nonatomic,@dynamic,retain) NSString * receivingPlayerID; 
@property (nonatomic,@dynamic,retain) NSDate * issueDate; 
@property (nonatomic,@dynamic,retain) NSDate * completionDate; 
@property (assign,nonatomic,@dynamic) unsigned state; 
@property (nonatomic,@dynamic,retain) NSDate * detailsExpirationDate; 
@property (assign,nonatomic,@dynamic) BOOL wasViewed; 
@property (nonatomic,@dynamic,retain) NSOrderedSet * compatibleBundleIDs; 
@property (nonatomic,@dynamic,retain) NSSet * listEntries; 
@property (nonatomic,@dynamic,retain) NSString * identifier; 
@property (nonatomic,@dynamic,retain) NSString * groupIdentifier; 
@property (nonatomic,@dynamic,retain) NSString * image64; 
@property (nonatomic,@dynamic,retain) NSString * image128; 
@property (nonatomic,@dynamic,retain) NSString * image256; 
@property (nonatomic,@dynamic,retain) NSString * image512; 
+(id)uniqueAttributeName;
+(id)fetchSortDescriptors;
+(id)uniqueObjectIDLookupWithContext:(id)arg1 ;
+(id)challengeWithServerRepresentation:(id)arg1 context:(id)arg2 ;
+(id)challengesWithChallengeIDs:(id)arg1 context:(id)arg2 ;
+(id)entityName;
-(void)updateWithServerRepresentation:(id)arg1 ;
-(Class)classForInternalRepresentation;
-(id)orderedSetOfCompatibleBundleIDs;
-(BOOL)hasDetails;
-(id)internalRepresentation;
-(void)invalidate;
@end

