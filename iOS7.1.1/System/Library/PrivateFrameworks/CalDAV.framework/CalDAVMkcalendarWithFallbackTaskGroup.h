/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSURL, NSSet, NSDictionary;

@interface CalDAVMkcalendarWithFallbackTaskGroup : CoreDAVTaskGroup {

	NSURL* _url;
	bool _shouldSupportVEVENT;
	bool _shouldSupportVTODO;
	NSSet* _primaryElements;
	NSSet* _fallbackElements;
	NSDictionary* _headersToOverride;
	NSDictionary* _responseHeaders;

}

@property (assign,nonatomic) bool shouldSupportVEVENT;                      //@synthesize shouldSupportVEVENT=_shouldSupportVEVENT - In the implementation block
@property (assign,nonatomic) bool shouldSupportVTODO;                       //@synthesize shouldSupportVTODO=_shouldSupportVTODO - In the implementation block
@property (nonatomic,retain) NSDictionary * headersToOverride;              //@synthesize headersToOverride=_headersToOverride - In the implementation block
@property (nonatomic,retain) NSDictionary * responseHeaders;                //@synthesize responseHeaders=_responseHeaders - In the implementation block
-(void)dealloc;
-(id)headersToOverride;
-(void)_mkcalendarAfterFailureCount:(unsigned long long)arg1 ;
-(void)setResponseHeaders:(id)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5 ;
-(bool)shouldSupportVEVENT;
-(void)setShouldSupportVEVENT:(bool)arg1 ;
-(bool)shouldSupportVTODO;
-(void)setShouldSupportVTODO:(bool)arg1 ;
-(void)setHeadersToOverride:(id)arg1 ;
-(void)startTaskGroup;
-(id)responseHeaders;
@end

