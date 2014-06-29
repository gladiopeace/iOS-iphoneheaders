/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSMetricsConfiguration, SSMetricsPageEvent, NSArray, NSString;

@interface RUSearchResult : NSObject {

	SSMetricsConfiguration* _metricsConfiguration;
	SSMetricsPageEvent* _metricsPageEvent;
	NSArray* _resultCategories;
	NSString* _searchTerm;

}

@property (nonatomic,retain) SSMetricsConfiguration * metricsConfiguration;              //@synthesize metricsConfiguration=_metricsConfiguration - In the implementation block
@property (nonatomic,retain) SSMetricsPageEvent * metricsPageEvent;                      //@synthesize metricsPageEvent=_metricsPageEvent - In the implementation block
@property (nonatomic,copy) NSArray * resultCategories;                                   //@synthesize resultCategories=_resultCategories - In the implementation block
@property (nonatomic,copy) NSString * searchTerm;                                        //@synthesize searchTerm=_searchTerm - In the implementation block
-(id)searchTerm;
-(void)setSearchTerm:(id)arg1 ;
-(void).cxx_destruct;
-(void)setResultCategories:(id)arg1 ;
-(id)resultCategories;
-(id)metricsPageEvent;
-(void)setMetricsConfiguration:(id)arg1 ;
-(id)metricsConfiguration;
-(void)setMetricsPageEvent:(id)arg1 ;
@end

