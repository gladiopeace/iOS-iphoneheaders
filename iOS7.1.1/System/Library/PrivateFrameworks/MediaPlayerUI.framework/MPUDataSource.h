/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <CoreFoundation/NSCoding.h>

@class NSArray, NSString;

@interface MPUDataSource : NSObject <NSCoding> {

	long long _invalidationIgnoreCount;
	long long _numberOfIgnoredInvalidations;
	long long _entityType;

}

@property (nonatomic,readonly) long long entityType;                               //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) bool isEmpty; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) bool usesSections; 
@property (nonatomic,readonly) bool showsIndexBar; 
@property (nonatomic,readonly) unsigned long long numberOfSections; 
@property (nonatomic,readonly) NSArray * localizedSectionIndexTitles; 
@property (nonatomic,readonly) NSString * titleForGlobalHeader; 
@property (nonatomic,readonly) bool showsEntityCountFooter; 
@property (nonatomic,readonly) NSString * entityCountFormat; 
-(id)initWithEntityType:(long long)arg1 ;
-(long long)entityType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(void)invalidate;
-(bool)isEmpty;
-(unsigned long long)numberOfSections;
-(id)dataSourceFromEntityAtIndex:(unsigned long long)arg1 entityType:(long long)arg2 ;
-(unsigned long long)indexOfSectionForSectionTitleAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfSectionEntity:(id)arg1 ;
-(id)titleForGlobalHeader;
-(id)localizedSectionIndexTitles;
-(bool)entityIsNowPlayingAtIndex:(unsigned long long)arg1 ;
-(void)_invalidateCalculatedEntities;
-(long long)editingTypeForEntityAtIndex:(unsigned long long)arg1 ;
-(id)playbackContextForIndex:(unsigned long long)arg1 ;
-(void)endIgnoringInvalidation;
-(bool)isIgnoringInvalidation;
-(void)beginIgnoringInvalidation;
-(id)entityCountFormat;
-(bool)showsEntityCountFooter;
-(bool)showsIndexBar;
-(bool)canEditEntityAtIndex:(unsigned long long)arg1 ;
-(void)deleteEntityAtIndex:(unsigned long long)arg1 ;
-(id)sectionEntityAtIndex:(unsigned long long)arg1 ;
-(id)anyEntity;
-(bool)canSelectEntityAtIndex:(unsigned long long)arg1 ;
-(id)dataSourceFromEntityAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfEntity:(id)arg1 ;
-(id)sectionEntities;
-(NSRange)rangeOfSectionAtIndex:(unsigned long long)arg1 ;
-(bool)usesSections;
-(void)preloadEntities;
-(void)preloadSectionEntities;
-(id)localizedSectionTitleAtIndex:(unsigned long long)arg1 ;
-(id)entityAtIndex:(unsigned long long)arg1 ;
-(id)entities;
@end

