/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:36 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>

@class SBSearchResultsActionManager, UITextView, NSLayoutConstraint;

@interface SBSearchFirstTimeViewController : UIViewController {

	SBSearchResultsActionManager* _actionManager;
	UITextView* _textView;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _heightConstraint;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _interspaceConstraint;
	NSLayoutConstraint* _marginConstraint;

}

@property (assign) SBSearchResultsActionManager * actionManager;              //@synthesize actionManager=_actionManager - In the implementation block
@property (assign) UITextView * textView;                                     //@synthesize textView=_textView - In the implementation block
@property (assign) NSLayoutConstraint * widthConstraint;                      //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (assign) NSLayoutConstraint * heightConstraint;                     //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (assign) NSLayoutConstraint * topConstraint;                        //@synthesize topConstraint=_topConstraint - In the implementation block
@property (assign) NSLayoutConstraint * interspaceConstraint;                 //@synthesize interspaceConstraint=_interspaceConstraint - In the implementation block
@property (assign) NSLayoutConstraint * marginConstraint;                     //@synthesize marginConstraint=_marginConstraint - In the implementation block
+(id)viewController;
-(SBSearchResultsActionManager *)actionManager;
-(void)setActionManager:(SBSearchResultsActionManager *)arg1 ;
-(NSLayoutConstraint *)interspaceConstraint;
-(NSLayoutConstraint *)marginConstraint;
-(void)setInterspaceConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(void)dealloc;
-(void)setTextView:(UITextView *)arg1 ;
-(void)viewDidLoad;
-(NSLayoutConstraint *)widthConstraint;
-(NSLayoutConstraint *)heightConstraint;
-(UITextView *)textView;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topConstraint;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(char)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
@end
