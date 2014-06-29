/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:53 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBBBWidgetSectionInfo.h>

@class SBItemInfoLayoutCache;

@interface SBTodayWidgetSectionInfo : SBBBWidgetSectionInfo {

	SBItemInfoLayoutCache* _layoutCache;
	BOOL _isAfterTodaySection;

}
-(id)representedListSection;
-(Class)reusableViewClass;
-(float)heightForReusableViewForBulletinViewController:(id)arg1 layoutMode:(int)arg2 ;
-(void)invalidateCachedLayoutData;
-(void)populateReusableView:(id)arg1 ;
-(BOOL)_isPreviousSectionTodaySection:(id)arg1 ;
-(void)dealloc;
@end

