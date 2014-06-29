/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/RUIObjectModelDelegate.h>
#import <AppleAccountUI/RUILoaderDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol DelayedPushDelegate;
@class UINavigationController, NSMutableArray, RUILoader, NSOperationQueue, PreferencesRemoteUIDelegateTableCellButton, UIAlertView, UIActionSheet, CommerceRemoteUIDelegate;

@interface PreferencesRemoteUIDelegate : NSObject <RUIObjectModelDelegate, RUILoaderDelegate, UIAlertViewDelegate, UIActionSheetDelegate> {

	UINavigationController* _navigationController;
	NSMutableArray* _objectModels;
	RUILoader* _loader;
	NSMutableArray* _deleteLoaders;
	NSOperationQueue* _deleteQueue;
	PreferencesRemoteUIDelegateTableCellButton* _button;
	UIAlertView* _alertView;
	UIActionSheet* _actionSheet;
	CommerceRemoteUIDelegate* _commerceDelegate;
	<DelayedPushDelegate>* _delegate;
	int _forceActionSignal;
	bool _preventPresentation;
	int _deleteAllDocumentsAttemptCount;
	RUILoader* _lastDocumentDeleteLoader;

}

@property (assign,nonatomic) <DelayedPushDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) bool preventPresentation;                      //@synthesize preventPresentation=_preventPresentation - In the implementation block
@property (retain) RUILoader * lastDocumentDeleteLoader;                    //@synthesize lastDocumentDeleteLoader=_lastDocumentDeleteLoader - In the implementation block
-(void)confirmDeleteAll;
-(bool)preventPresentation;
-(id)lastDocumentDeleteLoader;
-(void)confirmationConfirmed:(id)arg1 ;
-(void)deleteAllDocuments;
-(void)setPreventPresentation:(bool)arg1 ;
-(void)setLastDocumentDeleteLoader:(id)arg1 ;
-(void)confirmationCanceled:(id)arg1 ;
-(void)cleanupLoader;
-(void)reloadQuotaInfo;
-(void)loadQuotaInfo;
-(void)reloadTopControllerWithAdditionalHeaders:(id)arg1 ;
-(void)loadURL:(id)arg1 postBody:(id)arg2 additionalHeaders:(id)arg3 ;
-(void)confirmDeleteWithTitle:(id)arg1 prompt:(id)arg2 explaination:(id)arg3 andContext:(id)arg4 ;
-(void)popAndReloadFromRemoteUI:(bool)arg1 additionalHeaders:(id)arg2 ;
-(void)willShowController:(id)arg1 ;
-(id)initWithNavigationController:(id)arg1 ;
-(void)loadURL:(id)arg1 postBody:(id)arg2 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 page:(id)arg2 toggledEditing:(bool)arg3 ;
-(unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2 ;
-(bool)objectModel:(id)arg1 page:(id)arg2 deletedTableRow:(id)arg3 atIndexPath:(id)arg4 withURL:(id)arg5 httpMethod:(id)arg6 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)_popObjectModelAnimated:(bool)arg1 ;
@end

