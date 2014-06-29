/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct __NStatManager* NStatManagerRef;

typedef struct __NStatSource* NStatSourceRef;

typedef struct NStatCounts {
	unsigned long long nstat_rxpackets;
	unsigned long long nstat_rxbytes;
	unsigned long long nstat_txpackets;
	unsigned long long nstat_txbytes;
	unsigned nstat_rxduplicatebytes;
	unsigned nstat_rxoutoforderbytes;
	unsigned nstat_txretransmit;
	unsigned nstat_connectattempts;
	unsigned nstat_connectsuccesses;
	double nstat_min_rtt;
	double nstat_avg_rtt;
	double nstat_var_rtt;
	unsigned long long nstat_cell_rxbytes;
	unsigned long long nstat_cell_txbytes;
	unsigned long long nstat_wifi_rxbytes;
	unsigned long long nstat_wifi_txbytes;
} NStatCounts;

