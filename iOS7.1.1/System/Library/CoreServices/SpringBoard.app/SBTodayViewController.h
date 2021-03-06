/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:53 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBBulletinObserverViewController.h>

@class NSMutableDictionary, NSArray, SBBBSectionInfo;

@interface SBTodayViewController : SBBulletinObserverViewController {

	NSMutableDictionary* _sectionIDsToOrderedBulletins;
	NSArray* _todaySnippetBulletinOrder;
	NSArray* _tomorrowSnippetBulletinOrder;
	SBBBSectionInfo* _todaySectionInfo;
	SBBBSectionInfo* _tomorrowSectionInfo;

}
+(float)_todayWidgetAndTomorrowSectionHeaderViewHeightForLayoutMode:(int)arg1 ;
-(id)infoForBulletin:(id)arg1 inSection:(id)arg2 ;
-(void)forceUpdateTableHeader;
-(id)todayTableHeaderView;
-(void)_updateTableHeader:(BOOL)arg1 ;
-(void)updateTableHeaderIfNecessary;
-(id)infoForBulletinSection:(id)arg1 ;
-(void)commitInsertionOfSection:(id)arg1 beforeSection:(id)arg2 ;
-(void)commitRemovalOfBulletin:(id)arg1 fromSection:(id)arg2 ;
-(void)commitRemovalOfSection:(id)arg1 ;
-(void)commitReloadOfSections:(id)arg1 ;
-(id)_bulletinOrderStringForBulletinInfo:(id)arg1 ;
-(id)_todaySnippetBulletinOrder;
-(id)_tomorrowSnippetBulletinOrder;
-(void)_sortBulletinsForSectionWithIdentifier:(id)arg1 referencingOrder:(id)arg2 ;
-(void)commitInsertionOfBulletin:(id)arg1 beforeBulletin:(id)arg2 inSection:(id)arg3 forFeed:(unsigned)arg4 ;
-(void)commitReplacementWithBulletin:(id)arg1 ofBulletin:(id)arg2 inSection:(id)arg3 ;
-(int)widgetIdiomForCategory:(int)arg1 ;
-(void)widget:(id)arg1 didUpdatePreferredSize:(CGSize)arg2 ;
-(int)bulletinViewController:(id)arg1 insertionAnimationForBulletin:(id)arg2 inSection:(id)arg3 ;
-(void)insertAppropriateViewWithContent;
-(UIEdgeInsets)bulletinViewControllerContentInsetsForMode:(int)arg1 ;
-(id)infoForWidgetSection:(id)arg1 ;
-(void)dealloc;
-(void)viewWillLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

