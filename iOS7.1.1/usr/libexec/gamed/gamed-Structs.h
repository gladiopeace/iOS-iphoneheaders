/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:33:26 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct __CFString* CFStringRef;

typedef struct _NSZone* NSZoneRef;

typedef struct NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct FairPlayHWInfo_ {
	unsigned IDLength;
	unsigned char ID[20];
} FairPlayHWInfo_;

typedef struct FPSAPContextOpaque_* FPSAPContextOpaque_Ref;

typedef struct {
	unsigned _platform : 8;
	unsigned _prerendered : 1;
	unsigned _supportsLeaderboards : 1;
	unsigned _supportsLeaderboardSets : 1;
	unsigned _hasAggregateLeaderboard : 1;
	unsigned _supportsAchievements : 1;
	unsigned _supportsMultiplayer : 1;
	unsigned _valid : 1;
	unsigned _unused : 1;
	unsigned _supportsTurnBasedMultiplayer : 1;
	unsigned _reserved : 13;
} SCD_Struct_GK7;

typedef union {
	SCD_Struct_GK7 field1;
	unsigned _value;
} SCD_Union_GK8;

typedef struct {
	unsigned _unused : 8;
	unsigned _purpleBuddyAccount : 1;
	unsigned _underage : 1;
	unsigned _photoPending : 1;
	unsigned _findable : 1;
	unsigned _reserved : 18;
} SCD_Struct_GK9;

typedef union {
	SCD_Struct_GK9 field1;
	unsigned _value;
} SCD_Union_GK10;

typedef struct {
	unsigned _maximumPoints : 16;
	unsigned _hidden : 1;
	unsigned _replayable : 1;
	unsigned _reserved : 14;
} SCD_Struct_GK11;

typedef union {
	SCD_Struct_GK11 field1;
	unsigned _value;
} SCD_Union_GK12;

