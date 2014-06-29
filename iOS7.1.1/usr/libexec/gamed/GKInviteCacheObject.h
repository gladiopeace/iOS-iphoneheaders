/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKCacheObject.h>

@class NSDate, NSString, GKGameCacheObject, NSData;

@interface GKInviteCacheObject : GKCacheObject

@property (nonatomic,@dynamic,retain) NSDate * timeStamp; 
@property (assign,nonatomic,@dynamic) int type; 
@property (nonatomic,@dynamic,retain) NSString * inviteID; 
@property (nonatomic,@dynamic,retain) GKGameCacheObject * game; 
@property (nonatomic,@dynamic,retain) NSData * pendingInviteArchive; 
+(id)fetchSortDescriptors;
+(id)entityName;
-(void)awakeFromInsert;
@end
