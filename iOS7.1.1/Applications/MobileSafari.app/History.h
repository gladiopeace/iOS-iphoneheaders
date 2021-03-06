/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, HistoryDelegate;
#import <MobileSafari/MobileSafari-Structs.h>
@class NSMutableDictionary, NSArray, NSCountedSet, NSMutableArray, NSObject, NSCalendar;

@interface History : NSObject {

	BOOL _savePending;
	BOOL _isMergedWithSavedHistory;
	unsigned _historyItemLimit;
	unsigned _historyAgeInDaysLimit;
	NSMutableDictionary* _entriesByURLString;
	NSMutableDictionary* _entriesByRedirectSourceURLString;
	NSMutableDictionary* _entriesByDate;
	NSArray* _orderedLastVisitedDays;
	NSCountedSet* _stringsForUserTypedDomainExpansion;
	NSMutableArray* _deferredUpdates;
	NSObject<OS_dispatch_queue>* _dateCacheAccessQueue;
	NSObject<OS_dispatch_queue>* _entriesByRedirectSourceAccessQueue;
	NSCalendar* _calendar;
	CFDateFormatterRef _weekdayMonthDateFormatter;
	CFDateFormatterRef _weekdayDateFormatter;
	<HistoryDelegate>* _delegate;

}

@property (assign,nonatomic) <HistoryDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedHistory;
+(id)_historyURL;
+(id)dayWithPeriodOfDayStringForDate:(id)arg1 ;
-(void)savePendingChanges;
-(void)localeChanged:(CFLocaleRef)arg1 ;
-(void)addAutocompleteTrigger:(id)arg1 forURLString:(id)arg2 ;
-(void)cancelDeferredUpdates;
-(void)commitDeferredUpdates;
-(id)_weekdayStringForCalendarDate:(id)arg1 ;
-(void)_removeItemFromDateCaches:(id)arg1 ;
-(void)_removeItemFromRedirectMap:(id)arg1 destinationURLString:(id)arg2 ;
-(void)_addItemToDateCaches:(id)arg1 ;
-(void)_addItemToRedirectMap:(id)arg1 destinationURLString:(id)arg2 ;
-(void)_entriesChanged;
-(id)_removeItemForURLString:(id)arg1 ;
-(id)_unreadHistoryPlistItems;
-(void)_addSavedItems:(id)arg1 ;
-(double)_ageLimitDate;
-(id)_orderedLastVisitedDays;
-(void)mergeWithSavedHistoryIfNecessary;
-(CFDateFormatterRef)newDateFormatterForLocale:(CFLocaleRef)arg1 formatType:(id)arg2 ;
-(id)_weekdayMonthDateStringForCalendarDate:(id)arg1 ;
-(BOOL)_getDateKey:(id*)arg1 forTime:(double)arg2 ;
-(void)_insertItem:(id)arg1 withDateKey:(id)arg2 ;
-(void)_addRedirectMappingFromURL:(id)arg1 toItem:(id)arg2 ;
-(void)_removeRedirectMappingFromURL:(id)arg1 toItem:(id)arg2 ;
-(void)mergeWithSavedHistoryIfNecessaryAsyncWithCompletion:(/*^block*/ id)arg1 ;
-(void)_visitedURL:(id)arg1 title:(id)arg2 asHTTPNonGet:(BOOL)arg3 visitWasFailure:(BOOL)arg4 incrementVisitCount:(BOOL)arg5 ;
-(void)_updateForWebView:(id)arg1 updates:(/*^block*/ id)arg2 ;
-(void)_itemWithURL:(id)arg1 redirectedToURL:(id)arg2 ;
-(void)_addItemToStringsForUserTypedDomainExpansion:(id)arg1 ;
-(void)_removeItemFromStringsForUserTypedDomainExpansion:(id)arg1 ;
-(void)enumerateItemsByDescendingLastVisitedDateWithBlock:(/*^block*/ id)arg1 ;
-(id)browsingSessions;
-(id)titleForItem:(id)arg1 ;
-(BOOL)hasAnyHistoryItems;
-(id)redirectDestinationForURLString:(id)arg1 ;
-(BOOL)containsItemForUserTypedDomainExpansion:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)clearHistory;
-(void)_addItem:(id)arg1 ;
-(void)populateVisitedLinksForWebView:(id)arg1 ;
-(void)webView:(id)arg1 didNavigateWithNavigationData:(id)arg2 inFrame:(id)arg3 ;
-(void)webView:(id)arg1 didPerformClientRedirectFromURL:(id)arg2 toURL:(id)arg3 inFrame:(id)arg4 ;
-(void)webView:(id)arg1 didPerformServerRedirectFromURL:(id)arg2 toURL:(id)arg3 inFrame:(id)arg4 ;
-(void)webView:(id)arg1 updateHistoryTitle:(id)arg2 forURL:(id)arg3 inFrame:(id)arg4 ;
-(id)itemForURL:(id)arg1 ;
-(id)itemForURLString:(id)arg1 ;
-(void)_removeAllVisitedLinks;
@end

