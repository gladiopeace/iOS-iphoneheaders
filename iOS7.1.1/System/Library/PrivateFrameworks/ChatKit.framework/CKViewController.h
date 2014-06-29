/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@interface CKViewController : UIViewController {

	bool _appeared;
	bool _appearing;

}

@property (assign,nonatomic) bool appeared;               //@synthesize appeared=_appeared - In the implementation block
@property (assign,nonatomic) bool appearing;              //@synthesize appearing=_appearing - In the implementation block
-(void)setAppearing:(bool)arg1 ;
-(void)significantTimeChange;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)parentControllerDidResume:(bool)arg1 animating:(bool)arg2 ;
-(void)viewDidAppearDeferredSetup;
-(void)performResumeDeferredSetup;
-(void)parentControllerDidBecomeActive;
-(void)prepareForResume;
-(void)setAppeared:(bool)arg1 ;
-(void)childViewControllersPerform:(SEL)arg1 ;
-(bool)appeared;
-(bool)appearing;
-(void)systemApplicationWillEnterForeground;
-(void)prepareForSuspend;
@end

