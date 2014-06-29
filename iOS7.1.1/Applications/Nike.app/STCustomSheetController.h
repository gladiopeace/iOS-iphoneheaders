/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Nike.app/Nike
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Nike/STRootViewController.h>

@protocol STCustomSheetControllerDelegate;
@class UILabel;

@interface STCustomSheetController : STRootViewController {

	<STCustomSheetControllerDelegate>* _delegate;
	UILabel* _customTextField;
	UILabel* _promptLabel;

}

@property (assign,nonatomic) <STCustomSheetControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)save;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)loadView;
-(void)cancel;
@end

