/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableString;

@interface AppLaunchStatsLogFormater : NSObject {

	NSMutableString* fetchCandidatesStr;
	NSMutableString* fetchForeground;
	NSMutableString* fetchBlackList;
	NSMutableString* fetchRecentLaunch;
	NSMutableString* filteredCandidates;
	NSMutableString* trendingCandidates;
	NSMutableString* prewarmCandidate;
	NSMutableString* foregroundCandidate;
	NSMutableString* blacklistCandidate;
	NSMutableString* resourceRestrictCandidates;
	NSMutableString* filteredCandidatesTrend;

}
-(id)init;
-(void).cxx_destruct;
-(void)resetStringIdentifierWhatToLaunch;
-(void)resetStringIdentifierTrending;
-(void)concat:(id)arg1 withSlot:(int)arg2 ;
-(void)dumpTrending;
-(void)dumpWhatToLaunch;
@end

