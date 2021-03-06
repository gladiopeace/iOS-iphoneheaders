/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/DuetPLLConfigLogger.framework/DuetPLLConfigLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDate, NSMutableArray, NSMutableDictionary, fetchFilterEntry, fetchDenyEntry;

@interface AppLaunchStatsAggD : NSObject {

	BOOL buildLaunchStats;
	NSObject*<OS_dispatch_queue> aggDQueue;
	int hasStats;
	int fetchDeniedWithReasons[10];
	int fetchDenied;
	int fetchAttempt;
	int pushDenied;
	int pushAttempt;
	int pushDeniedReasons[11];
	long long fetchDataTotal;
	int fetchDataCount;
	int fetchPWTotal;
	int fetchGiven;
	int fetchFailedCount;
	int fetchAppFiltered[7];
	long long fetchUpdateTimeTotal;
	int fetchUpdateTimeCount;
	int forceRelease;
	int zoneCounts[9];
	int topNZoneCounts[9];
	NSDate* cycleStart;
	NSMutableArray* pastCycle;
	NSMutableDictionary* launchDict;
	int prewarmZoneCounts[9];
	int prewarmEligibleZone[9];
	NSMutableDictionary* prewarmDict;
	NSMutableDictionary* previousPrewarmDict;
	int prewarmHits;
	int prewarmMiss;
	long long avgDownloadsize;
	long long avgPWConsumed;
	int totalBGDownloads;
	long long totalNonDiscDownload;
	long long totalNonDiscEnergy;
	int BGReportToken;
	unsigned long blameReasons[29];
	fetchFilterEntry* mostRecentFilter;
	fetchDenyEntry* mostRecentDeny;
	/*^block*/id appisFetchable;

}

@property (nonatomic,retain) NSMutableArray * pastCycle; 
@property (nonatomic,readonly) NSDate * cycleStart; 
+(id)sharedInstance;
-(void)uploadData;
-(void)dealloc;
-(id)init;
-(void)fetchTimeUpdate:(long long)arg1 ;
-(void)forceReleaseCount;
-(NSDate *)cycleStart;
-(void)replacePredictionAtZone:(id)arg1 zoneid:(int)arg2 ;
-(void)fetchAttemptIncrement;
-(void)fetchDenied:(int)arg1 ;
-(void)fetchDeniedBecause:(BOOL)arg1 withPWBudget:(BOOL)arg2 inwifi:(BOOL)arg3 incell:(BOOL)arg4 ignorePoorCell:(BOOL)arg5 incall:(BOOL)arg6 thermal:(BOOL)arg7 hascell:(BOOL)arg8 haswifi:(BOOL)arg9 ;
-(void)fetchFiltered:(int)arg1 ;
-(void)fetchCountUpdate:(int)arg1 ;
-(void)mostRecentFilterResult:(id)arg1 ;
-(void)fetchPWCount:(int)arg1 ;
-(NSMutableArray *)pastCycle;
-(void)populatePredictZones:(int)arg1 filter:(BOOL)arg2 callback:(/*^block*/id)arg3 ;
-(void)populatePrewarmZones:(int)arg1 callback:(/*^block*/id)arg2 ;
-(void)newCycleWithApps:(id)arg1 ;
-(void)pushAttemptIncrement:(int)arg1 ;
-(void)pushDenied:(int)arg1 ;
-(void)pushDeniedBecause:(BOOL)arg1 withPWBudget:(BOOL)arg2 inwifi:(BOOL)arg3 incell:(BOOL)arg4 ignorePoorCell:(BOOL)arg5 ;
-(void)fetchDataCount:(int)arg1 ;
-(void)appPrewarm:(id)arg1 type:(int)arg2 ;
-(void)fetchFailedUpdate;
-(void)setCollectLaunchStats;
-(void)setFetchCapableCheck:(/*^block*/id)arg1 ;
-(void)appFGLaunch:(id)arg1 ;
-(void)mostRecentDenyResult:(int)arg1 ;
-(void)searchBlame:(id)arg1 inzone:(int)arg2 inminute:(int)arg3 ;
-(void)backgroundSucceeds:(long long)arg1 withPW:(long long)arg2 ;
-(void)nonDiscretionaryAdd:(unsigned long long)arg1 withPW:(unsigned long long)arg2 ;
-(int)distanceToLastPrewarm:(id)arg1 prevDay:(id)arg2 currentSlot:(int)arg3 currentoffset:(int)arg4 ;
-(void)accountPredatePrewarm:(id)arg1 prevDay:(id)arg2 launch:(int)arg3 launchvalue:(int)arg4 prewarmvalue:(int)arg5 diff:(int)arg6 result:(int*)arg7 ;
-(void)calculatePrewarmHitMiss:(id)arg1 launch:(id)arg2 ;
-(BOOL)accountYesterday:(id)arg1 atzone:(int)arg2 launchVal:(int)arg3 result:(int*)arg4 ;
-(void)setPastCycle:(NSMutableArray *)arg1 ;
@end

