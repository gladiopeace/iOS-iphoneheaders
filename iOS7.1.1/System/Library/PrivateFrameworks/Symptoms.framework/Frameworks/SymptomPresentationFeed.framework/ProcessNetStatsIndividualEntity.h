/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SymptomPresentationFeed/SymptomPresentationFeed-Structs.h>
@class NSString;

@interface ProcessNetStatsIndividualEntity : NSObject {

	bool inProgress;
	NStatSourceRef source;
	bool _isRelevant;
	long long _iface;
	long long _pid;
	NSString* _bundleName;
	NSString* _procName;
	NStatCounts _sc;

}

@property (readonly) bool isRelevant;                              //@synthesize isRelevant=_isRelevant - In the implementation block
@property (readonly) long long iface;                              //@synthesize iface=_iface - In the implementation block
@property (readonly) long long pid;                                //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSString * bundleName;              //@synthesize bundleName=_bundleName - In the implementation block
@property (nonatomic,readonly) NSString * procName;                //@synthesize procName=_procName - In the implementation block
@property (nonatomic,readonly) NStatCounts sc;                     //@synthesize sc=_sc - In the implementation block
+(id)succinctlyPrintAllCounts:(id)arg1 ;
+(id)prettyPrintCounts:(id)arg1 forType:(id)arg2 isInBound:(bool)arg3 ;
+(bool)rawCounts:(id)arg1 forType:(id)arg2 txBytes:(unsigned long long*)arg3 rxBytes:(unsigned long long*)arg4 ;
+(long long)compareCounts:(id)arg1 with:(id)arg2 ;
-(id)initWithSource:(NStatSourceRef)arg1 ;
-(id)description;
-(void).cxx_destruct;
-(long long)pid;
-(id)bundleName;
-(id)procName;
-(long long)iface;
-(id)adjustCountsFor:(id)arg1 underKey:(id)arg2 notKey:(id)arg3 ;
-(bool)isRelevant;
-(bool)_isEntryRelevant;
-(NStatCounts)sc;
-(id)initWithProcname:(id)arg1 bundleName:(id)arg2 ifindex:(long long)arg3 bytesIN:(unsigned long long)arg4 bytesOUT:(unsigned long long)arg5 ;
@end

