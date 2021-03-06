/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:10:17 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableArray, CoreDAVLeafItem, NSMutableSet, CoreDAVErrorItem, CoreDAVItemWithHrefChildItem, CoreDAVMatchResultsItem;

@interface CoreDAVResponseItem : CoreDAVItem {

	NSMutableArray* _hrefs;
	CoreDAVLeafItem* _status;
	NSMutableSet* _propStats;
	CoreDAVErrorItem* _errorItem;
	CoreDAVLeafItem* _responseDescription;
	CoreDAVItemWithHrefChildItem* _location;
	CoreDAVLeafItem* _serverUID;
	CoreDAVMatchResultsItem* _matchResults;

}

@property (nonatomic,retain) NSMutableArray * hrefs;                               //@synthesize hrefs=_hrefs - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * status;                             //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableSet * propStats;                             //@synthesize propStats=_propStats - In the implementation block
@property (nonatomic,retain) CoreDAVErrorItem * errorItem;                         //@synthesize errorItem=_errorItem - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * responseDescription;                //@synthesize responseDescription=_responseDescription - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithHrefChildItem * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * serverUID;                          //@synthesize serverUID=_serverUID - In the implementation block
@property (nonatomic,retain) CoreDAVMatchResultsItem * matchResults;               //@synthesize matchResults=_matchResults - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(CoreDAVItemWithHrefChildItem *)location;
-(CoreDAVLeafItem *)status;
-(void)setStatus:(CoreDAVLeafItem *)arg1 ;
-(id)successfulPropertiesToValues;
-(NSMutableArray *)hrefs;
-(id)firstHref;
-(CoreDAVErrorItem *)errorItem;
-(NSMutableSet *)propStats;
-(CoreDAVLeafItem *)responseDescription;
-(CoreDAVLeafItem *)serverUID;
-(CoreDAVMatchResultsItem *)matchResults;
-(void)addHref:(id)arg1 ;
-(void)addPropStat:(id)arg1 ;
-(void)setErrorItem:(CoreDAVErrorItem *)arg1 ;
-(void)setResponseDescription:(CoreDAVLeafItem *)arg1 ;
-(void)setServerUID:(CoreDAVLeafItem *)arg1 ;
-(void)setMatchResults:(CoreDAVMatchResultsItem *)arg1 ;
-(void)setPropStats:(NSMutableSet *)arg1 ;
-(void)setHrefs:(NSMutableArray *)arg1 ;
-(char)hasPropertyError;
-(void)setLocation:(CoreDAVItemWithHrefChildItem *)arg1 ;
@end

