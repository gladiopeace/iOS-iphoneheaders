/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/PersistentDirectionsHistoryItem.h>
#import <Maps/SyncingHistoryItem.h>
#import <Maps/HistoryItem.h>

@class NSString, NSData, SyncedBookmarkRepr;

@interface DirectionsHistoryItem : PersistentDirectionsHistoryItem <SyncingHistoryItem, HistoryItem>

@property (nonatomic,copy) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSData * syncData; 
@property (assign,nonatomic) double position; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) SyncedBookmarkRepr * bookmarkRepresentation; 
-(id)initWithBookmarkRepresentation:(id)arg1 ;
-(BOOL)updateFromBookmarkRepresentation:(id)arg1 ;
-(id)bookmarkRepresentation;
-(BOOL)updateFromSyncData:(id)arg1 ;
-(void)_updateFromStartSearchResult:(id)arg1 endSearchResult:(id)arg2 ;
-(int)_transportTypeForDirectionsMode:(int)arg1 ;
-(void)_geocodeSearchResultIfNeeded:(id)arg1 ;
-(id)initWithStartSearchResult:(id)arg1 endSearchResult:(id)arg2 directionsMode:(int)arg3 timestamp:(double)arg4 ;
-(int)_bookmarkDirectionsModeForTransportType:(int)arg1 ;
-(int)_transportTypeForBookmarkDirectionsMode:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isValid;
-(int)type;
-(id)syncData;
@end

