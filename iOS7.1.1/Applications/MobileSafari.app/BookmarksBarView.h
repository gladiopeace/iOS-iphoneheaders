/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>
#import <MobileSafari/BookmarksNavigationControllerDelegate.h>
#import <MobileSafari/RotatablePopoverControllerDelegate.h>

@protocol BookmarksBarViewDelegate;
@class NSMutableArray, UIButton, WebBookmark, BookmarksNavigationController;

@interface BookmarksBarView : UIView <BookmarksNavigationControllerDelegate, RotatablePopoverControllerDelegate> {

	NSMutableArray* _bookmarkBarLabels;
	unsigned _bookmarkBarID;
	UIButton* _moreBookmarksButton;
	WebBookmark* _moreBookmarksParent;
	unsigned _moreBookmarksOffset;
	UIButton* _buttonUsedToShowNavigationController;
	BOOL _isShowingNavigationController;
	BookmarksNavigationController* _bookmarksNavigationController;
	BOOL _usesLightControls;
	<BookmarksBarViewDelegate>* _delegate;

}

@property (assign,nonatomic) BOOL usesLightControls;                             //@synthesize usesLightControls=_usesLightControls - In the implementation block
@property (assign,nonatomic) <BookmarksBarViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)browserPanel;
-(void)willHideBrowserPanel:(id)arg1 ;
-(void)closeBrowserPanel:(id)arg1 ;
-(void)didHideBrowserPanel:(id)arg1 ;
-(void)willShowBrowserPanel:(id)arg1 ;
-(void)didShowBrowserPanel:(id)arg1 ;
-(void)popoverController:(id)arg1 willPresentAfterRotationToInterfaceOrientation:(int)arg2 ;
-(void)setUsesLightControls:(BOOL)arg1 ;
-(BOOL)usesLightControls;
-(void)_clearBookmarksNavigationController;
-(void)_setButtonUsedToShowNavigationController:(id)arg1 ;
-(void)_dismissCurrentBookmarksPopover;
-(void)_createAllLabelButtons;
-(void)_reloadBookmarkLabels;
-(void)_receivedBookmarksChangedNotification:(id)arg1 ;
-(void)bookmarksNavigationController:(id)arg1 didSelectNavigationDestination:(id)arg2 ;
-(id)containingBookmarkForNavigationController:(id)arg1 ;
-(void)bookmarksNavigationControllerReloadDidFail:(id)arg1 ;
-(void)bookmarksNavigationControllerDidReload:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)_buttonTapped:(id)arg1 ;
@end

