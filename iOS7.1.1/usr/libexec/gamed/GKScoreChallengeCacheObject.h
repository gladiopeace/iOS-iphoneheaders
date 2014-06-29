/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKChallengeCacheObject.h>

@class NSNumber, NSString, NSDate;

@interface GKScoreChallengeCacheObject : GKChallengeCacheObject

@property (assign,nonatomic,@dynamic) int rank; 
@property (nonatomic,@dynamic,retain) NSNumber * value; 
@property (nonatomic,@dynamic,retain) NSString * formattedValue; 
@property (nonatomic,@dynamic,retain) NSDate * date; 
@property (nonatomic,@dynamic,retain) NSNumber * context; 
@property (nonatomic,@dynamic,retain) NSString * localizedTitle; 
+(id)entityName;
-(void)updateWithServerRepresentation:(id)arg1 ;
-(Class)classForInternalRepresentation;
-(BOOL)hasDetails;
-(id)internalRepresentation;
@end

