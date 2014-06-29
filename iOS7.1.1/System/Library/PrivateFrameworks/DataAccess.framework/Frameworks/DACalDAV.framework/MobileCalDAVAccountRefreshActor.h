/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DACalDAV/CalDAVAccountPropertyRefreshDelegate.h>
#import <DACalDAV/CalDAVCalendarPropertyRefreshDelegate.h>
#import <DACalDAV/CalDAVCalendarSyncDelegate.h>

@protocol OS_dispatch_group;
@class MobileCalDAVAccount, CalDAVRefreshContext, NSMutableDictionary, NSMutableArray, NSString, NSObject, NSMutableSet, CalDiagAccountSync;

@interface MobileCalDAVAccountRefreshActor : NSObject <CalDAVAccountPropertyRefreshDelegate, CalDAVCalendarPropertyRefreshDelegate, CalDAVCalendarSyncDelegate> {

	MobileCalDAVAccount* _account;
	CalDAVRefreshContext* _context;
	bool _shouldCancel;
	/*^block*/ id _completionBlock;
	bool _didFinish;
	bool _refreshing;
	NSMutableDictionary* _pathsToCTags;
	NSMutableDictionary* _pathsToSyncTokens;
	NSMutableArray* _calendarsToRefresh;
	NSString* _calendarHomeSyncToken;
	NSObject<OS_dispatch_group>* _outstandingOperationGroup;
	NSMutableSet* _outstandingTaskGroups;
	NSMutableSet* _outstandingTasks;
	CalDiagAccountSync* _accountSyncDiagnostics;
	int _state;

}

@property (nonatomic,readonly) CalDiagAccountSync * accountSyncDiagnostics; 
@property (nonatomic,readonly) CalDAVRefreshContext * context;                           //@synthesize context=_context - In the implementation block
@property (readonly) bool shouldCancel; 
@property (assign,nonatomic) int state;                                                  //@synthesize state=_state - In the implementation block
@property (readonly) NSMutableSet * outstandingTaskGroups;                               //@synthesize outstandingTaskGroups=_outstandingTaskGroups - In the implementation block
@property (readonly) NSMutableSet * outstandingTasks;                                    //@synthesize outstandingTasks=_outstandingTasks - In the implementation block
@property (nonatomic,copy) id completionBlock;                                           //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSString * calendarHomeSyncToken;                           //@synthesize calendarHomeSyncToken=_calendarHomeSyncToken - In the implementation block
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)context;
-(void)setCompletionBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)completionBlock;
-(id)outstandingTasks;
-(id)calendarHomeSyncToken;
-(void)cancelWithCompletion:(/*^block*/ id)arg1 ;
-(id)initWithAccount:(id)arg1 context:(id)arg2 ;
-(void)setCalendarHomeSyncToken:(id)arg1 ;
-(id)outstandingTaskGroups;
-(void)_teardownAllOutstandingOperations;
-(void)_sendResultToAccount;
-(bool)_refreshShouldContinue;
-(void)_refreshCalendarProperties;
-(void)_sendMoveTasks;
-(void)_refreshRegularCalendars;
-(void)_refreshSpecialCalendars;
-(void)_calendarCollectionsWereRefreshed;
-(void)_refreshAccountProperties;
-(void)_waitForStateTransition;
-(bool)_sendMoveForItem:(id)arg1 ;
-(void)_clearMoveChange:(id)arg1 ;
-(void)_handleMoveTaskComplete:(id)arg1 moveItem:(id)arg2 ;
-(void)_syncCalendar:(id)arg1 ;
-(id)_refreshedCtagForCalendar:(id)arg1 ;
-(id)_refreshedSyncTokenForCalendar:(id)arg1 ;
-(id)accountSyncDiagnostics;
-(void)propertyRefreshForPrincipal:(id)arg1 completedWithError:(id)arg2 ;
-(void)calendarRefreshForPrincipal:(id)arg1 completedWithNewCTags:(id)arg2 newSyncTokens:(id)arg3 calendarHomeSyncToken:(id)arg4 updatedCalendars:(id)arg5 error:(id)arg6 ;
-(void)calendarSyncForPrincipal:(id)arg1 calendar:(id)arg2 completedWithError:(id)arg3 ;
-(bool)shouldCancel;
-(void)refresh;
-(void)teardown;
@end

