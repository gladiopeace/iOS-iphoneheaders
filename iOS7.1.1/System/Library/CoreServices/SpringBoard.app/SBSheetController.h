/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, UIWindow, SBApplication, UIView;

@interface SBSheetController : NSObject {

	NSMutableDictionary* _appToSheetMap;
	UIWindow* _presentationWindow;
	SBApplication* _topHostedApp;
	UIView* _topHostedAppView;

}
+(id)sharedInstance;
-(BOOL)isShowingSheetsForApplication:(id)arg1 ;
-(void)dismissAllSheets;
-(BOOL)isShowingSheets;
-(id)applicationForTopSheet;
-(void)dismissSheetsForApplication:(id)arg1 ;
-(void)dismissRemoteViewIdentifier:(id)arg1 forApplication:(id)arg2 animated:(BOOL)arg3 ;
-(void)_positionFakeStatusBarView:(id)arg1 forOrientation:(int)arg2 ;
-(void)_tearDownSheet:(id)arg1 ;
-(void)presentSheetView:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissSheetView:(id)arg1 animated:(BOOL)arg2 ;
-(void)sendStatusBarOrientationWillChangeToSheets:(int)arg1 duration:(float)arg2 ;
-(BOOL)sheetWantsProgress;
-(BOOL)presentRemoteViewIdentifier:(id)arg1 asSheetForApplication:(id)arg2 requireTopApplication:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)dealloc;
-(id)init;
@end

