/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKCacheObject.h>
#import <gamed/GKDelayedRequest.h>

@class NSString, NSDate, NSData;

@interface GKDelayedRequestCacheObject : GKCacheObject <GKDelayedRequest>

@property (nonatomic,@dynamic,retain) NSString * bundleID; 
@property (nonatomic,@dynamic,retain) NSString * playerID; 
@property (nonatomic,@dynamic,retain) NSDate * timeStamp; 
@property (getter=isVerified,nonatomic,readonly) BOOL verified; 
@property (nonatomic,@dynamic,retain) NSData * verificationHash; 
+(id)fetchSortDescriptors;
+(id)entityName;
-(BOOL)isVerified;
-(id)verificationDigest;
-(void)computeVerificationHash;
-(id)requestPayload;
-(id)serverRepresentation;
-(void)awakeFromInsert;
-(void)willSave;
@end

