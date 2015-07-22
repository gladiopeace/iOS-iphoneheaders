/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:49:51 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSSet;

@interface CalDAVCalendarUserSearchTask : CoreDAVPropertyFindBaseTask {

	NSSet* _searchStrings;
	char _findAttendees;
	char _findUsers;
	char _findResources;
	char _findGroups;
	char _findLocations;
	unsigned _resultLimit;

}

@property (assign,nonatomic) char findAttendees;                 //@synthesize findAttendees=_findAttendees - In the implementation block
@property (assign,nonatomic) char findLocations;                 //@synthesize findLocations=_findLocations - In the implementation block
@property (assign) char findUsers;                               //@synthesize findUsers=_findUsers - In the implementation block
@property (assign) char findGroups;                              //@synthesize findGroups=_findGroups - In the implementation block
@property (assign) char findResources;                           //@synthesize findResources=_findResources - In the implementation block
@property (assign,nonatomic) unsigned resultLimit;               //@synthesize resultLimit=_resultLimit - In the implementation block
@property (nonatomic,retain) NSSet * searchStrings;              //@synthesize searchStrings=_searchStrings - In the implementation block
+(char)tokensAreLegal:(id)arg1 ;
-(char)findGroups;
-(void)setFindGroups:(char)arg1 ;
-(char)findLocations;
-(void)setFindLocations:(char)arg1 ;
-(char)findResources;
-(void)setFindResources:(char)arg1 ;
-(char)findUsers;
-(void)setFindUsers:(char)arg1 ;
-(id)searchItems;
-(void)dealloc;
-(void)setResultLimit:(unsigned)arg1 ;
-(unsigned)resultLimit;
-(void)setSearchStrings:(NSSet *)arg1 ;
-(NSSet *)searchStrings;
-(void)setFindAttendees:(char)arg1 ;
-(char)findAttendees;
-(id)initWithSearchStrings:(id)arg1 atURL:(id)arg2 ;
-(id)httpMethod;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)requestBody;
-(id)extraAttributes;
@end
