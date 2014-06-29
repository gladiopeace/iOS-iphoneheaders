/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalDAV/CalDAVOperation.h>
#import <CalDAV/CoreDAVContainerInfoTaskGroupDelegate.h>
#import <CalDAV/CoreDAVContainerInfoSyncProvider.h>
#import <CoreDAV/CoreDAVPropPatchTaskDelegate.h>
#import <CoreDAV/CoreDAVTaskGroupDelegate.h>

@protocol OS_dispatch_group;
@class NSError, NSMutableDictionary, NSString, NSMutableSet, NSObject;

@interface CalDAVCalendarPropertyRefreshOperation : CalDAVOperation <CoreDAVContainerInfoTaskGroupDelegate, CoreDAVContainerInfoSyncProvider, CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate> {

	NSError* _savedError;
	NSMutableDictionary* _ctags;
	NSMutableDictionary* _syncTokens;
	bool _forceClearCalendarHomeSyncToken;
	NSString* _calendarHomeSyncToken;
	bool _useCalendarHomeSyncReport;
	NSMutableDictionary* _pathToLocalCalendar;
	NSMutableSet* _localCalendarsWithNoPath;
	NSMutableSet* _updatedCalendars;
	bool _didFinish;
	bool _didMakeCalendars;
	bool _isSecondRefresh;
	int _nextCalendarOrder;
	NSObject<OS_dispatch_group>* _outstandingTasksGroup;

}

@property (assign,nonatomic,@dynamic) <CalDAVCalendarPropertyRefreshDelegate> * delegate; 
@property (assign,nonatomic) bool useCalendarHomeSyncReport;                                           //@synthesize useCalendarHomeSyncReport=_useCalendarHomeSyncReport - In the implementation block
@property (nonatomic,retain) NSString * calendarHomeSyncToken;                                         //@synthesize calendarHomeSyncToken=_calendarHomeSyncToken - In the implementation block
-(void)dealloc;
-(bool)useCalendarHomeSyncReport;
-(void)_initializePrincipalCalendarCache;
-(void)_reallyRefreshCalendarProperties;
-(id)_getMkcalendarTaskGroupForCalendar:(id)arg1 ;
-(void)_sendDeletesForCalendars;
-(void)_sendAddsForCalendars;
-(void)_handleCalendarPublish;
-(void)_sendShareActionTasks;
-(void)_prepareCalendarsBeforeRefresh;
-(id)_generateTimeZoneString:(id)arg1 ;
-(int)_sharingStatusForContainer:(id)arg1 ;
-(id)_getSetPropertyStringTask:(id)arg1 forName:(id)arg2 andNamespace:(id)arg3 atURL:(id)arg4 ;
-(bool)_handleUpdateForCalendar:(id)arg1 ;
-(void)_getDefaultCalendarsTasksIfNeededForPrincipal:(id)arg1 ;
-(id)_getDefaultMkCalendarForPrincipalTaskGroup:(id)arg1 isEventCalendar:(bool)arg2 ;
-(void)_continueHandleContainerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3 ;
-(void)_finishRefresh;
-(void)containerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3 ;
-(void)containerInfoSyncTask:(id)arg1 retrievedAddedOrModifiedContainers:(id)arg2 removedContainerURLs:(id)arg3 ;
-(void)containerInfoSyncTask:(id)arg1 completedWithNewSyncToken:(id)arg2 error:(id)arg3 ;
-(id)calendarHomeSyncToken;
-(void)setCalendarHomeSyncToken:(id)arg1 ;
-(id)initWithPrincipal:(id)arg1 ;
-(void)setUseCalendarHomeSyncReport:(bool)arg1 ;
-(void)refreshCalendarProperties;
@end

