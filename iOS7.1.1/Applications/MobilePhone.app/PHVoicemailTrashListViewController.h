/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/PHVoicemailListViewController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <MobilePhone/PHVoicemailListViewControllerConcrete.h>

@class NSString, NSArray, UIActionSheet;

@interface PHVoicemailTrashListViewController : PHVoicemailListViewController <UIActionSheetDelegate, PHVoicemailListViewControllerConcrete> {

	UIActionSheet* _clearAllConfirmationActionSheet;

}

@property (readonly) NSString * cellDetailDestructiveActionText; 
@property (readonly) NSString * navigationBarText; 
@property (readonly) NSString * folderName; 
@property (readonly) unsigned flagsToHave; 
@property (readonly) unsigned flagsNotToHave; 
@property (readonly) BOOL popOffIfEmpty; 
@property (readonly) NSString * tableViewDestructiveActionText; 
@property (readonly) NSString * navigationBarTextWithCountFormat; 
@property (readonly) NSArray * childListControllers; 
-(id)cellDetailDestructiveActionText;
-(void)performCellDetailDestructiveActionForVoicemail:(id)arg1 ;
-(unsigned)flagsToHave;
-(unsigned)flagsNotToHave;
-(void)clearAllTapped;
-(void)_trashHandleVoicemailTaskStartedOrEnded:(id)arg1 ;
-(void)_updateClearAllEnabled;
-(void)performTableViewDestructiveActionForVoicemail:(id)arg1 ;
-(void)willShowVoicemails:(id)arg1 ;
-(id)navigationBarText;
-(BOOL)popOffIfEmpty;
-(id)tableViewDestructiveActionText;
-(id)initWithNavigationController:(id)arg1 ;
-(void)dealloc;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)folderName;
@end

