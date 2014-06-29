/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSMutableSet, NSArray, UIImage, NSDate, BBSectionInfo, NSSet;

@interface SBBulletinListSection : NSObject {

	NSString* _sectionID;
	int _sectionType;
	int _sectionCategory;
	id _widget;
	NSMutableArray* _bulletins;
	NSMutableSet* _bulletinIDs;
	NSArray* _sortDescriptors;
	NSString* _displayName;
	UIImage* _iconImage;
	BOOL _showsInLockScreen;
	BOOL _showsMessagePreview;
	unsigned _messageNumberOfLines;
	BOOL _displaysCriticalBulletins;
	NSDate* _lastSortDate;
	NSMutableSet* _subsections;
	UIImage* _largeIconImage;
	BBSectionInfo* _sectionInfo;

}

@property (nonatomic,copy) NSString * sectionID;                         //@synthesize sectionID=_sectionID - In the implementation block
@property (assign,nonatomic) int sectionCategory;                        //@synthesize sectionCategory=_sectionCategory - In the implementation block
@property (nonatomic,readonly) NSArray * bulletins;                      //@synthesize bulletins=_bulletins - In the implementation block
@property (nonatomic,retain) id widget;                                  //@synthesize widget=_widget - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                  //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,copy) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                        //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UIImage * largeIconImage;                   //@synthesize largeIconImage=_largeIconImage - In the implementation block
@property (assign,nonatomic) BOOL showsInLockScreen;                     //@synthesize showsInLockScreen=_showsInLockScreen - In the implementation block
@property (assign,nonatomic) BOOL showsMessagePreview;                   //@synthesize showsMessagePreview=_showsMessagePreview - In the implementation block
@property (assign,nonatomic) unsigned messageNumberOfLines;              //@synthesize messageNumberOfLines=_messageNumberOfLines - In the implementation block
@property (nonatomic,readonly) NSSet * subsectionIDs; 
@property (nonatomic,retain) BBSectionInfo * sectionInfo;                //@synthesize sectionInfo=_sectionInfo - In the implementation block
-(BOOL)isWidgetSection;
-(BOOL)showsMessagePreviewForBulletinID:(id)arg1 ;
-(id)largeIconImage;
-(BOOL)hasClearableBulletins;
-(unsigned)addBulletin:(id)arg1 ;
-(unsigned)removeBulletin:(id)arg1 ;
-(BOOL)isBulletinSection;
-(void)_updateWithSectionInfo:(id)arg1 ;
-(void)setShowsInLockScreen:(BOOL)arg1 forSubsectionID:(id)arg2 ;
-(void)setShowsMessagePreview:(BOOL)arg1 forSubsectionID:(id)arg2 ;
-(id)lastSortDate;
-(unsigned)_indexForNewBulletin:(id)arg1 ;
-(id)_sortDateForBulletin:(id)arg1 ;
-(unsigned)indexOfBulletinID:(id)arg1 ;
-(void)setLargeIconImage:(id)arg1 ;
-(id)bulletinAtIndex:(unsigned)arg1 ;
-(id)bulletinWithBulletinID:(id)arg1 ;
-(id)_subsectionWithIDCreatingIfNecessary:(id)arg1 ;
-(void)updateWithSectionInfo:(id)arg1 ;
-(int)compareSection:(id)arg1 forOrder:(int)arg2 ;
-(unsigned)indexOfBulletinWithLocalNotification:(id)arg1 ;
-(unsigned)replaceBulletin:(id)arg1 withBulletin:(id)arg2 ;
-(BOOL)hasBulletinWithID:(id)arg1 ;
-(BOOL)showsBulletinIDInLockScreen:(id)arg1 ;
-(BOOL)showsBulletinsInSubsectionIDInLockScreen:(id)arg1 ;
-(BOOL)showsMessagePreviewForBulletinsInSubsectionID:(id)arg1 ;
-(void)setWidget:(id)arg1 ;
-(unsigned)_removeBulletin:(id)arg1 ;
-(id)initWithSectionInfo:(id)arg1 ;
-(id)bulletins;
-(id)sectionInfo;
-(void)dealloc;
-(id)description;
-(int)compare:(id)arg1 ;
-(id)iconImage;
-(id)displayName;
-(void)setSortDescriptors:(id)arg1 ;
-(void)setSectionID:(id)arg1 ;
-(id)subsectionIDs;
-(BOOL)showsMessagePreview;
-(void)setShowsMessagePreview:(BOOL)arg1 ;
-(BOOL)showsInLockScreen;
-(int)sectionCategory;
-(void)setShowsInLockScreen:(BOOL)arg1 ;
-(void)setSectionCategory:(int)arg1 ;
-(BOOL)displaysCriticalBulletins;
-(unsigned)bulletinCount;
-(void)setMessageNumberOfLines:(unsigned)arg1 ;
-(unsigned)messageNumberOfLines;
-(void)setSectionInfo:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(id)sortDescriptors;
-(void)setIconImage:(id)arg1 ;
-(id)sectionID;
-(id)widget;
@end

