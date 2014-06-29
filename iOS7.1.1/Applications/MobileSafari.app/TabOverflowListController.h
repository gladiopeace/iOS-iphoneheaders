/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol TabOverflowListControllerDelegate;
@class NSArray, TabDocument;

@interface TabOverflowListController : UITableViewController {

	NSArray* _tabDocuments;
	TabDocument* _selectedDocument;
	<TabOverflowListControllerDelegate>* _delegate;

}
-(id)initWithTabDocuments:(id)arg1 selectedDocument:(id)arg2 delegate:(id)arg3 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(CGSize)preferredContentSize;
@end

