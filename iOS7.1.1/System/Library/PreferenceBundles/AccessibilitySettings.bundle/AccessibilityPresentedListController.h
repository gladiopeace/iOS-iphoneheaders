/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/AccessibilityListController.h>

@protocol AccessibilityPresentedListDelegate;
@class UIBarButtonItem;

@interface AccessibilityPresentedListController : AccessibilityListController {

	bool _showsCancelButton;
	bool _showsSaveButton;
	<AccessibilityPresentedListDelegate>* _delegate;

}

@property (assign,nonatomic) <AccessibilityPresentedListDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * cancelButton; 
@property (nonatomic,readonly) UIBarButtonItem * saveButton; 
@property (assign,nonatomic) bool showsCancelButton;                                       //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (assign,nonatomic) bool showsSaveButton;                                         //@synthesize showsSaveButton=_showsSaveButton - In the implementation block
-(void)setShowsSaveButton:(bool)arg1 ;
-(bool)showsSaveButton;
-(id)saveButton;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)cancelButton;
-(CGSize)preferredContentSize;
-(void)setShowsCancelButton:(bool)arg1 ;
-(bool)showsCancelButton;
-(void)save:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(bool)canBeShownFromSuspendedState;
@end

