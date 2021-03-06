/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPrincipalPropertySearchTask.h>

@class NSSet, CalDAVPrincipalSearchPropertySet;

@interface CalDAVPrincipalPropertySearchTask : CoreDAVPrincipalPropertySearchTask {

	NSSet* _searchTypes;
	NSSet* _searchStrings;
	CalDAVPrincipalSearchPropertySet* _serverSupportSet;
	void* _searchContext;

}

@property (assign,nonatomic) void* searchContext;                                    //@synthesize searchContext=_searchContext - In the implementation block
@property (retain) NSSet * searchTypes;                                              //@synthesize searchTypes=_searchTypes - In the implementation block
@property (retain) NSSet * searchStrings;                                            //@synthesize searchStrings=_searchStrings - In the implementation block
@property (retain) CalDAVPrincipalSearchPropertySet * serverSupportSet;              //@synthesize serverSupportSet=_serverSupportSet - In the implementation block
-(id)searchItems;
-(void)dealloc;
-(void)setSearchStrings:(id)arg1 ;
-(void)setServerSupportSet:(id)arg1 ;
-(id)serverSupportSet;
-(id)searchStrings;
-(id)initWithSearchStrings:(id)arg1 searchTypes:(id)arg2 serverSupportSet:(id)arg3 atURL:(id)arg4 ;
-(void)setSearchContext:(void*)arg1 ;
-(void*)searchContext;
-(id)extraAttributes;
-(void)setSearchTypes:(id)arg1 ;
-(id)searchTypes;
@end

