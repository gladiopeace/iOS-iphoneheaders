/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UINavigationController, MCDBrowsableContentModel, NSString;

@interface MCDPlayableContentViewController : UIViewController {

	UINavigationController* _navigationController;
	MCDBrowsableContentModel* _model;
	NSString* _bundleID;

}

@property (nonatomic,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
-(id)bundleID;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void).cxx_destruct;
-(void)_embedAppropriateViewController;
-(void)refreshNavigationStack;
-(id)initWithBundleID:(id)arg1 ;
@end
