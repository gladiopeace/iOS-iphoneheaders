/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol MusicMiniPlayerActionsViewControllerDelegate;
@class NSArray, MPAVItem;

@interface MusicMiniPlayerActionsViewController : UITableViewController {

	NSArray* _actions;
	<MusicMiniPlayerActionsViewControllerDelegate>* _delegate;
	MPAVItem* _item;

}

@property (assign,nonatomic,__weak) <MusicMiniPlayerActionsViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MPAVItem * item;                                                             //@synthesize item=_item - In the implementation block
+(id)_titleForAction:(long long)arg1 ;
+(id)_imageForAction:(long long)arg1 ;
+(id)_actionsForItem:(id)arg1 ;
+(bool)hasActionsForItem:(id)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(id)item;
-(void)viewDidLoad;
-(void).cxx_destruct;
-(void)_avItemStoreIDDidChangeNotification:(id)arg1 ;
-(void)_updateActions;
@end

