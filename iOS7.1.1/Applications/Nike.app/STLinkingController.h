/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Nike.app/Nike
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Nike/STRootViewController.h>
#import <Nike/STEmpedLinkingManagerDelegate.h>
#import <Nike/STLinkingViewDelegate.h>

@class STEmpedLinkingManager, STLinkingView, UILabel;

@interface STLinkingController : STRootViewController <STEmpedLinkingManagerDelegate, STLinkingViewDelegate> {

	id _delegate;
	STEmpedLinkingManager* _linkingManager;
	STLinkingView* _linkingView;
	BOOL _didDismiss;
	UILabel* _messageLabel;

}

@property (assign,nonatomic) <STModalLinkingDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_setLinkingType:(int)arg1 animated:(BOOL)arg2 ;
-(BOOL)_dismissIfLinked;
-(void)cancelLinking;
-(void)linkingViewRequestsEmpedSearch:(id)arg1 ;
-(void)empedLinkingManager:(id)arg1 linkedStateChanged:(BOOL)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

