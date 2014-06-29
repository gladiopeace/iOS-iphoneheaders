/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/gamed-Structs.h>
#import <gamed/GKLeaderboardScoreRequest.h>

@interface GKLeaderboardScoreRangeRequest : GKLeaderboardScoreRequest {

	NSRange _range;

}

@property (assign,nonatomic) NSRange range;              //@synthesize range=_range - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)fetchScoresForClient:(id)arg1 context:(id)arg2 serverResponse:(id)arg3 timeToLive:(double)arg4 handler:(/*^block*/ id)arg5 ;
-(void)loadScoresForClient:(id)arg1 context:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)sanitizeRange;
-(id)resourceIdentifier;
-(id)serverRequest;
-(id)bagKey;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
@end

