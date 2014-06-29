/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:53 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBBBSectionInfo.h>

@class SBBulletinListSection;

@interface SBNotificationsSectionInfo : SBBBSectionInfo {

	/*^block*/ id _clearPossibleAction;
	/*^block*/ id _clearAction;

}

@property (nonatomic,readonly) SBBulletinListSection * representedListSection; 
@property (nonatomic,copy) id clearPossibleAction;                                          //@synthesize clearPossibleAction=_clearPossibleAction - In the implementation block
@property (nonatomic,copy) id clearAction;                                                  //@synthesize clearAction=_clearAction - In the implementation block
-(id)representedListSection;
-(Class)reusableViewClass;
-(float)heightForReusableViewForBulletinViewController:(id)arg1 layoutMode:(int)arg2 ;
-(void)populateReusableView:(id)arg1 ;
-(BOOL)shouldSuppressBulletinMessageForPrivacy:(id)arg1 ;
-(/*^block*/ id)clearPossibleAction;
-(void)setClearPossibleAction:(/*^block*/ id)arg1 ;
-(/*^block*/ id)clearAction;
-(void)setClearAction:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)identifier;
@end

